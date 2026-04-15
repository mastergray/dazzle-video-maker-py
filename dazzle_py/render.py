"""Offline renderer — audio in, mp4 out.

Renders at 320x200 then upscales to target size. Pipes raw RGB frames to ffmpeg
which muxes with the source audio and encodes H.264/AAC in a single pass.
"""
from __future__ import annotations
import argparse
import subprocess
import sys
import time

import numpy as np

from audio import AudioFeatures
from palette import rainbow_palette, cycle
from effects import REGISTRY

W, H = 320, 200


def build_ffmpeg_cmd(audio_path, out_path, width, height, fps, crf):
    return [
        'ffmpeg', '-y',
        '-f', 'rawvideo',
        '-pix_fmt', 'rgb24',
        '-s', f'{width}x{height}',
        '-r', str(fps),
        '-i', '-',             # video from stdin
        '-i', audio_path,      # audio from file
        '-c:v', 'libx264',
        '-preset', 'medium',
        '-pix_fmt', 'yuv420p',
        '-crf', str(crf),
        '-c:a', 'aac',
        '-b:a', '192k',
        '-shortest',
        '-loglevel', 'error',
        out_path,
    ]


def scale_frame(rgb_small: np.ndarray, scale: int) -> np.ndarray:
    # Fast nearest-neighbour upscale with uint8 tiling
    return np.kron(rgb_small, np.ones((scale, scale, 1), dtype=np.uint8))


def pick_effect(effect_names, rng, avoid_names=None):
    """Pick a single effect, preferring ones not in avoid_names."""
    names = list(effect_names)
    if avoid_names:
        fresh = [n for n in names if n not in avoid_names]
        if fresh:
            names = fresh
    name = names[rng.integers(len(names))]
    return name, REGISTRY[name]()


def pick_effect_set(effect_names, rng, count, avoid_names=None, max_overlap=1):
    """Pick N distinct effects. Carry over at most `max_overlap` from `avoid_names`.

    max_overlap is a CEILING, not a target: when the fresh pool is large enough
    we prefer zero overlap. We only fall back to stale picks when the fresh pool
    can't cover `count`, at which point we take as many stale as needed (which
    may exceed max_overlap if the pool is really small).
    """
    names = list(effect_names)
    count = min(count, len(names))
    if not avoid_names:
        picks = rng.choice(len(names), size=count, replace=False).tolist()
        return [(names[i], REGISTRY[names[i]]()) for i in picks]

    avoid = set(avoid_names)
    fresh = [n for n in names if n not in avoid]
    stale = [n for n in names if n in avoid]

    # Prefer fully fresh. Only take stale when fresh pool is exhausted, respecting
    # max_overlap as a ceiling until forced.
    take_fresh = min(count, len(fresh))
    needed = count - take_fresh
    take_stale = min(needed, len(stale)) if needed > 0 else 0
    # Apply the ceiling: if we've already taken enough fresh, cap stale at max_overlap
    # (can still happen if pool is borderline)
    take_stale = min(take_stale, max(max_overlap, needed))

    picks = []
    if take_fresh:
        idx = rng.choice(len(fresh), size=take_fresh, replace=False)
        picks.extend(fresh[i] for i in idx)
    if take_stale:
        idx = rng.choice(len(stale), size=take_stale, replace=False)
        picks.extend(stale[i] for i in idx)

    rng.shuffle(picks)
    return [(n, REGISTRY[n]()) for n in picks]


def _soft_switch_prob(frames_since, min_frames, max_frames):
    """Ramp probability from 0 at min_frames to 1 at max_frames.

    Inside the first `min_frames` we never soft-switch. Past `max_frames` the forced
    switch kicks in, so this function only matters in between. Ramping the probability
    up with time means scenes don't all switch at exactly the first downbeat after
    min_frames (which would be boring), but longer-held scenes become increasingly
    likely to switch on any given downbeat.
    """
    span = max(1, max_frames - min_frames)
    progress = (frames_since - min_frames) / span
    return max(0.0, min(1.0, progress))


