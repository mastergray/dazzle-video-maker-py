"""Ribbons — parallel flowing sine-bands sweeping across the screen."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200


class Ribbons:
    def __init__(self):
        self.reset()

    def reset(self):
        self.phase = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.n_bands = int(np.random.choice([3, 4, 5, 6]))
        self.freq = 0.01 + np.random.rand() * 0.03
        self.band_sep = 6 + np.random.randint(10)

    def step(self, buffer, features):
        if features['transient']:
            self.freq = 0.01 + np.random.rand() * 0.03
            self.color_idx = 1 + np.random.randint(254)

        self.phase += 0.1 + features['bass'] * 0.4 + features['mid'] * 0.2
        amp = 20 + features['rms'] * 60
        step_x = 3  # sample every 3 px

        ci = self.color_idx
        for b in range(self.n_bands):
            yoff = (b - self.n_bands / 2) * self.band_sep
            prev_x, prev_y = 0, None
            for x in range(0, W, step_x):
                y = int(H / 2 + yoff + amp * np.sin(self.freq * x + self.phase + b * 0.6))
                if prev_y is not None:
                    _line(buffer, prev_x, prev_y, x, y, ci)
                prev_x, prev_y = x, y
            ci = 1 + ((ci + 11) % 254)

        self.color_idx = 1 + ((self.color_idx + 1 + int(features['treble'] * 3)) % 254)
