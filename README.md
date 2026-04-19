# Dazzle — Audio-Reactive Python Port

Python port of MicroTronics Dazzle 4.0 (1990 DOS pattern-generator screensaver),
reimplemented as an offline audio-reactive video renderer. Takes a WAV in,
writes an MP4 out, with the original 32 shape effects driven by beat/onset/
section/energy data from a pre-analysis pass. Includes 26 post-production
effects (mirror, tile, kaleidoscope, twist, scroll, wave, xor, drip, starburst,
juggle, and more) that transform the output of any shape generator into
symmetric, tiled, or animated compositions. 8 color palettes with per-scene
randomization.

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

### Palettes

```
# Fixed mode with fire palette
python3 render.py song.wav fire.mp4 --mode fixed --effects hexagon spiral \
    --post mirror_quad --palette fire

# Fixed mode with ice palette + juggle scramble
python3 render.py song.wav juggled.mp4 --mode fixed --effects boxes puffs \
    --post juggle --palette ice

# Juggle with invert mode (dark↔bright swap)
python3 render.py song.wav inverted.mp4 --mode fixed --effects sierpinski tunnel \
    --post juggle --juggle-mode invert --palette neon

# Random mode automatically picks palette per scene (no flag needed)
python3 render.py song.wav varied.mp4
```

Available palettes: `rainbow`, `fire`, `ice`, `electric`, `neon`, `grayscale`,
`ocean`, `lava`. In random mode each scene picks a palette automatically.
In fixed mode use `--palette NAME` to select one (defaults to rainbow).

### More post effects

```
# XOR interference pattern
python3 render.py song.wav xor.mp4 --mode fixed --effects hexagon boxes --post xor

# Column drip — heavy gravity distortion
python3 render.py song.wav drip.mp4 --mode fixed --effects lotsadots puffs \
    --post drip --drip-max 80

# 32 thick starburst rays
python3 render.py song.wav star.mp4 --mode fixed --effects sierpinski puffs \
    --post starburst --starburst-rays 32 --starburst-thickness 2

# Tight mesh grid overlay
python3 render.py song.wav mesh.mp4 --mode fixed --effects hexagon boxes \
    --post mesh --mesh-spacing 6

# Logarithmic spiral remap
python3 render.py song.wav spiral.mp4 --mode fixed --effects spiral sweep \
    --post spiral --spiral-tightness 0.25

# Vertical moving bars
python3 render.py song.wav bars.mp4 --mode fixed --effects tunnel hexagon \
    --post movingbars --movingbars-direction vertical --movingbars-n 10

# Small-block randomize (fine grain mosaic)
python3 render.py song.wav mosaic.mp4 --mode fixed --effects hexagon spiral \
    --post randomize --randomize-block-size 10

# Downward wipe
python3 render.py song.wav wipe.mp4 --mode fixed --effects boxes ellipse \
    --post wipe --wipe-direction down --wipe-speed 3

# Bubble lens distortion — large bubbles
python3 render.py song.wav blister.mp4 --mode fixed --effects hexagon spiral \
    --post blister --blister-n 8 --blister-radius 60

# Vignette darkening
python3 render.py song.wav umbra.mp4 --mode fixed --effects sierpinski puffs \
    --post umbra --umbra-strength 0.9

# Tetris column fall with narrow blocks
python3 render.py song.wav tetrys.mp4 --mode fixed --effects boxes hexagon \
    --post tetrys --tetrys-block-size 10

# Cylindrical tube warp — high curvature
python3 render.py song.wav ziti.mp4 --mode fixed --effects spiral sweep \
    --post ziti --ziti-curvature 0.6

# Fireflies over a dark effect
python3 render.py song.wav flies.mp4 --mode fixed --effects tunnel wandering \
    --post firefly --firefly-n 50
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

# Starburst mask + drip distortion
python3 render.py song.wav combo4.mp4 --mode fixed --effects hexagon puffs \
    --post starburst drip --starburst-rays 24

# XOR interference then mirror for symmetric moiré
python3 render.py song.wav combo5.mp4 --mode fixed --effects spiral boxes \
    --post xor mirror_quad
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

### Excluding effects

```
# No diagonal effects in the random pool
python3 render.py song.wav out.mp4 --exclude diag1 diag2 diag3 diag4

# Only symmetry-based post effects (exclude everything else)
python3 render.py song.wav out.mp4 \
    --exclude-post tile twist scroll wave xor drip starburst mesh \
               rectangles spiral wipe movingbars linewipe randomize

