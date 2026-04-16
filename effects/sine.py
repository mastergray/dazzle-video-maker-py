"""Sine — a single sine wave scanning horizontally with varying frequency/amplitude."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200


class Sine:
    def __init__(self):
        self.reset()

    def reset(self):
        self.phase = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.freq = 0.02 + np.random.rand() * 0.05
        self.cy = H // 2 + np.random.randint(-30, 30)

    def step(self, buffer, features):
        if features['transient']:
            self.freq = 0.015 + np.random.rand() * 0.06
            self.color_idx = 1 + np.random.randint(254)
            self.cy = H // 2 + np.random.randint(-30, 30)

        self.phase += 0.15 + features['bass'] * 0.5 + features['mid'] * 0.3
        amp = 10 + features['rms'] * 80 + features['bass'] * 20
        step_x = 2
        freq = self.freq * (1 + features['treble'] * 2)

        ci = self.color_idx
        prev_x, prev_y = 0, int(self.cy)
        for x in range(0, W, step_x):
            y = int(self.cy + amp * np.sin(freq * x + self.phase))
            _line(buffer, prev_x, prev_y, x, y, ci)
            prev_x, prev_y = x, y
            ci = 1 + ((ci + 2) % 254)
        self.color_idx = 1 + ((self.color_idx + 1) % 254)
