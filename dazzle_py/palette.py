"""8-bit indexed palette with VGA-style cyclic rotation."""
from __future__ import annotations
import numpy as np


def rainbow_palette() -> np.ndarray:
    pal = np.zeros((256, 3), dtype=np.uint8)
    pal[0] = (0, 0, 0)
    for i in range(1, 256):
        h = ((i - 1) / 255.0) * 6.0
        c = 255
        x = int(c * (1 - abs((h % 2) - 1)))
        if h < 1:   r, g, b = c, x, 0
        elif h < 2: r, g, b = x, c, 0
        elif h < 3: r, g, b = 0, c, x
        elif h < 4: r, g, b = 0, x, c
        elif h < 5: r, g, b = x, 0, c
        else:       r, g, b = c, 0, x
        pal[i] = (r, g, b)
    return pal


def cycle(pal: np.ndarray, steps: int) -> np.ndarray:
    steps = steps % 255
    if steps == 0:
        return pal
    out = pal.copy()
    out[1:] = np.roll(pal[1:], steps, axis=0)
    return out
