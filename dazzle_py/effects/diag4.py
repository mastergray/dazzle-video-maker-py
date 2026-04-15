"""Diag4 — diagonals radiating from an off-center pivot."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200


class Diag4:
    def __init__(self):
        self.reset()

    def reset(self):
        self.phase = 0.0
        self.cx = np.random.randint(40, W - 40)
        self.cy = np.random.randint(30, H - 30)
        self.n_rays = int(np.random.choice([12, 16, 24, 32]))
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.cx = np.random.randint(40, W - 40)
            self.cy = np.random.randint(30, H - 30)
            self.color_idx = 1 + np.random.randint(254)

        self.phase += 0.02 + features['mid'] * 0.1 + features['treble'] * 0.06
        max_r = int(np.hypot(W, H))
        step_ang = 2 * np.pi / self.n_rays
        ci = self.color_idx
        for k in range(self.n_rays):
            a = self.phase + k * step_ang
            x1 = int(self.cx + max_r * np.cos(a))
            y1 = int(self.cy + max_r * np.sin(a))
            _line(buffer, self.cx, self.cy, x1, y1, ci)
            ci = 1 + ((ci + 7) % 254)
        self.color_idx = 1 + ((self.color_idx + 1 + int(features['bass'] * 4)) % 254)
