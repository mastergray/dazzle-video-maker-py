"""Post-production effects applied to the paletted buffer after all shape
effects have drawn but before palette mapping and upscaling.

Each function takes a (H, W) uint8 buffer of palette indices and returns
a transformed buffer of the same shape. These are fast array operations
(slicing + flipping), not per-pixel computation.
"""
from __future__ import annotations
import numpy as np


def mirror_h(buf: np.ndarray, **_kw) -> np.ndarray:
    """Left half → mirror right. Bilateral (Rorschach) symmetry."""
    H, W = buf.shape
    mid = W // 2
    out = buf.copy()
    out[:, mid:] = np.fliplr(out[:, :mid])[:, :W - mid]
    return out


def mirror_v(buf: np.ndarray, **_kw) -> np.ndarray:
    """Top half → mirror bottom."""
    H, W = buf.shape
    mid = H // 2
    out = buf.copy()
    out[mid:, :] = np.flipud(out[:mid, :])[:H - mid, :]
    return out


def mirror_quad(buf: np.ndarray, **_kw) -> np.ndarray:
    """Top-left quadrant → mirror into all four quadrants."""
    H, W = buf.shape
    mh, mw = H // 2, W // 2
    out = buf.copy()
    quad = out[:mh, :mw]
    out[:mh, mw:] = np.fliplr(quad)[:, :W - mw]
    out[mh:, :mw] = np.flipud(quad)[:H - mh, :]
    out[mh:, mw:] = np.flipud(np.fliplr(quad))[:H - mh, :W - mw]
    return out


def mirror_diamond(buf: np.ndarray, **_kw) -> np.ndarray:
    """Diagonal mirror — top-left triangle → reflect across both diagonals.

    Produces the diamond-axis kaleidoscope pattern (rotated 45° from
    mirror_quad). Transposes, mirrors, transposes back for diagonal symmetry.
    """
    H, W = buf.shape
    out = buf.copy()

    # Mirror along the main diagonal (top-left to bottom-right).
    # For non-square buffers, work on the square inner region.
    s = min(H, W)
    square = out[:s, :s]
    upper = np.triu(square)
    lower = np.triu(square).T
    combined = upper + lower
    # Fix diagonal (was doubled)
    diag = np.diag(np.diag(square))
    combined = combined - diag + np.diag(np.diag(square))
    out[:s, :s] = combined

    # Then mirror horizontally for full diamond symmetry.
    mid = W // 2
    out[:, mid:] = np.fliplr(out[:, :mid])[:, :W - mid]

    return out


def radial(buf: np.ndarray, n: int = 6, **_kw) -> np.ndarray:
    """N-fold rotational symmetry around the center.

    Renders one wedge (slice of angle 2pi/n), then copies it N times
    around the center via rotation. Uses nearest-neighbour sampling
    for speed at 320x200.
    """
    H, W = buf.shape
    cy, cx = H / 2, W / 2
    out = np.zeros_like(buf)

    # Build coordinate grids once.
    yy, xx = np.mgrid[:H, :W]
    dy = yy - cy
    dx = xx - cx
    angles = np.arctan2(dy, dx)  # [-pi, pi]
    radii = np.sqrt(dy * dy + dx * dx)

    wedge_angle = 2 * np.pi / n

    # Fold all angles into the first wedge [0, wedge_angle).
    folded = np.mod(angles, 2 * np.pi)
    folded = np.mod(folded, wedge_angle)

    # Map folded angles back to cartesian and sample from the original buffer.
    sx = (cx + radii * np.cos(folded)).astype(int)
    sy = (cy + radii * np.sin(folded)).astype(int)
    sx = np.clip(sx, 0, W - 1)
    sy = np.clip(sy, 0, H - 1)
    out = buf[sy, sx]

    return out


def tile(buf: np.ndarray, nx: int = 2, ny: int = 2, **_kw) -> np.ndarray:
    """Repeat the center portion of the buffer in an nx×ny grid.

    tile(2,2) = center quadrant appears 4 times.
    tile(3,3) = center ninth appears 9 times.
    Crops from the CENTER since dazzle effects draw outward from
    center — the corners are mostly empty/edge content.
    """
    H, W = buf.shape
    th, tw = H // ny, W // nx
    if th < 2 or tw < 2:
        return buf
    cy, cx = H // 2, W // 2
    y0 = cy - th // 2
    x0 = cx - tw // 2
    patch = buf[y0:y0 + th, x0:x0 + tw]
    out = np.tile(patch, (ny, nx))
    return out[:H, :W]


