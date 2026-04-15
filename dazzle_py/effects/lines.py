"""Random line-segment effect."""
from __future__ import annotations
import numpy as np

from ._draw import line as _draw_line

W, H = 320, 200


class Lines:
    def __init__(self):
        self.color_idx = 1

    def reset(self):
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer: np.ndarray, features: dict):
        if features['transient']:
            self.color_idx = 1 + np.random.randint(254)

        count = 1 + int(features['bass'] * 8 + features['mid'] * 4)
        for _ in range(count):
            x0, y0 = np.random.randint(W), np.random.randint(H)
            x1, y1 = np.random.randint(W), np.random.randint(H)
            _draw_line(buffer, x0, y0, x1, y1, self.color_idx)
            self.color_idx = 1 + (self.color_idx % 254)