def render(audio_path, out_path, scale=3, fps=60, seed=None,
           switch_every=6.0, effects_filter=None, crf=23, analysis_json=None,
           use_sections=True, min_scene_sec=2.5, max_scene_sec=12.0,
           mode='scenes', overlay_min=3, overlay_max=5, max_overlap=1):
    rng = np.random.default_rng(seed)
    # Use same seed for numpy.random (used by effect internals)
    np.random.seed(rng.integers(0, 2**31 - 1))

    effect_names = list(REGISTRY.keys())
    if effects_filter:
        effect_names = [e for e in effect_names if e in effects_filter]
    if not effect_names:
        raise SystemExit(f'no effects match filter {effects_filter}')

    width = W * scale
    height = H * scale

    print(f'loading audio: {audio_path}')
    af = AudioFeatures(audio_path, fps=fps, analysis_json=analysis_json)
    print(f'  duration={af.duration_sec:.2f}s frames={af.n_frames} sr={af.sr}')
    print(f'  beats={int(af.beat.sum())} downbeats={int(af.downbeat.sum())} peaks={int(af.peak.sum())} '
          f'sections={len(af.section_change_frames)} silence_frames={int(af.in_silence.sum())}')
    print(f'rendering {af.n_frames} frames at {width}x{height}@{fps} to {out_path}')

    # Scene-switch policy:
    #   - section_change events = hard switch (always, provided min-scene met)
    #   - between sections, the next downbeat after min_scene_sec = soft switch
    #   - max_scene_sec = forced switch (beat-aligned if possible, else hard)
    section_frames = set(af.section_change_frames) if use_sections else set()
    downbeat_frames = set(np.where(af.downbeat)[0].tolist()) if use_sections else set()

    min_frames = int(min_scene_sec * fps)
    max_frames = int(max_scene_sec * fps)
    print(f'  policy: sections={len(section_frames)} downbeats={len(downbeat_frames)} '
          f'min_scene={min_scene_sec}s max_scene={max_scene_sec}s')

    buffer = np.zeros((H, W), dtype=np.uint8)
    palette = rainbow_palette()
    pal_shift = 0

    prev_names = []

    def _new_set():
        if mode == 'overlay':
            count = int(rng.integers(overlay_min, overlay_max + 1))
            return pick_effect_set(effect_names, rng, count,
                                   avoid_names=prev_names, max_overlap=max_overlap)
        else:
            name, eff = pick_effect(effect_names, rng, avoid_names=prev_names)
            return [(name, eff)]

    active = _new_set()
    prev_names = [n for n, _ in active]
    print(f'  [0.00s] {mode} -> {prev_names}')
    last_switch_frame = 0

    ffmpeg = subprocess.Popen(
        build_ffmpeg_cmd(audio_path, out_path, width, height, fps, crf),
        stdin=subprocess.PIPE,
    )

    t0 = time.time()
    try:
        for i in range(af.n_frames):
            t_sec = i / fps

            frames_since = i - last_switch_frame
            # Hard switch: a real section_change lands here and we've held long enough
            hard_switch = i in section_frames and frames_since >= min_frames
            # Soft switch: held at least min and a downbeat lands here
            soft_switch = (
                frames_since >= min_frames
                and i in downbeat_frames
                and not hard_switch  # avoid double-counting
                # Only fire if we're "due" — bias toward switching more often as we approach max_frames
                and (rng.random() < _soft_switch_prob(frames_since, min_frames, max_frames))
            )
            forced_switch = frames_since >= max_frames
            want_switch = hard_switch or soft_switch or forced_switch
            if want_switch and i > 0:
                active = _new_set()
                prev_names = [n for n, _ in active]
                buffer[:] = 0
                palette = rainbow_palette()
                if rng.random() < 0.5:
                    palette = cycle(palette, int(rng.integers(1, 255)))
                print(f'  [{t_sec:5.2f}s] {mode} -> {prev_names}')
                last_switch_frame = i

            feats = af.features_at(i)

            pal_shift = (pal_shift + 1 + int(feats['treble'] * 4)) % 255
            cur_pal = cycle(palette, pal_shift)

            fade_amt = 1 + int((1 - feats['rms']) * 2)
            nz = buffer > fade_amt
            buffer[nz] -= fade_amt
            buffer[~nz] = 0

            for _, eff in active:
                eff.step(buffer, feats)

            rgb = cur_pal[buffer]
            frame = scale_frame(rgb, scale) if scale != 1 else rgb
            ffmpeg.stdin.write(frame.tobytes())

            if (i + 1) % (fps * 2) == 0:
                elapsed = time.time() - t0
                pct = (i + 1) / af.n_frames * 100
                rate = (i + 1) / elapsed
                eta = (af.n_frames - i - 1) / rate if rate > 0 else 0
                print(f'  progress {pct:5.1f}%  {rate:5.1f} fps  eta {eta:.1f}s', flush=True)
    finally:
        ffmpeg.stdin.close()
        ffmpeg.wait()

    dt = time.time() - t0
    print(f'done in {dt:.1f}s  ({af.n_frames / dt:.1f} fps)')