def kaleidoscope(buf: np.ndarray, n: int = 6, **_kw) -> np.ndarray:
    """N-fold kaleidoscope: like radial but alternating wedges are mirrored.

    Produces true kaleidoscope symmetry (like looking through a toy
    kaleidoscope) rather than pure rotational copies.
    """
    H, W = buf.shape
    cy, cx = H / 2, W / 2
    yy, xx = np.mgrid[:H, :W]
    dy = yy - cy
    dx = xx - cx
    angles = np.arctan2(dy, dx)
    radii = np.sqrt(dy * dy + dx * dx)

    wedge_angle = 2 * np.pi / n
    folded = np.mod(angles, 2 * np.pi)
    wedge_idx = (folded / wedge_angle).astype(int)
    folded = np.mod(folded, wedge_angle)
    # Mirror odd wedges (flip the angle within the wedge).
    odd = (wedge_idx % 2) == 1
    folded[odd] = wedge_angle - folded[odd]

    sx = (cx + radii * np.cos(folded)).astype(int)
    sy = (cy + radii * np.sin(folded)).astype(int)
    sx = np.clip(sx, 0, W - 1)
    sy = np.clip(sy, 0, H - 1)
    return buf[sy, sx]


def twist(buf: np.ndarray, amount: float = 0.8, **_kw) -> np.ndarray:
    """Polar twist: pixels near center rotate more than edges.

    Creates a vortex/pinwheel distortion. amount controls the total
    rotation at center in radians.
    """
    H, W = buf.shape
    cy, cx = H / 2, W / 2
    yy, xx = np.mgrid[:H, :W]
    dy = (yy - cy).astype(np.float64)
    dx = (xx - cx).astype(np.float64)
    radii = np.sqrt(dy * dy + dx * dx)
    max_r = np.sqrt(cy * cy + cx * cx)
    angles = np.arctan2(dy, dx)

    # Twist: rotation decreases linearly with radius.
    twist_angle = amount * (1.0 - radii / max_r)
    new_angles = angles + twist_angle

    sx = (cx + radii * np.cos(new_angles)).astype(int)
    sy = (cy + radii * np.sin(new_angles)).astype(int)
    sx = np.clip(sx, 0, W - 1)
    sy = np.clip(sy, 0, H - 1)
    return buf[sy, sx]


def scroll(buf: np.ndarray, frame_idx: int = 0,
           speed_x: float = 1.0, speed_y: float = 0.0, **_kw) -> np.ndarray:
    """Continuously scroll the buffer, wrapping at edges.

    Offset accumulates with frame_idx so the pattern slides across the
    frame over time. speed_x/speed_y in pixels per frame.
    """
    dx = int(frame_idx * speed_x) % buf.shape[1]
    dy = int(frame_idx * speed_y) % buf.shape[0]
    return np.roll(buf, shift=(dy, dx), axis=(0, 1))


def wave(buf: np.ndarray, frame_idx: int = 0,
         amplitude: float = 8.0, frequency: float = 0.04,
         speed: float = 0.1, **_kw) -> np.ndarray:
    """Sine-wave horizontal displacement per row.

    Each row shifts left/right by a sine function of its y-position,
    animated over time via frame_idx. Creates a wavy/underwater look.
    """
    H, W = buf.shape
    out = buf.copy()
    phase = frame_idx * speed
    for y in range(H):
        dx = int(amplitude * np.sin(frequency * y + phase))
        if dx:
            out[y] = np.roll(buf[y], dx)
    return out


def xor(buf: np.ndarray, shift_x: int = 10, shift_y: int = 5,
        frame_idx: int = 0, **_kw) -> np.ndarray:
    """XOR the buffer with a shifted copy of itself.

    Produces moiré interference patterns. The shift animates over time
    so the interference pattern evolves.
    """
    dx = shift_x + int(frame_idx * 0.3) % 20
    dy = shift_y + int(frame_idx * 0.2) % 15
    shifted = np.roll(buf, shift=(dy, dx), axis=(0, 1))
    return buf ^ shifted


