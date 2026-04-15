# Dazzle — Audio-Reactive Python Port

Python port of MicroTronics Dazzle 4.0 (1990 DOS pattern-generator screensaver),
reimplemented as an offline audio-reactive video renderer. Takes a WAV in,
writes an MP4 out, with the original 32 shape effects driven by beat/onset/
section/energy data from a pre-analysis pass.

## Requirements

- Python 3.8+
- `numpy`, `scipy`, `soundfile` — `pip install numpy scipy soundfile`
- `ffmpeg` and `ffprobe` on PATH — encode pipeline and analyzer probe

## Quick Start

Run everything from `dazzle_py/`. Simplest possible invocation:

```
python3 render.py song.wav out.mp4
```

This renders at 1920×1200 (`--scale 6`), 60 fps, random mode with 4–5 effects
stacked per scene, scenes switching on section/downbeat boundaries. A
`out.profile.json` is written alongside with all settings + the full audio
analysis inlined.

## Examples

Defaults are tuned for YouTube uploads; override as needed.

```
# Faster preview render at 960x600
python3 render.py song.wav preview.mp4 --scale 3

# Single static effect for the whole song
python3 render.py song.wav atom.mp4 --mode fixed --effects atom

# Two specific effects stacked together
python3 render.py song.wav combo.mp4 --mode fixed --effects spiral puffs

# Dense overlay (6–8 effects per scene)
python3 render.py song.wav dense.mp4 --min 6 --max 8

# Allow 2 effects to carry over between scenes (default is 0 = disjoint)
python3 render.py song.wav carry.mp4 --overlap 2

# Reuse a cached analysis JSON (huge time saver when iterating on visuals)
python3 render.py song.wav v1.mp4 --analysis /tmp/cached.json
python3 render.py song.wav v2.mp4 --analysis /tmp/cached.json --seed 99

# Skip the sidecar profile
python3 render.py song.wav tmp.mp4 --no-profile

# Build the HTML visual guide (32 clips, one per effect)
python3 build_effects_guide.py --output-dir ./effects-guide
```

## CLI Reference

`python3 render.py --help` prints the full list; condensed summary:

**Positional**
- `audio` — input WAV
- `output` — output MP4

**Mode selection**
- `--mode {random,fixed}` — default `random`
- `--effects NAME [NAME ...]` — fixed-mode only; exact scene composition

**Random-mode options**
- `--min N` — minimum stacked effects per scene (default 4)
- `--max N` — maximum stacked effects per scene (default 5)
- `--overlap N` — max effects carried from previous scene (default 0)

**Output / encoding**
- `--scale N` — upscale factor from 320×200 (default 6 → 1920×1200)
- `--fps N` — default 60
- `--crf N` — H.264 quality; lower is bigger/sharper (default 23)
- `--seed N` — RNG seed; omit for per-run randomness
- `--analysis PATH` — pre-computed audio analysis JSON

**Profile**
- `--profile PATH` — custom profile path (default `<output>.profile.json`)
- `--no-profile` — skip writing the profile JSON

## Modes

**`random`** (default) — rotate through all 32 effects. Each scene stacks
`--min` to `--max` effects simultaneously; scenes switch on analyzer-detected
section changes (hard switch) and on downbeats (probabilistic soft switch).
Use `--overlap` to control how disjoint consecutive scenes are.

**`fixed`** — the `--effects` list *is* the scene. All named effects stack
and run statically for the whole render. No rotation, no switching.
Good for showcasing a single effect or composing a specific look.

## Effects (32)

All 32 shape generators from Dazzle 4.0:

`atom`, `bars`, `boxes`, `curves`, `diag1`, `diag2`, `diag3`, `diag4`,
`ellipse`, `formula1`, `grid`, `hexagon`, `lines`, `lotsadots`, `lotsadots2`,
`pedals`, `puffs`, `ribbons`, `sierpinski`, `sine`, `spiral`, `spiral1`,
`squares`, `streamer`, `sweep`, `sweep2`, `sweep3`, `triangles`, `tunnel`,
`wandering`, `zigstream`, `zigzags`

For a visual catalog, run `python3 build_effects_guide.py` and open
`./effects-guide/index.html`. Each card has a 6s sample clip (hover to play)
and a one-line description.

## Output Artifacts

**`<name>.mp4`** — the rendered video, H.264/AAC, scaled per `--scale`.

**`<name>.profile.json`** — full record of the render for reproducibility:
all CLI settings, the resolved seed, a per-scene timeline, audio analysis
summary, and the inlined analysis blob (per-frame features — tends to be
~150KB for a 30s clip). Rebuild bit-identically with the same input +
same seed + same flags. Skip with `--no-profile`.

**Analyzer tempfiles** — if you don't pass `--analysis`, the renderer invokes
`analyze_audio.py` to a tempfile which is deleted after the render completes.
User-supplied analysis files are never touched.

## Project Structure

```
dazzle_py/
  render.py                  # main CLI / scene scheduler / ffmpeg pipeline
  audio.py                   # AudioFeatures: load + interpolate + 3-band FFT
  analyze_audio.py           # vendored analyzer (beats, onsets, sections, …)
  palette.py                 # VGA-style rainbow palette + cycling helpers
  effects/
    __init__.py              # REGISTRY of all 32 effects
    _draw.py                 # shared line / polygon / circle primitives
    <effect>.py              # one file per effect
  build_effects_guide.py     # renders static HTML catalog of all effects
```

## Future Considerations

- **Kaleidoscope / tile post-pass** — v5.0 had "effect modes" (Quilt, Mesh,
  heXagon, Starburst, …) that applied a compositing pass on top of any shape
  generator. v4.0 has only shape generators. Adding an optional mirror-tile
  pass would let any of the 32 effects render kaleidoscopically.
- **MIDI input** — drive effect parameters from MIDI note-on / CC events as
  an alternative (or supplement) to FFT reactivity.
- **SRT subtitle track** — label the active effect(s) per scene in the
  exported video.
- **More effects** — the v5.0 catalog added `balls`, `cones`, `corkscrew`,
  `cycloids`, `daisies`, `hilbert`, `tiles`, `wedges`, etc. These aren't in
  the v4.0 reference and would be additions rather than ports.