def main():
    p = argparse.ArgumentParser(description='Dazzle-port offline renderer')
    p.add_argument('audio', help='input audio (WAV)')
    p.add_argument('output', help='output MP4')
    p.add_argument('--scale', type=int, default=3,
                   help='upscale factor (320x200 * scale); default 3 -> 960x600')
    p.add_argument('--fps', type=int, default=60)
    p.add_argument('--seed', type=int, default=None,
                   help='random seed (omit for per-run randomness)')
    p.add_argument('--switch-every', type=float, default=6.0,
                   help='seconds between effect switches (default 6.0)')
    p.add_argument('--effects', nargs='+', default=None,
                   help='restrict rotation to these effect names')
    p.add_argument('--crf', type=int, default=23,
                   help='H.264 quality (18=near-lossless, 23=default, 28=smaller). default 23')
    p.add_argument('--analysis', default=None,
                   help='pre-computed audio analysis JSON (omit to auto-run analyzer)')
    p.add_argument('--no-sections', action='store_true',
                   help='ignore section_change events, use fixed switch-every timer')
    p.add_argument('--min-scene', type=float, default=2.5,
                   help='minimum seconds to hold a scene (default 2.5)')
    p.add_argument('--max-scene', type=float, default=12.0,
                   help='maximum seconds before forcing a switch (default 12.0)')
    p.add_argument('--mode', choices=['scenes', 'overlay'], default='scenes',
                   help='scenes = one effect at a time (default); overlay = 3-8 simultaneous')
    p.add_argument('--overlay-min', type=int, default=4,
                   help='minimum effects in an overlay set (default 4)')
    p.add_argument('--overlay-max', type=int, default=5,
                   help='maximum effects in an overlay set (default 5, original Dazzle went up to 8)')
    p.add_argument('--max-overlap', type=int, default=1,
                   help='max effects carried over from the previous scene (default 1; may be exceeded when pool is too small to satisfy)')
    p.add_argument('--unique', action='store_true',
                   help='guarantee no effect from the previous scene appears in the next (equivalent to --max-overlap 0)')
    args = p.parse_args()
    max_overlap = 0 if args.unique else args.max_overlap
    render(args.audio, args.output,
           scale=args.scale, fps=args.fps, seed=args.seed,
           switch_every=args.switch_every, effects_filter=args.effects,
           crf=args.crf, analysis_json=args.analysis,
           use_sections=not args.no_sections,
           min_scene_sec=args.min_scene, max_scene_sec=args.max_scene,
           mode=args.mode, overlay_min=args.overlay_min, overlay_max=args.overlay_max,
           max_overlap=max_overlap)


if __name__ == '__main__':
    main()
