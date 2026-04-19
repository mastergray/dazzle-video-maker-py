"""Post-production effects applied to the paletted buffer after all shape
effects have drawn but before palette mapping and upscaling.

Each function takes a (H, W) uint8 buffer of palette indices and returns
a transformed buffer of the same shape. These are fast array operations
(slicing + flipping), not per-pixel computation.
"""
from __future__ import annotations
import numpy as np


def mirror_h(buf: np.ndarray) -> np.ndarray:
    """Left half → mirror right. Bilateral (Rorschach) symmetry."""
    H, W = buf.shape
    mid = W // 2
    out = buf.copy()
    out[:, mid:] = np.fliplr(out[:, :mid])[:, :W - mid]
    return out


def mirror_v(buf: np.ndarray) -> np.ndarray:
    """Top half → mirror bottom."""
    H, W = buf.shape
    mid = H // 2
    out = buf.copy()
    out[mid:, :] = np.flipud(out[:mid, :])[:H - mid, :]
    return out


def mirror_quad(buf: np.ndarray) -> np.ndarray:
    """Top-left quadrant → mirror into all four quadrants."""
    H, W = buf.shape
    mh, mw = H // 2, W // 2
    out = buf.copy()
    quad = out[:mh, :mw]
    out[:mh, mw:] = np.fliplr(quad)[:, :W - mw]
    out[mh:, :mw] = np.flipud(quad)[:H - mh, :]
    out[mh:, mw:] = np.flipud(np.fliplr(quad))[:H - mh, :W - mw]
    return out


def mirror_diamond(buf: np.ndarray) -> np.ndarray:
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


def radial(buf: np.ndarray, n: int = 6) -> np.ndarray:
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


# Registry: name → (function, default_kwargs).
# Functions with no extra args get empty dict; parameterised ones include defaults.
REGISTRY = {
    'mirror_h':       (mirror_h, {}),
    'mirror_v':       (mirror_v, {}),
    'mirror_quad':    (mirror_quad, {}),
    'mirror_diamond': (mirror_diamond, {}),
    'radial':         (radial, {'n': 6}),
}


def apply_post(buf: np.ndarray, name: str, **kwargs) -> np.ndarray:
    """Look up and apply a named post effect."""
    if name not in REGISTRY:
        raise ValueError(f'unknown post effect: {name!r}; valid: {list(REGISTRY.keys())}')
    fn, defaults = REGISTRY[name]
    merged = {**defaults, **kwargs}
    return fn(buf, **merged)