# Only want mirror/kaleidoscope post, no mask/wipe effects
python3 render.py song.wav out.mp4 \
    --exclude-post starburst mesh movingbars linewipe wipe drip randomize rectangles

# Combine: no line-based effects, no animated/mask post, always post
python3 render.py song.wav out.mp4 \
    --exclude lines diag1 diag2 diag3 diag4 grid bars \
    --exclude-post scroll wave wipe movingbars linewipe drip \
    --post-min 1 --post-max 1
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
- `--palette NAME` — fixed-mode palette (`rainbow`, `fire`, `ice`, `electric`,
  `neon`, `grayscale`, `ocean`, `lava`); random mode picks per scene

**Random-mode options**
- `--min N` — minimum stacked effects per scene (default 4)
- `--max N` — maximum stacked effects per scene (default 5)
- `--overlap N` — max effects carried from previous scene (default 0)
- `--post-min N` — minimum post effects per scene (default 0)
- `--post-max N` — maximum post effects per scene (default 1)
- `--exclude NAME [NAME ...]` — remove specific effects from the random pool
- `--exclude-post NAME [NAME ...]` — remove specific post effects from the random pool

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
- `--xor-shift-x N` / `--xor-shift-y N` — XOR offset (default 10, 5)
- `--drip-max N` — max column shift pixels (default 40)
- `--starburst-rays N` — radial ray count (default 16)
- `--starburst-thickness N` — ray width (default 1)
- `--mesh-spacing N` — grid line spacing pixels (default 12)
- `--rectangles-n N` — block swaps per frame (default 8)
- `--spiral-tightness N` — coil tightness (default 0.15)
- `--wipe-direction {left,right,up,down}` — sweep direction (default left)
- `--wipe-speed N` — animation speed (default 2.0)
- `--movingbars-n N` — bar count (default 6)
- `--movingbars-width N` — bar width pixels (default 8)
- `--movingbars-direction {horizontal,vertical}` — bar orientation (default horizontal)
- `--linewipe-n N` — staggered wipe lines (default 10)
- `--linewipe-speed N` — animation speed (default 1.0)
- `--randomize-block-size N` — shuffle block size pixels (default 20)
- `--blister-n N` — number of bubble lenses (default 5)
- `--blister-radius N` — max bubble radius pixels (default 40)
- `--firefly-n N` — wandering bright points (default 30)
- `--firefly-brightness N` — palette index for points (default 200)
- `--umbra-strength N` — vignette strength 0..1 (default 0.7)
- `--tetrys-block-size N` — falling block column width pixels (default 16)
- `--ziti-curvature N` — cylinder curvature (default 0.3)
- `--juggle-mode {shuffle,invert,reverse,rotate}` — palette manipulation mode (default shuffle)

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

## Post-Production Effects (26)

Post effects transform the paletted buffer after all shape effects have drawn
but before palette mapping and upscaling. They're fast (array operations) and
work with any effect combination. Multiple post effects can be stacked.
All 26 can be excluded from random mode via `--exclude-post`.

**Symmetry** (6)
- `mirror_h` — left half → mirror right (bilateral/Rorschach symmetry)
- `mirror_v` — top half → mirror bottom
- `mirror_quad` — top-left quadrant → mirror into all four quadrants
- `mirror_diamond` — diagonal-axis kaleidoscope (rotated 45° from quad)
- `radial` — N-fold rotational symmetry (`--radial-n`, default 6 = hexagonal)
- `kaleidoscope` — N-fold with alternating mirrored wedges
  (`--kaleidoscope-n`, default 6). More ornate than radial — true toy-
  kaleidoscope symmetry.

**Spatial transforms** (4)
- `tile` — repeat center portion in NxN grid (`--tile-nx`, `--tile-ny`,
  default 2×2). Works best with broad-feature effects (sierpinski, puffs,
  lotsadots); fine-line effects (hexagon, diag) lose detail at 3x3+.
- `twist` — polar vortex distortion (`--twist-amount`, default 0.8 radians;
  negative = opposite spin). Pixels near center rotate more than edges.
- `spiral` — logarithmic spiral coordinate remap (`--spiral-tightness`,
  default 0.15). Different from twist: twist rotates around center, spiral
  maps along nautilus-like paths. Animated over time.
- `xor` — XOR buffer with a shifted copy of itself (`--xor-shift-x`,
  `--xor-shift-y`). Produces moiré interference patterns. Animated.

