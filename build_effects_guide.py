"""Build a static HTML visual guide to every supported Dazzle effect.

Renders a short single-effect clip per registered effect (via render.py in
--mode fixed), then emits an index.html that embeds each clip with its
description. Run from the repo root.

    python3 build_effects_guide.py [--output-dir DIR] [--audio WAV] [--length SEC]
"""
from __future__ import annotations
import argparse
import html
import os
import subprocess
import sys
import time
from pathlib import Path

from effects import REGISTRY


DEFAULT_AUDIO = '/home/mastergray/codex/seamless-disarray/songs/clips/test/LANDR-10-11-25-2__clip02_02m01s_02m31s_reel30.wav'

# One-line description per effect — focused on what the viewer sees, not the algorithm.
DESCRIPTIONS = {
    'atom':       'Nucleus at center with electrons orbiting along tilted elliptical shells.',
    'bars':       'Vertical or horizontal bars whose heights ripple to audio.',
    'boxes':      'Concentric rectangles expanding outward from an off-center pivot.',
    'curves':     'Quadratic Bezier curves with wandering control points.',
    'diag1':      'Parallel diagonals (top-left to bottom-right), scrolling.',
    'diag2':      'Parallel diagonals (top-right to bottom-left), scrolling.',
    'diag3':      'Both diagonals crossing as a woven mesh, scrolling opposite ways.',
    'diag4':      'Diagonal rays radiating from an off-center pivot, rotating.',
    'ellipse':    'Rotated ellipses traced parametrically.',
    'formula1':   'Lissajous-family parametric curves with shifting frequency ratios.',
    'grid':       'Horizontal and vertical grid lines scrolling with offset.',
    'hexagon':    'Concentric rotating hexagons — audio-reactive radius and rotation.',
    'lines':      'Random line segments painted across the screen.',
    'lotsadots':  'Random pixel scatter with audio-driven color pulses.',
    'lotsadots2': 'Clustered dot scatter around drifting gaussian centers.',
    'pedals':     'Rose curves (flower / petal patterns) traced around center.',
    'puffs':      'Small radial bursts at random positions.',
    'ribbons':    'Parallel flowing sine-bands sweeping across the screen.',
    'sierpinski': 'Chaos-game Sierpinski triangle, audio biases the vertex weights.',
    'sine':       'A single sine wave scanning horizontally with varying freq/amplitude.',
    'spiral':     'Archimedean spiral traced outward from center.',
    'spiral1':    'Logarithmic spiral (r = a · e^(b·θ)).',
    'squares':    'Random axis-aligned rectangle outlines.',
    'streamer':   'A particle with momentum leaving a connected trail.',
    'sweep':      'Rotating radial arms sweeping around center.',
    'sweep2':     'Rotating sweep with off-center pivot and pulsing arm length.',
    'sweep3':     'Dashed / broken rotating sweep with per-segment color bands.',
    'triangles':  'Random triangle polygon outlines.',
    'tunnel':     'Concentric polygons receding with perspective — bass drives speed.',
    'wandering':  'Biased random-walk particle leaving a trail of pixels.',
    'zigstream':  'Streamer-style particle that zigzags instead of drifting smoothly.',
    'zigzags':    'Zigzag polyline — connected segments with alternating angles.',
}


HTML_TEMPLATE = """<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="utf-8">
<title>Dazzle Effects Guide</title>
<style>
  :root {{
    --bg: #0e0e12;
    --fg: #e8e8ea;
    --muted: #8a8a92;
    --accent: #6ad1ff;
    --card-bg: #181820;
    --card-border: #2a2a35;
  }}
  html, body {{ margin: 0; padding: 0; background: var(--bg); color: var(--fg);
    font-family: -apple-system, 'Segoe UI', Roboto, sans-serif; }}
  header {{ padding: 1.5rem 2rem 1rem; border-bottom: 1px solid var(--card-border); }}
  header h1 {{ margin: 0; font-size: 1.6rem; }}
  header p {{ margin: 0.4rem 0 0; color: var(--muted); font-size: 0.95rem; }}
  main {{ padding: 1.5rem 2rem; }}
  .grid {{
    display: grid; gap: 1.25rem;
    grid-template-columns: repeat(auto-fill, minmax(320px, 1fr));
  }}
  .card {{
    background: var(--card-bg); border: 1px solid var(--card-border);
    border-radius: 8px; overflow: hidden;
    display: flex; flex-direction: column;
    transition: transform 0.15s, border-color 0.15s;
  }}
  .card:hover {{ transform: translateY(-2px); border-color: var(--accent); }}
  .card video {{ width: 100%; display: block; background: #000; cursor: pointer; }}
  .card-body {{ padding: 0.8rem 1rem 1rem; }}
  .card-body h2 {{ margin: 0 0 0.3rem; font-size: 1.05rem; color: var(--accent);
    font-family: 'JetBrains Mono', Menlo, monospace; }}
  .card-body p {{ margin: 0; color: var(--muted); font-size: 0.9rem; line-height: 1.4; }}
  footer {{ padding: 1.5rem 2rem 2rem; color: var(--muted); font-size: 0.85rem; }}
  code {{ font-family: 'JetBrains Mono', Menlo, monospace; background: #222230;
    padding: 0.1rem 0.35rem; border-radius: 3px; }}
</style>
</head>
<body>
<header>
  <h1>Dazzle Effects Guide</h1>
  <p>{count} effects ported from Dazzle 4.0 (1990). Each clip below renders
    one effect in isolation over the same {length}s audio snippet. Hover a tile
    to play; click to toggle controls. Combine effects in random mode, or stack
    explicitly with <code>--mode fixed --effects NAME1 NAME2 …</code>.</p>
</header>
<main>
  <div class="grid">
{cards}
  </div>
</main>
<footer>
  Generated {stamp} · source audio: {audio}
</footer>
</body>
</html>
"""

