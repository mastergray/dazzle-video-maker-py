"""Offline renderer — audio in, mp4 out.

Renders at 320x200 then upscales to target size. Pipes raw RGB frames to ffmpeg
which muxes with the source audio and encodes H.264/AAC in a single pass.
"""
from __future__ import annotations
import argparse
import json
import os
import subprocess
import sys
import time

import numpy as np

from audio import AudioFeatures
from palette import rainbow_palette, cycle
from effects import REGISTRY
from post import REGISTRY as POST_REGISTRY, apply_post

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


def render(audio_path, out_path, scale=6, fps=60, seed=None,
           crf=23, analysis_json=None,
           mode='random', min_fx=4, max_fx=5, max_overlap=0,
           fixed_effects=None, profile_path=None,
           fixed_post=None, post_min=0, post_max=1,
           post_kwargs=None):
    """Render audio to MP4.

    mode='random': rotate through all 32 effects; each scene holds min_fx..max_fx
                   stacked effects, swaps on section_change (hard) and downbeat (soft).
                   Post effects are also randomly picked per scene (post_min..post_max).
    mode='fixed':  fixed_effects list IS the scene — stack all of them for the whole
                   render, no rotation. fixed_post is the post effect (or None).
    """
    # Hardcoded scheduler tuning (were CLI flags --min-scene/--max-scene/--no-sections,
    # now commented out in main(); values preserved here for identical behavior).
    _use_sections = True
    _min_scene_sec = 2.5
    _max_scene_sec = 12.0

    # Resolve seed to an int so we can record it in the profile for reproducibility.
    if seed is None:
        seed = int.from_bytes(os.urandom(4), 'big')
    rng = np.random.default_rng(seed)
    # Use same seed for numpy.random (used by effect internals)
    np.random.seed(rng.integers(0, 2**31 - 1))

    if mode == 'fixed':
        if not fixed_effects:
            raise SystemExit('--mode fixed requires --effects')
        effect_names = list(fixed_effects)
    else:
        effect_names = list(REGISTRY.keys())

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
    section_frames = set(af.section_change_frames) if _use_sections else set()
    downbeat_frames = set(np.where(af.downbeat)[0].tolist()) if _use_sections else set()

    min_frames = int(_min_scene_sec * fps)
    max_frames = int(_max_scene_sec * fps)
    print(f'  policy: sections={len(section_frames)} downbeats={len(downbeat_frames)} '
          f'min_scene={_min_scene_sec}s max_scene={_max_scene_sec}s')

    buffer = np.zeros((H, W), dtype=np.uint8)
    palette = rainbow_palette()
    pal_shift = 0

    prev_names = []
    post_names = list(POST_REGISTRY.keys())

    def _new_set():
        count = int(rng.integers(min_fx, max_fx + 1))
        return pick_effect_set(effect_names, rng, count,
                               avoid_names=prev_names, max_overlap=max_overlap)

    def _pick_post():
        """Pick post effects for this scene (random mode)."""
        if post_max <= 0:
            return []
        count = int(rng.integers(post_min, post_max + 1))
        if count <= 0:
            return []
        idxs = rng.choice(len(post_names), size=min(count, len(post_names)), replace=False)
        return [post_names[i] for i in idxs]

    if mode == 'fixed':
        active = [(n, REGISTRY[n]()) for n in effect_names]
        scene_post = list(fixed_post) if fixed_post else []
    else:
        active = _new_set()
        scene_post = _pick_post()
    prev_names = [n for n, _ in active]
    scene_log = [{'t_sec': 0.0, 'effects': list(prev_names), 'post': list(scene_post)}]
    post_label = f' post={scene_post}' if scene_post else ''
    print(f'  [0.00s] {mode} -> {prev_names}{post_label}')
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
            if mode == 'fixed':
                want_switch = False
            else:
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
                scene_post = _pick_post()
                buffer[:] = 0
                palette = rainbow_palette()
                if rng.random() < 0.5:
                    palette = cycle(palette, int(rng.integers(1, 255)))
                scene_log.append({'t_sec': round(t_sec, 3), 'effects': list(prev_names),
                                  'post': list(scene_post)})
                post_label = f' post={scene_post}' if scene_post else ''
                print(f'  [{t_sec:5.2f}s] {mode} -> {prev_names}{post_label}')
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

            # Apply post-production effects (mirror/radial/etc.) to the
            # paletted buffer before palette mapping.
            post_buf = buffer
            pkw = post_kwargs or {}
            for pname in scene_post:
                post_buf = apply_post(post_buf, pname, frame_idx=i, **pkw)

            rgb = cur_pal[post_buf]
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
    render_fps = af.n_frames / dt
    print(f'done in {dt:.1f}s  ({render_fps:.1f} fps)')

    # ----- Build render profile -----
    profile = {
        'input': {
            'audio': os.path.abspath(audio_path),
            'duration_sec': round(af.duration_sec, 3),
            'sample_rate': af.sr,
        },
        'output': {
            'path': os.path.abspath(out_path),
            'width': width,
            'height': height,
            'fps': fps,
            'n_frames': int(af.n_frames),
        },
        'settings': {
            'mode': mode,
            'scale': scale,
            'crf': crf,
            'seed': int(seed),
            **({'fixed_effects': list(fixed_effects)}
               if mode == 'fixed'
               else {'min_fx': min_fx, 'max_fx': max_fx, 'overlap': max_overlap}),
        },
        'audio_analysis_summary': {
            'beats': int(af.beat.sum()),
            'downbeats': int(af.downbeat.sum()),
            'peaks': int(af.peak.sum()),
            'sections': len(af.section_change_frames),
            'silence_frames': int(af.in_silence.sum()),
        },
        'scenes': scene_log,
        'render_stats': {
            'wall_sec': round(dt, 2),
            'render_fps': round(render_fps, 2),
        },
        'audio_analysis': af.raw_analysis,
    }

    # ----- End-of-render console summary -----
    s = profile['settings']
    print()
    print('=== render summary ===')
    print(f'  input:   {profile["input"]["audio"]}')
    print(f'  output:  {profile["output"]["path"]}  ({width}x{height}@{fps})')
    print(f'  mode:    {s["mode"]}')
    if mode == 'fixed':
        print(f'  effects: {", ".join(s["fixed_effects"])}')
    else:
        print(f'  density: min={s["min_fx"]} max={s["max_fx"]} overlap={s["overlap"]}')
    print(f'  seed:    {s["seed"]}')
    asum = profile['audio_analysis_summary']
    print(f'  audio:   {profile["input"]["duration_sec"]:.2f}s  '
          f'beats={asum["beats"]} downbeats={asum["downbeats"]} '
          f'peaks={asum["peaks"]} sections={asum["sections"]}')
    print(f'  scenes:  {len(scene_log)} scene(s) rendered')
    print(f'  render:  {dt:.1f}s at {render_fps:.1f} fps')

    # ----- Write profile JSON -----
    if profile_path is not None:
        with open(profile_path, 'w') as f:
            json.dump(profile, f, indent=2)
        print(f'  profile: {os.path.abspath(profile_path)}')
    else:
        print('  profile: (skipped, --no-profile)')

    # ----- Clean up auto-generated analysis tempfile -----
    if getattr(af, '_tmp_json', None):
        try:
            os.remove(af._tmp_json)
        except OSError:
            pass


