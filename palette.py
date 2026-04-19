"""8-bit indexed palettes with VGA-style cyclic rotation.

Each palette is a (256, 3) uint8 array. Index 0 is always black (background).
Indices 1-255 hold the color ramp. cycle() rotates indices 1-255 per frame
to produce the flowing color animation.
"""
from __future__ import annotations
import numpy as np


def _hsv(h, s, v):
    c = v * s
    x = c * (1 - abs((h % 2) - 1))
    m = v - c
    if h < 1:   r, g, b = c, x, 0
    elif h < 2: r, g, b = x, c, 0
    elif h < 3: r, g, b = 0, c, x
    elif h < 4: r, g, b = 0, x, c
    elif h < 5: r, g, b = x, 0, c
    else:       r, g, b = c, 0, x
    return int((r + m) * 255), int((g + m) * 255), int((b + m) * 255)


def _ramp(palette_fn_name):
    """Build a 256-entry palette. Index 0 = black, 1-255 from the ramp."""
    pal = np.zeros((256, 3), dtype=np.uint8)
    fn = _RAMPS[palette_fn_name]
    for i in range(1, 256):
        t = (i - 1) / 254.0
        pal[i] = fn(t)
    return pal


# --- Ramp functions: t in [0, 1] → (R, G, B) ---

def _rainbow(t):
    return _hsv(t * 6.0, 1.0, 1.0)

def _fire(t):
    r = min(255, int(t * 3 * 255))
    g = min(255, max(0, int((t * 3 - 1) * 255)))
    b = min(255, max(0, int((t * 3 - 2) * 255)))
    return r, g, b

def _ice(t):
    r = min(255, max(0, int((t * 2 - 1) * 255)))
    g = min(255, max(0, int((t * 2 - 0.5) * 255)))
    b = min(255, int(t * 1.5 * 255))
    return r, g, b

def _electric(t):
    return _hsv((3.3 + t * 1.8) % 6, 0.9, t ** 0.5)

def _neon(t):
    return _hsv((t * 4 + 5) % 6, 1.0, 1.0)

def _grayscale(t):
    v = int(t * 255)
    return v, v, v

def _ocean(t):
    r = int(t * 0.3 * 255)
    g = int((0.2 + t * 0.6) * 255)
    b = int((0.4 + t * 0.5) * 255)
    return r, g, b

def _lava(t):
    r = min(255, int(t * 2 * 255))
    g = min(255, max(0, int((t * 2 - 0.7) * 255)))
    b = max(0, min(255, int((t - 0.9) * 10 * 255)))
    return r, g, b


_RAMPS = {
    'rainbow': _rainbow,
    'fire': _fire,
    'ice': _ice,
    'electric': _electric,
    'neon': _neon,
    'grayscale': _grayscale,
    'ocean': _ocean,
    'lava': _lava,
}

PALETTES = {name: lambda n=name: _ramp(n) for name in _RAMPS}


def cycle(pal: np.ndarray, steps: int) -> np.ndarray:
    """Rotate palette entries 1-255 (index 0 = background stays fixed)."""
    steps = steps % 255
    if steps == 0:
        return pal
    out = pal.copy()
    out[1:] = np.roll(pal[1:], steps, axis=0)
    return out


# Backward compat
def rainbow_palette() -> np.ndarray:
    return _ramp('rainbow')
