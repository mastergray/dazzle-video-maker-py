# Dazzle — Audio-Reactive Python Port

Python port of MicroTronics Dazzle 4.0 (1990 DOS pattern-generator screensaver),
reimplemented as an offline audio-reactive video renderer. Takes a WAV in,
writes an MP4 out, with the original 32 shape effects driven by beat/onset/
section/energy data from a pre-analysis pass. Includes 10 post-production
effects (mirror, tile, kaleidoscope, twist, scroll, wave) that transform the
output of any shape generator into symmetric, tiled, or animated compositions.

## Requirements

- Python 3.8+
- `numpy`, `scipy`, `soundfile` — `pip install numpy scipy soundfile`
- `ffmpeg` and `ffprobe` on PATH — encode pipeline and analyzer probe

## Quick Start

Run everything from the repo root. Simplest possible invocation:

```
python3 render.py song.wav out.mp4
```

This renders at 1920×1200 (`--scale 6`), 60 fps, random mode with 4–5 effects
stacked per scene, scenes switching on section/downbeat boundaries. Post
effects are randomly applied (0–1 per scene). A `out.profile.json` is written
alongside with all settings + the full audio analysis inlined.

## Examples

### Basic rendering

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
```

### Post-production effects

```
# Fixed mode with a single post effect — kaleidoscope look
python3 render.py song.wav mirror.mp4 --mode fixed --effects boxes spiral --post mirror_quad

# 6-fold radial symmetry
python3 render.py song.wav radial.mp4 --mode fixed --effects hexagon lines --post radial

# 12-fold kaleidoscope (mirrored wedges, more ornate than radial)
python3 render.py song.wav kal.mp4 --mode fixed --effects zigzags streamer \
    --post kaleidoscope --kaleidoscope-n 12

# 2x2 tile grid — pattern repeats 4 times
python3 render.py song.wav tiled.mp4 --mode fixed --effects sierpinski puffs --post tile

# Vortex twist — negative for opposite spin
python3 render.py song.wav vortex.mp4 --mode fixed --effects spiral sweep \
    --post twist --twist-amount -1.5

# Animated wave distortion
python3 render.py song.wav wavy.mp4 --mode fixed --effects hexagon boxes \
    --post wave --wave-amplitude 12

# Vertical scroll
python3 render.py song.wav scroll.mp4 --mode fixed --effects diag1 diag3 \
    --post scroll --scroll-speed-x 0 --scroll-speed-y 2
```

### Stacking post effects

Post effects chain — each transforms the output of the previous. Order matters.

```
# Mirror into 4 quadrants, then wave-distort the result
python3 render.py song.wav combo1.mp4 --mode fixed --effects boxes spiral hexagon \
    --post mirror_quad wave

# Tile into 2x2 grid, then twist the tiled pattern
python3 render.py song.wav combo2.mp4 --mode fixed --effects sierpinski puffs \
    --post tile twist

# 8-fold kaleidoscope that scrolls continuously
python3 render.py song.wav combo3.mp4 --mode fixed --effects zigzags streamer \
    --post kaleidoscope scroll --kaleidoscope-n 8
```

### Random mode with post effects

```
# Every scene gets exactly 1 random post effect
python3 render.py song.wav posted.mp4 --post-min 1 --post-max 1

# Some scenes get post, some don't (default: min=0 max=1)
python3 render.py song.wav mixed.mp4

# Every scene gets 2 stacked post effects
python3 render.py song.wav double.mp4 --post-min 2 --post-max 2
```

### Other options

```
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
- `--post NAME [NAME ...]` — fixed-mode only; post effect(s) to apply in order

**Random-mode options**
- `--min N` — minimum stacked effects per scene (default 4)
- `--max N` — maximum stacked effects per scene (default 5)
- `--overlap N` — max effects carried from previous scene (default 0)
- `--post-min N` — minimum post effects per scene (default 0)
- `--post-max N` — maximum post effects per scene (default 1)

**Output / encoding**
- `--scale N` — upscale factor from 320×200 (default 6 → 1920×1200)
- `--fps N` — default 60
- `--crf N` — H.264 quality; lower is bigger/sharper (default 23)
- `--seed N` — RNG seed; omit for per-run randomness
- `--analysis PATH` — pre-computed audio analysis JSON

**Profile**
- `--profile PATH` — custom profile path (default `<output>.profile.json`)
- `--no-profile` — skip writing the profile JSON

**Post-production parameters**
- `--tile-nx N` / `--tile-ny N` — grid repeats (default 2×2)
- `--radial-n N` — fold count for radial (default 6)
- `--kaleidoscope-n N` — fold count for kaleidoscope (default 6)
- `--twist-amount N` — radians; negative = opposite direction (default 0.8)
- `--scroll-speed-x N` / `--scroll-speed-y N` — pixels/frame (default 1.0, 0.0)
- `--wave-amplitude N` — max displacement pixels (default 8)
- `--wave-frequency N` — sine frequency (default 0.04)
- `--wave-speed N` — animation speed (default 0.1)

## Modes