**Block transforms** (2)
- `rectangles` — random rectangular block swap (`--rectangles-n`, default 8
  swaps per frame). Glitchy rearrangement that evolves slowly over time.
- `randomize` — cut into NxN grid, shuffle all blocks (`--randomize-block-size`,
  default 20px). Mosaic scramble — smaller blocks = finer grain.

**Masks & overlays** (3)
- `starburst` — radial ray mask from center (`--starburst-rays`, default 16;
  `--starburst-thickness`, default 1). Black sunburst lines over the pattern.
- `mesh` — regular grid overlay (`--mesh-spacing`, default 12px). Black
  horizontal + vertical lines at fixed intervals.
- `drip` — shift each column down by a varying amount (`--drip-max`,
  default 40px). Gravity/rain distortion that evolves over time.

**Animated wipes** (5)
- `scroll` — continuously slide the buffer wrapping at edges
  (`--scroll-speed-x`, `--scroll-speed-y`). Set speed-x=0 + speed-y=N
  for vertical scroll.
- `wave` — sine-wave horizontal displacement per row
  (`--wave-amplitude`, `--wave-frequency`, `--wave-speed`). Underwater/
  heat-haze wobble.
- `wipe` — animated directional clear (`--wipe-direction {left,right,up,down}`,
  `--wipe-speed`). Edge sweeps across then bounces back.
- `movingbars` — sliding bar mask (`--movingbars-n`, `--movingbars-width`,
  `--movingbars-direction {horizontal,vertical}`).
- `linewipe` — staggered line-by-line wipe (`--linewipe-n`, `--linewipe-speed`).
  Each line sweeps at a different phase for a cascade effect.

**Distortion** (3)
- `blister` — circular bubble lens distortion (`--blister-n`, default 5;
  `--blister-radius`, default 40px). Scattered magnification bubbles like
  water droplets on glass. Positions change slowly over time.
- `ziti` — cylindrical tube warp (`--ziti-curvature`, default 0.3). Center
  columns stay straight; edges compress horizontally simulating a curved
  surface. Animated rotation.
- `tetrys` — tetris-like column falling (`--tetrys-block-size`, default 16px).
  Each column of blocks drops at a different rate — cascading stagger effect.

**Overlay** (2)
- `firefly` — scattered bright wandering points (`--firefly-n`, default 30;
  `--firefly-brightness`, default 200). Points drift smoothly in
  deterministic orbits. Most visible on darker effects.
- `umbra` — radial vignette (`--umbra-strength`, default 0.7). Darkens
  pixels toward edges while center stays bright. strength=1 makes edges
  fully black.

**Palette** (1)
- `juggle` — remap palette indices to scramble colors without changing
  spatial patterns (`--juggle-mode`). Four modes: `shuffle` (random
  reorder, evolves over time), `invert` (dark↔bright), `reverse`
  (ramp runs backward), `rotate` (frame-varying index shift).

## Output Artifacts

**`<name>.mp4`** — the rendered video, H.264/AAC, scaled per `--scale`.

**`<name>.profile.json`** — full record of the render for reproducibility:
all CLI settings (mode, scale, seed, palette, effects, post, excludes),
per-effect post-production parameters, a per-scene timeline (effects +
post + palette per scene), audio analysis summary, and the inlined analysis
blob. Contains everything needed to regenerate the exact output. Skip with
`--no-profile`.

**Analyzer tempfiles** — if you don't pass `--analysis`, the renderer invokes
`analyze_audio.py` to a tempfile which is deleted after the render completes.
User-supplied analysis files are never touched.

## Project Structure

```
dazzle-video-maker-py/       (repo root)
  render.py                  # main CLI / scene scheduler / ffmpeg pipeline
  audio.py                   # AudioFeatures: load + interpolate + 3-band FFT
  analyze_audio.py           # vendored analyzer (beats, onsets, sections, …)
  palette.py                 # 8 VGA-style color palettes + cycling helpers
  post.py                    # 26 post-production effects (mirror, tile, juggle, etc.)
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
- **Remaining v5.0 modes** — 3 modes were skipped as non-visual: Kleenup
  (reset), Countdown (timer overlay), Gas cloud (blur — meaningless on
  palette indices). Juggle palette was implemented as a post effect.
- **Audio-reactive post parameters** — post effect params (fold count,
  twist amount, wave amplitude) could be driven by audio features for
  per-frame variation. Currently post params are static per render.