CARD_TEMPLATE = """    <div class="card">
      <video src="clips/{name}.mp4" loop muted playsinline preload="metadata"
             onmouseenter="this.play()"
             onmouseleave="this.pause(); this.currentTime = 0;"
             onclick="this.controls = !this.controls;"></video>
      <div class="card-body">
        <h2>{name}</h2>
        <p>{description}</p>
      </div>
    </div>"""


def slice_audio(src_audio: str, dst_wav: Path, length_sec: float) -> None:
    """Use ffmpeg to produce a short slice of src_audio at dst_wav."""
    subprocess.check_call([
        'ffmpeg', '-y', '-i', src_audio,
        '-t', str(length_sec),
        '-c', 'copy',
        '-loglevel', 'error',
        str(dst_wav),
    ])


def render_clip(audio_path: Path, clip_path: Path, effect: str,
                scale: int, seed: int, crf: int) -> None:
    subprocess.check_call([
        'python3', 'render.py',
        str(audio_path), str(clip_path),
        '--mode', 'fixed',
        '--effects', effect,
        '--scale', str(scale),
        '--seed', str(seed),
        '--crf', str(crf),
        '--no-profile',
    ], stdout=subprocess.DEVNULL)


def build_index(output_dir: Path, names: list[str], length: float, audio_src: str) -> None:
    cards = []
    for name in names:
        desc = DESCRIPTIONS.get(name, 'No description.')
        cards.append(CARD_TEMPLATE.format(
            name=html.escape(name),
            description=html.escape(desc),
        ))
    page = HTML_TEMPLATE.format(
        count=len(names),
        length=length,
        cards='\n'.join(cards),
        stamp=time.strftime('%Y-%m-%d'),
        audio=html.escape(os.path.basename(audio_src)),
    )
    (output_dir / 'index.html').write_text(page)


def main() -> int:
    p = argparse.ArgumentParser(description='Build HTML visual guide of all Dazzle effects')
    p.add_argument('--output-dir', default='./effects-guide',
                   help='directory to write index.html + clips/ (default: ./effects-guide)')
    p.add_argument('--audio', default=DEFAULT_AUDIO,
                   help='source audio (will be sliced to --length)')
    p.add_argument('--length', type=float, default=6.0,
                   help='seconds of audio per clip (default 6)')
    p.add_argument('--scale', type=int, default=3,
                   help='upscale factor for clips; default 3 -> 960x600 (web-friendly)')
    p.add_argument('--crf', type=int, default=28,
                   help='H.264 quality (lower=bigger files, higher=smaller); default 28 '
                        '(guide-tuned; render.py default is 23)')
    p.add_argument('--seed', type=int, default=42,
                   help='seed for reproducibility (default 42)')
    p.add_argument('--skip-existing', action='store_true',
                   help='skip clips that already exist')
    p.add_argument('--only', nargs='+', default=None,
                   help='render only these effect names (for testing)')
    args = p.parse_args()

    if not Path(args.audio).exists():
        print(f'error: source audio not found: {args.audio}', file=sys.stderr)
        return 1

    output_dir = Path(args.output_dir).resolve()
    clips_dir = output_dir / 'clips'
    clips_dir.mkdir(parents=True, exist_ok=True)

    slice_path = output_dir / '_guide_audio.wav'
    print(f'[guide] slicing {args.length}s audio -> {slice_path}')
    slice_audio(args.audio, slice_path, args.length)

    all_names = sorted(REGISTRY.keys())
    names = [n for n in all_names if args.only is None or n in args.only]
    if not names:
        print('error: no effects match --only', file=sys.stderr)
        return 1

    missing_desc = [n for n in names if n not in DESCRIPTIONS]
    if missing_desc:
        print(f'warning: missing descriptions for: {missing_desc}', file=sys.stderr)

    print(f'[guide] rendering {len(names)} clips at {320*args.scale}x{200*args.scale}')
    t0 = time.time()
    for i, name in enumerate(names, 1):
        clip_path = clips_dir / f'{name}.mp4'
        if args.skip_existing and clip_path.exists():
            print(f'  [{i:2}/{len(names)}] {name}: skip (exists)')
            continue
        ts = time.time()
        render_clip(slice_path, clip_path, name, args.scale, args.seed, args.crf)
        print(f'  [{i:2}/{len(names)}] {name}: {time.time() - ts:.1f}s')

    build_index(output_dir, names, args.length, args.audio)
    print(f'[guide] wrote {output_dir/"index.html"}')
    print(f'[guide] total {time.time() - t0:.1f}s')
    return 0


if __name__ == '__main__':
    sys.exit(main())