def main():
    fx_names = sorted(REGISTRY.keys())
    post_names = sorted(POST_REGISTRY.keys())
    epilog = ('Available effects ({}):\n  '.format(len(fx_names)) + ', '.join(fx_names)
              + '\n\nAvailable post effects ({}):\n  '.format(len(post_names))
              + ', '.join(post_names))
    p = argparse.ArgumentParser(
        description='Dazzle-port offline renderer',
        epilog=epilog,
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    p.add_argument('audio', help='input audio (WAV)')
    p.add_argument('output', help='output MP4')

    mode_grp = p.add_argument_group('mode selection')
    mode_grp.add_argument('--mode', choices=['random', 'fixed'], default='random',
                          help='random = rotate all 32 effects with --min..--max stacked per '
                               'scene (default); fixed = use --effects as a single static scene')
    mode_grp.add_argument('--effects', nargs='+', default=None,
                          help='[fixed mode] exact list of effects to stack as one scene '
                               '(see full list in epilog)')
    mode_grp.add_argument('--post', nargs='+', default=None,
                          help='[fixed mode] post-production effect(s) to apply, in order. '
                               'Multiple = stacked (e.g. --post mirror_quad wave). '
                               'See full list in epilog.')

    rand_grp = p.add_argument_group('random-mode options')
    rand_grp.add_argument('--min', dest='min_fx', type=int, default=4,
                          help='minimum stacked effects per scene (default 4)')
    rand_grp.add_argument('--max', dest='max_fx', type=int, default=5,
                          help='maximum stacked effects per scene (default 5; original '
                               'Dazzle went up to 8)')
    rand_grp.add_argument('--overlap', type=int, default=0,
                          help='max effects carried over from the previous scene '
                               '(default 0 = fully disjoint; ceiling may be exceeded '
                               'if pool is small)')
    rand_grp.add_argument('--post-min', type=int, default=0,
                          help='minimum post effects per scene (default 0 = some scenes '
                               'have no post)')
    rand_grp.add_argument('--post-max', type=int, default=1,
                          help='maximum post effects per scene (default 1)')
    # --min-scene / --max-scene / --no-sections removed from the CLI; scheduler
    # defaults are now hardcoded in render(). Uncomment if user control returns.
    # rand_grp.add_argument('--min-scene', type=float, default=2.5,
    #                       help='minimum seconds to hold a scene (default 2.5)')
    # rand_grp.add_argument('--max-scene', type=float, default=12.0,
    #                       help='maximum seconds before forcing a switch (default 12.0)')
    # rand_grp.add_argument('--no-sections', action='store_true',
    #                       help='ignore section_change events from the analyzer')

    out_grp = p.add_argument_group('output / encoding')
    out_grp.add_argument('--scale', type=int, default=6,
                         help='upscale factor (320x200 * scale); default 6 -> 1920x1200 '
                              '(YouTube-friendly)')
    out_grp.add_argument('--fps', type=int, default=60)
    out_grp.add_argument('--crf', type=int, default=23,
                         help='H.264 quality (18=near-lossless, 23=default, 28=smaller). '
                              'default 23')
    out_grp.add_argument('--seed', type=int, default=None,
                         help='random seed (omit for per-run randomness; resolved seed is '
                              'recorded in the profile)')
    out_grp.add_argument('--analysis', default=None,
                         help='pre-computed audio analysis JSON (omit to auto-run analyzer; '
                              'auto-generated files are deleted after render)')

    prof_grp = p.add_argument_group('profile')
    prof_grp.add_argument('--profile', default=None,
                          help='path to write render profile JSON (default: '
                               '<output>.profile.json next to the MP4). Contains all '
                               'settings + inlined analysis.')
    prof_grp.add_argument('--no-profile', action='store_true',
                          help='skip writing the profile JSON (console summary still prints)')

    post_grp = p.add_argument_group('post-production parameters',
                                    'Tune parameterised post effects. Params only apply '
                                    'when their post effect is active in a scene.')
    post_grp.add_argument('--tile-nx', type=int, default=2,
                          help='[tile] horizontal repeats (default 2)')
    post_grp.add_argument('--tile-ny', type=int, default=2,
                          help='[tile] vertical repeats (default 2)')
    post_grp.add_argument('--radial-n', type=int, default=6,
                          help='[radial] fold count (default 6 = hexagonal)')
    post_grp.add_argument('--kaleidoscope-n', type=int, default=6,
                          help='[kaleidoscope] fold count (default 6)')
    post_grp.add_argument('--twist-amount', type=float, default=0.8,
                          help='[twist] rotation at center in radians; negative = opposite '
                               'direction (default 0.8)')
    post_grp.add_argument('--scroll-speed-x', type=float, default=1.0,
                          help='[scroll] horizontal pixels/frame (default 1.0)')
    post_grp.add_argument('--scroll-speed-y', type=float, default=0.0,
                          help='[scroll] vertical pixels/frame (default 0.0; set both for '
                               'diagonal)')
    post_grp.add_argument('--wave-amplitude', type=float, default=8.0,
                          help='[wave] max displacement in pixels (default 8)')
    post_grp.add_argument('--wave-frequency', type=float, default=0.04,
                          help='[wave] sine frequency (default 0.04; higher = more ripples)')
    post_grp.add_argument('--wave-speed', type=float, default=0.1,
                          help='[wave] animation speed (default 0.1)')
    args = p.parse_args()

    # Mode-specific constraint validation
    if args.mode == 'fixed':
        if not args.effects:
            p.error('--mode fixed requires --effects NAME [NAME ...]')
        unknown = [e for e in args.effects if e not in REGISTRY]
        if unknown:
            valid = ', '.join(sorted(REGISTRY.keys()))
            p.error(f"unknown effect name(s): {', '.join(unknown)}\n  valid: {valid}")
    else:  # random
        if args.effects:
            p.error('--effects is only valid with --mode fixed; for random mode use all 32')
        if args.min_fx > args.max_fx:
            p.error(f'--min ({args.min_fx}) must be <= --max ({args.max_fx})')

    if args.post:
        unknown_post = [p_ for p_ in args.post if p_ not in POST_REGISTRY]
        if unknown_post:
            valid = ', '.join(sorted(POST_REGISTRY.keys()))
            p.error(f"unknown post effect(s): {', '.join(unknown_post)}\n  valid: {valid}")

    # Resolve profile path: explicit --profile wins; --no-profile disables; else derive.
    if args.no_profile:
        profile_path = None
    elif args.profile is not None:
        profile_path = args.profile
    else:
        base, _ = os.path.splitext(args.output)
        profile_path = base + '.profile.json'

    post_kwargs = {
        'nx': args.tile_nx, 'ny': args.tile_ny,
        'n': args.radial_n,  # shared by radial + kaleidoscope
        'amount': args.twist_amount,
        'speed_x': args.scroll_speed_x, 'speed_y': args.scroll_speed_y,
        'amplitude': args.wave_amplitude, 'frequency': args.wave_frequency,
        'speed': args.wave_speed,
    }
    render(args.audio, args.output,
           scale=args.scale, fps=args.fps, seed=args.seed,
           crf=args.crf, analysis_json=args.analysis,
           mode=args.mode, min_fx=args.min_fx, max_fx=args.max_fx,
           max_overlap=args.overlap, fixed_effects=args.effects,
           profile_path=profile_path,
           fixed_post=args.post, post_min=args.post_min, post_max=args.post_max,
           post_kwargs=post_kwargs)


if __name__ == '__main__':
    main()
