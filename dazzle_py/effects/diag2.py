"""Diag2 — parallel diagonal lines (top-right to bottom-left), scrolling."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200


class Diag2:
    def __init__(self):
        self.reset()

    def reset(self):
        self.offset = 0.0
        self.spacing = 10 + np.random.randint(20)
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.spacing = 8 + np.random.randint(24)
            self.color_idx = 1 + np.random.randint(254)

        self.offset += 0.6 + features['bass'] * 4 + features['mid'] * 2
        off = int(self.offset) % self.spacing
        ci = self.color_idx
        # diagonal / : slope -1
        for k in range(0, W + H, self.spacing):
            x0 = k + off
            y0 = 0
            x1 = x0 - H
            y1 = H
            _line(buffer, x0, y0, x1, y1, ci)
            ci = 1 + ((ci + 4) % 254)
        self.color_idx = 1 + ((self.color_idx + 1 + int(features['treble'] * 3)) % 254)
