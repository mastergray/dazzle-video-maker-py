"""Random triangle polygon outlines."""
from __future__ import annotations
import numpy as np

from ._draw import polygon

W, H = 320, 200


class Triangles:
    def __init__(self):
        self.reset()

    def reset(self):
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.color_idx = 1 + np.random.randint(254)
        count = 1 + int(features['rms'] * 4 + features['bass'] * 3)
        for _ in range(count):
            pts = [(np.random.randint(W), np.random.randint(H)) for _ in range(3)]
            polygon(buffer, pts, self.color_idx)
            self.color_idx = 1 + ((self.color_idx + 3) % 254)
