"""Boxes — concentric rectangles radiating from center."""
from __future__ import annotations
import numpy as np

from ._draw import polygon as _poly

W, H = 320, 200


class Boxes:
    def __init__(self):
        self.reset()

    def reset(self):
        self.offset = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.cx = W // 2 + np.random.randint(-40, 40)
        self.cy = H // 2 + np.random.randint(-30, 30)
        self.aspect = 0.7 + np.random.rand() * 0.6

    def step(self, buffer, features):
        if features['transient']:
            self.cx = W // 2 + np.random.randint(-40, 40)
            self.cy = H // 2 + np.random.randint(-30, 30)
            self.color_idx = 1 + np.random.randint(254)

        self.offset += 0.4 + features['bass'] * 3 + features['rms'] * 1.5
        step = 10 + int(features['mid'] * 16)
        rings = 12 + int(features['rms'] * 10)

        ci = self.color_idx
        off = self.offset % step
        for k in range(1, rings + 1):
            r = k * step + off
            hw = int(r)
            hh = int(r * self.aspect)
            x0, y0 = self.cx - hw, self.cy - hh
            x1, y1 = self.cx + hw, self.cy + hh
            _poly(buffer, [(x0, y0), (x1, y0), (x1, y1), (x0, y1)], ci)
            ci = 1 + ((ci + 6) % 254)

        self.color_idx = 1 + ((self.color_idx + 2) % 254)
