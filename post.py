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
    """Repeat the buffer in an nx×ny grid, scaling down to fit the original size.

    tile(2,2) = the whole pattern appears 4 times at quarter size.
    tile(3,3) = 9 copies. Creates fractal-like recursive visual density.
    """
    H, W = buf.shape
    # Downsample to tile size via nearest-neighbour.
    th, tw = H // ny, W // nx
    if th < 2 or tw < 2:
        return buf
    small = buf[::ny, ::nx][:th, :tw]
    # Tile the small version to fill the frame.
    out = np.tile(small, (ny, nx))
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
