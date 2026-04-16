"""Diag3 — both diagonals crossing (woven mesh), scrolling in opposite directions."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200


class Diag3:
    def __init__(self):
        self.reset()

    def reset(self):
        self.off_a = 0.0
        self.off_b = 0.0
        self.spacing = 12 + np.random.randint(18)
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.spacing = 10 + np.random.randint(20)
            self.color_idx = 1 + np.random.randint(254)

        drive = 0.5 + features['bass'] * 4 + features['mid'] * 2
        self.off_a += drive
        self.off_b -= drive * 0.8
        oa = int(self.off_a) % self.spacing
        ob = int(self.off_b) % self.spacing
        ci = self.color_idx

        for k in range(-H, W, self.spacing):
            _line(buffer, k + oa, 0, k + oa + H, H, ci)
            ci = 1 + ((ci + 3) % 254)
        ci = 1 + ((ci + 30) % 254)
        for k in range(0, W + H, self.spacing):
            _line(buffer, k + ob, 0, k + ob - H, H, ci)
            ci = 1 + ((ci + 3) % 254)

        self.color_idx = 1 + ((self.color_idx + 1) % 254)
