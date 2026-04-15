"""Axis-aligned random rectangle outlines."""
from __future__ import annotations
import numpy as np

from ._draw import polygon

W, H = 320, 200


class Squares:
    def __init__(self):
        self.reset()

    def reset(self):
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.color_idx = 1 + np.random.randint(254)
        count = 1 + int(features['rms'] * 4 + features['bass'] * 3)
        for _ in range(count):
            cx = np.random.randint(W)
            cy = np.random.randint(H)
            size = 6 + int(features['mid'] * 80 + np.random.randint(20))
            x0, y0 = cx - size // 2, cy - size // 2
            x1, y1 = cx + size // 2, cy + size // 2
            polygon(buffer, [(x0, y0), (x1, y0), (x1, y1), (x0, y1)], self.color_idx)
            self.color_idx = 1 + ((self.color_idx + 5) % 254)