def drip(buf: np.ndarray, max_drip: int = 40, frame_idx: int = 0, **_kw) -> np.ndarray:
    """Shift each column down by a varying amount — gravity/rain effect.

    Drip amounts are deterministic per-column but evolve with frame_idx
    so the drip pattern slowly changes over time.
    """
    H, W = buf.shape
    out = np.empty_like(buf)
    seed_arr = np.arange(W, dtype=np.float64) * 7.3 + 1.1
    drips = ((np.sin(seed_arr + frame_idx * 0.02) * 0.5 + 0.5) * max_drip).astype(int)
    for x in range(W):
        out[:, x] = np.roll(buf[:, x], drips[x])
    return out


def starburst(buf: np.ndarray, n_rays: int = 16, thickness: int = 1, **_kw) -> np.ndarray:
    """Radial lines from center — rays mask to palette index 0 (black).

    Creates a starburst/sunburst overlay pattern on top of whatever
    effects drew. Different from radial (which folds the image);
    starburst OVERLAYS lines.
    """
    H, W = buf.shape
    cy, cx = H / 2, W / 2
    yy, xx = np.mgrid[:H, :W]
    angles = np.arctan2(yy - cy, xx - cx)
    # Create ray mask: pixels whose angle falls on a ray line.
    ray_spacing = 2 * np.pi / n_rays
    angle_mod = np.mod(angles, ray_spacing)
    ray_width = thickness * ray_spacing / (2 * np.pi)
    mask = (angle_mod < ray_width) | (angle_mod > ray_spacing - ray_width)
    out = buf.copy()
    out[mask] = 0
    return out


def mesh(buf: np.ndarray, spacing: int = 12, **_kw) -> np.ndarray:
    """Grid overlay — darken pixels on a regular grid to index 0."""
    out = buf.copy()
    out[::spacing, :] = 0
    out[:, ::spacing] = 0
    return out