**`random`** (default) — rotate through all 32 effects. Each scene stacks
`--min` to `--max` effects simultaneously; scenes switch on analyzer-detected
section changes (hard switch) and on downbeats (probabilistic soft switch).
Use `--overlap` to control how disjoint consecutive scenes are. Post effects
are also randomly selected per scene (controlled by `--post-min`/`--post-max`).

**`fixed`** — the `--effects` list *is* the scene. All named effects stack
and run statically for the whole render. No rotation, no switching.
`--post` specifies the post effect(s) to apply; multiple names are stacked
in order. Good for showcasing a specific look.

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

## Post-Production Effects (10)

Post effects transform the paletted buffer after all shape effects have drawn
but before palette mapping and upscaling. They're fast (array operations) and
work with any effect combination. Multiple post effects can be stacked.

**Symmetry**
- `mirror_h` — left half → mirror right (bilateral/Rorschach symmetry)
- `mirror_v` — top half → mirror bottom
- `mirror_quad` — top-left quadrant → mirror into all four quadrants
- `mirror_diamond` — diagonal-axis kaleidoscope (rotated 45° from quad)
- `radial` — N-fold rotational symmetry (`--radial-n`, default 6 = hexagonal)
- `kaleidoscope` — N-fold with alternating mirrored wedges
  (`--kaleidoscope-n`, default 6). More ornate than radial — true toy-
  kaleidoscope symmetry.

**Spatial**
- `tile` — repeat center portion in NxN grid (`--tile-nx`, `--tile-ny`,
  default 2×2). Works best with broad-feature effects (sierpinski, puffs,
  lotsadots); fine-line effects (hexagon, diag) lose detail at 3x3+.
- `twist` — polar vortex distortion (`--twist-amount`, default 0.8 radians;
  negative = opposite spin). Pixels near center rotate more than edges.

**Animated**
- `scroll` — continuously slide the buffer wrapping at edges
  (`--scroll-speed-x`, `--scroll-speed-y`). Set speed-x=0 + speed-y=N
  for vertical scroll.
- `wave` — sine-wave horizontal displacement per row
  (`--wave-amplitude`, `--wave-frequency`, `--wave-speed`). Underwater/
  heat-haze wobble that animates over time.

## Output Artifacts

**`<name>.mp4`** — the rendered video, H.264/AAC, scaled per `--scale`.

**`<name>.profile.json`** — full record of the render for reproducibility:
all CLI settings, the resolved seed, a per-scene timeline (including which
post effect each scene used), audio analysis summary, and the inlined
analysis blob. Rebuild bit-identically with the same input + same seed +
same flags. Skip with `--no-profile`.

**Analyzer tempfiles** — if you don't pass `--analysis`, the renderer invokes
`analyze_audio.py` to a tempfile which is deleted after the render completes.
User-supplied analysis files are never touched.

## Project Structure

```
dazzle-video-maker-py/       (repo root)
  render.py                  # main CLI / scene scheduler / ffmpeg pipeline
  audio.py                   # AudioFeatures: load + interpolate + 3-band FFT
  analyze_audio.py           # vendored analyzer (beats, onsets, sections, …)
  palette.py                 # VGA-style rainbow palette + cycling helpers
  post.py                    # 10 post-production effects (mirror, tile, etc.)
  effects/
    __init__.py              # REGISTRY of all 32 effects
    _draw.py                 # shared line / polygon / circle primitives
    <effect>.py              # one file per effect
  build_effects_guide.py     # renders static HTML catalog of all effects
  reference/                 # original binaries, decompile output, analysis
    Dazzle 4.0/              # public-domain 1990 executable + docs
    decompiled-v40/          # Ghidra decompile output
    extracted-v40/           # extracted strings / artifacts
    effects_analysis_v40.json
  README.md                  # you are here
```

## Future Considerations

- **MIDI as an input source** — accept a `.mid` file as a first-class input
  alongside (or instead of) a WAV. Two roles:
  1. *Reactivity driver*: note-on / velocity / CC events feed the scheduler
     and per-effect parameters, providing structured triggers that FFT
     analysis can only approximate (e.g. snare hits, pad holds, pitch bends).
  2. *Audio source*: synthesize the MIDI to audio at render time (via
     fluidsynth + a soundfont) so the output MP4 has both the audio track
     and the MIDI-driven visuals. Useful for chiptune/tracker material where
     a WAV bounce would lose structure.
- **SRT subtitle track** — label the active effect(s) per scene in the
  exported video.
- **More shape effects** — the v5.0 catalog added `balls`, `cones`,
  `corkscrew`, `cycloids`, `daisies`, `hilbert`, `tiles`, `wedges`, etc.
  These aren't in the v4.0 reference and would be additions rather than ports.
- **More post effects** — v5.0 had ~24 "effect modes" including Blister,
  Drip, Firefly, Gas cloud, Mesh, Rectangles, Starburst, Umbra, and more.
  Several of these could be implemented as additional post passes.
- **Audio-reactive post parameters** — post effect params (fold count,
  twist amount, wave amplitude) could be driven by audio features for
  per-frame variation. Currently post params are static per render.