def rectangles(buf: np.ndarray, n_rects: int = 8, frame_idx: int = 0, **_kw) -> np.ndarray:
    """Random rectangular block shuffle — cut the frame into blocks and rearrange.

    Deterministic per seed but evolves slowly with frame_idx.
    """
    H, W = buf.shape
    out = buf.copy()
    rng = np.random.RandomState((frame_idx // 30) + 42)
    for _ in range(n_rects):
        bh = rng.randint(20, H // 3)
        bw = rng.randint(20, W // 3)
        y1 = rng.randint(0, H - bh)
        x1 = rng.randint(0, W - bw)
        y2 = rng.randint(0, H - bh)
        x2 = rng.randint(0, W - bw)
        # Swap two random blocks.
        tmp = out[y1:y1 + bh, x1:x1 + bw].copy()
        out[y1:y1 + bh, x1:x1 + bw] = out[y2:y2 + bh, x2:x2 + bw]
        out[y2:y2 + bh, x2:x2 + bw] = tmp
    return out


def spiral_post(buf: np.ndarray, tightness: float = 0.15,
                frame_idx: int = 0, **_kw) -> np.ndarray:
    """Logarithmic spiral coordinate remap.

    Unlike twist (which rotates more at center), spiral maps pixels
    along logarithmic spiral paths — produces a whirlpool/nautilus look.
    """
    H, W = buf.shape
    cy, cx = H / 2, W / 2
    yy, xx = np.mgrid[:H, :W]
    dy = (yy - cy).astype(np.float64)
    dx = (xx - cx).astype(np.float64)
    radii = np.sqrt(dy * dy + dx * dx)
    angles = np.arctan2(dy, dx)

    phase = frame_idx * 0.02
    new_angles = angles + tightness * np.log(np.maximum(radii, 1.0)) + phase

    sx = (cx + radii * np.cos(new_angles)).astype(int)
    sy = (cy + radii * np.sin(new_angles)).astype(int)
    sx = np.clip(sx, 0, W - 1)
    sy = np.clip(sy, 0, H - 1)
    return buf[sy, sx]


def wipe(buf: np.ndarray, direction: str = 'left',
         frame_idx: int = 0, speed: float = 2.0, **_kw) -> np.ndarray:
    """Animated directional wipe — edge sweeps across clearing to black.

    The wipe position cycles so the pattern repeatedly reveals and clears.
    """
    H, W = buf.shape
    out = buf.copy()
    cycle_len = W if direction in ('left', 'right') else H
    pos = int(frame_idx * speed) % (cycle_len * 2)
    if pos > cycle_len:
        pos = cycle_len * 2 - pos  # bounce back

    if direction == 'left':
        out[:, :pos] = 0
    elif direction == 'right':
        out[:, W - pos:] = 0
    elif direction == 'down':
        out[:pos, :] = 0
    else:  # up
        out[H - pos:, :] = 0
    return out


def movingbars(buf: np.ndarray, n_bars: int = 6, bar_width: int = 8,
               direction: str = 'horizontal', frame_idx: int = 0, **_kw) -> np.ndarray:
    """Animated bars that slide across the frame, masking to black."""
    H, W = buf.shape
    out = buf.copy()
    if direction == 'horizontal':
        spacing = H // max(1, n_bars)
        offset = int(frame_idx * 0.5) % spacing
        for i in range(n_bars):
            y = (i * spacing + offset) % H
            y_end = min(H, y + bar_width)
            out[y:y_end, :] = 0
    else:
        spacing = W // max(1, n_bars)
        offset = int(frame_idx * 0.5) % spacing
        for i in range(n_bars):
            x = (i * spacing + offset) % W
            x_end = min(W, x + bar_width)
            out[:, x:x_end] = 0
    return out


def linewipe(buf: np.ndarray, n_lines: int = 10,
             frame_idx: int = 0, speed: float = 1.0, **_kw) -> np.ndarray:
    """Horizontal line-based wipe — lines sweep left-to-right at staggered speeds."""
    H, W = buf.shape
    out = buf.copy()
    spacing = max(1, H // n_lines)
    for i in range(n_lines):
        y = i * spacing
        if y >= H:
            break
        # Each line has a different phase so they stagger.
        pos = int((frame_idx * speed + i * 17) % (W * 2))
        if pos > W:
            pos = W * 2 - pos
        y_end = min(H, y + spacing)
        out[y:y_end, :pos] = 0
    return out


def randomize(buf: np.ndarray, block_size: int = 20,
              frame_idx: int = 0, **_kw) -> np.ndarray:
    """Randomly rearrange blocks of the buffer — shuffled mosaic."""
    H, W = buf.shape
    out = buf.copy()
    ny = H // block_size
    nx = W // block_size
    if ny < 2 or nx < 2:
        return buf
    rng = np.random.RandomState((frame_idx // 15) + 7)
    blocks = [(r, c) for r in range(ny) for c in range(nx)]
    shuffled = list(blocks)
    rng.shuffle(shuffled)
    for (r1, c1), (r2, c2) in zip(blocks, shuffled):
        y1, x1 = r1 * block_size, c1 * block_size
        y2, x2 = r2 * block_size, c2 * block_size
        out[y1:y1 + block_size, x1:x1 + block_size] = \
            buf[y2:y2 + block_size, x2:x2 + block_size]
    return out


def blister(buf: np.ndarray, n_bubbles: int = 5, max_radius: int = 40,
            frame_idx: int = 0, **_kw) -> np.ndarray:
    """Circular bubble lens distortion — each blister magnifies/displaces
    a circular region like a water droplet on glass.
    """
    H, W = buf.shape
    out = buf.copy()
    rng = np.random.RandomState((frame_idx // 20) + 13)
    yy, xx = np.mgrid[:H, :W]

    for _ in range(n_bubbles):
        r = rng.randint(15, max(16, max_radius))
        cy = rng.randint(r, max(r + 1, H - r))
        cx = rng.randint(r, max(r + 1, W - r))

        # Lens: pixels inside the circle are pulled toward center (magnify).
        dy = yy[cy - r:cy + r, cx - r:cx + r] - cy
        dx = xx[cy - r:cy + r, cx - r:cx + r] - cx
        dist = np.sqrt(dy * dy + dx * dx)
        mask = dist < r

        # Displacement: scale distance from center by a lens factor.
        factor = np.where(mask, dist / max(1, r), 1.0)
        factor = factor ** 1.8  # exponent > 1 = magnifying lens

        sy = (cy + dy * factor).astype(int)
        sx = (cx + dx * factor).astype(int)
        sy = np.clip(sy, 0, H - 1)
        sx = np.clip(sx, 0, W - 1)

        patch = buf[sy, sx]
        y0, y1 = cy - r, cy + r
        x0, x1 = cx - r, cx + r
        region = out[y0:y1, x0:x1]
        region[mask[:region.shape[0], :region.shape[1]]] = \
            patch[mask[:region.shape[0], :region.shape[1]]]

    return out


def firefly(buf: np.ndarray, n_flies: int = 30, brightness: int = 200,
            frame_idx: int = 0, **_kw) -> np.ndarray:
    """Scattered bright wandering points overlaid on the buffer.

    Fireflies drift slowly across the frame; their positions are
    deterministic per frame_idx so the motion is smooth.
    """
    H, W = buf.shape
    out = buf.copy()

    for k in range(n_flies):
        # Each firefly has a unique slow orbit.
        phase = frame_idx * 0.02 + k * 2.7
        x = int((np.sin(phase * 0.3 + k) * 0.4 + 0.5) * W) % W
        y = int((np.cos(phase * 0.4 + k * 1.3) * 0.4 + 0.5) * H) % H
        # Draw a small bright cross (3px).
        out[y, x] = brightness % 256
        if y > 0:
            out[y - 1, x] = brightness % 256
        if y < H - 1:
            out[y + 1, x] = brightness % 256
        if x > 0:
            out[y, x - 1] = brightness % 256
        if x < W - 1:
            out[y, x + 1] = brightness % 256

    return out


def umbra(buf: np.ndarray, strength: float = 0.7, **_kw) -> np.ndarray:
    """Radial vignette — darken pixels toward the edges.

    Pixels near center stay bright; pixels near edges get their palette
    index pulled toward 0 (black). strength controls how aggressive the
    darkening is (0 = no effect, 1 = edges fully black).
    """
    H, W = buf.shape
    cy, cx = H / 2, W / 2
    yy, xx = np.mgrid[:H, :W]
    dist = np.sqrt((yy - cy) ** 2 + (xx - cx) ** 2)
    max_dist = np.sqrt(cy ** 2 + cx ** 2)
    # Normalise distance 0..1 and apply strength curve.
    norm = (dist / max_dist) ** 1.5 * strength
    # Scale palette indices toward 0.
    result = (buf.astype(np.float64) * (1.0 - norm))
    return np.clip(result, 0, 255).astype(np.uint8)


def tetrys(buf: np.ndarray, block_size: int = 16,
           frame_idx: int = 0, **_kw) -> np.ndarray:
    """Tetris-like block falling — columns of blocks drop at different rates.

    Each column of block_size-wide blocks falls downward at a rate
    that varies per column. Creates a cascading/stacking look.
    """
    H, W = buf.shape
    out = np.zeros_like(buf)
    n_cols = W // block_size

    for col in range(n_cols):
        x0 = col * block_size
        x1 = min(W, x0 + block_size)
        # Each column falls at a different speed.
        drop = int((frame_idx * (0.5 + col * 0.3)) % H)
        col_data = buf[:, x0:x1]
        out[:, x0:x1] = np.roll(col_data, drop, axis=0)

    # Handle remainder columns.
    remainder = W - n_cols * block_size
    if remainder > 0:
        out[:, n_cols * block_size:] = buf[:, n_cols * block_size:]

    return out


def ziti(buf: np.ndarray, curvature: float = 0.3,
         frame_idx: int = 0, **_kw) -> np.ndarray:
    """Cylindrical tube distortion — wraps the buffer around a vertical cylinder.

    Center columns are unaffected; columns toward edges are compressed
    horizontally, simulating perspective on a curved surface. Animates
    by slowly rotating the cylinder.
    """
    H, W = buf.shape
    cx = W / 2
    yy, xx = np.mgrid[:H, :W]

    # Map x to an angle on the cylinder surface.
    phase = frame_idx * 0.01
    angle = (xx - cx) / cx * (np.pi * curvature) + phase
    # Project back: x' = cx + cx * sin(angle) / curvature
    new_x = cx + cx * np.sin(angle) / max(0.1, np.pi * curvature)
    new_x = np.clip(new_x, 0, W - 1).astype(int)

    return buf[yy, new_x]


def juggle_palette(buf: np.ndarray, mode: str = 'shuffle',
                   frame_idx: int = 0, **_kw) -> np.ndarray:
    """Palette juggling — remap buffer indices to scramble colors.

    Unlike other post effects which transform pixel POSITIONS, juggle
    transforms pixel VALUES (palette indices). The spatial pattern stays
    identical; the colors change. This is the v5.0 "Juggle palette" mode.

    Modes:
      shuffle  randomly reorder palette indices (changes slowly over time)
      invert   flip indices (255-i) — dark becomes bright, vice versa
      reverse  reverse the palette order — color ramp runs backward
      rotate   shift all indices by a frame-varying offset
    """
    remap = np.arange(256, dtype=np.uint8)
    if mode == 'shuffle':
        rng = np.random.RandomState((frame_idx // 30) + 5)
        rng.shuffle(remap[1:])
    elif mode == 'invert':
        remap[1:] = (256 - remap[1:]) % 256
        remap[remap == 0] = 1  # avoid mapping to background
    elif mode == 'reverse':
        remap[1:] = remap[1:][::-1]
    elif mode == 'rotate':
        shift = (frame_idx * 3) % 255
        remap[1:] = ((remap[1:] - 1 + shift) % 255) + 1
    return remap[buf]


# Registry: name → (function, default_kwargs).
REGISTRY = {
    'mirror_h':       (mirror_h, {}),
    'mirror_v':       (mirror_v, {}),
    'mirror_quad':    (mirror_quad, {}),
    'mirror_diamond': (mirror_diamond, {}),
    'radial':         (radial, {'n': 6}),
    'tile':           (tile, {'nx': 2, 'ny': 2}),
    'kaleidoscope':   (kaleidoscope, {'n': 6}),
    'twist':          (twist, {'amount': 0.8}),
    'scroll':         (scroll, {'speed_x': 1.0, 'speed_y': 0.0}),
    'wave':           (wave, {'amplitude': 8.0, 'frequency': 0.04, 'speed': 0.1}),
    'xor':            (xor, {'shift_x': 10, 'shift_y': 5}),
    'drip':           (drip, {'max_drip': 40}),
    'starburst':      (starburst, {'n_rays': 16, 'thickness': 1}),
    'mesh':           (mesh, {'spacing': 12}),
    'rectangles':     (rectangles, {'n_rects': 8}),
    'spiral':         (spiral_post, {'tightness': 0.15}),
    'wipe':           (wipe, {'direction': 'left', 'speed': 2.0}),
    'movingbars':     (movingbars, {'n_bars': 6, 'bar_width': 8, 'direction': 'horizontal'}),
    'linewipe':       (linewipe, {'n_lines': 10, 'speed': 1.0}),
    'randomize':      (randomize, {'block_size': 20}),
    'blister':        (blister, {'n_bubbles': 5, 'max_radius': 40}),
    'firefly':        (firefly, {'n_flies': 30, 'brightness': 200}),
    'umbra':          (umbra, {'strength': 0.7}),
    'tetrys':         (tetrys, {'block_size': 16}),
    'ziti':           (ziti, {'curvature': 0.3}),
    'juggle':         (juggle_palette, {'mode': 'shuffle'}),
}


def apply_post(buf: np.ndarray, name: str, frame_idx: int = 0, **kwargs) -> np.ndarray:
    """Look up and apply a named post effect.

    All post functions accept **kwargs so extra params are silently ignored.
    frame_idx is always passed for time-varying effects (scroll, wave).
    """
    if name not in REGISTRY:
        raise ValueError(f'unknown post effect: {name!r}; valid: {list(REGISTRY.keys())}')
    fn, defaults = REGISTRY[name]
    merged = {**defaults, 'frame_idx': frame_idx, **kwargs}
    return fn(buf, **merged)
