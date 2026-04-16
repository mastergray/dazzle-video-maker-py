"""Grid lines — full horizontal/vertical rulings with moving offset."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Grid:
    def __init__(self):
        self.reset()

    def reset(self):
        self.offset = 0.0
        self.spacing = 12 + np.random.randint(20)
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.spacing = 8 + np.random.randint(24)
            self.color_idx = 1 + np.random.randint(254)

        self.offset += 0.3 + features['bass'] * 2.0 + features['treble'] * 1.5
        off_x = int(self.offset) % self.spacing
        off_y = int(self.offset * 0.7) % self.spacing

        ci = self.color_idx
        # Horizontal lines
        for y in range(off_y, H, self.spacing):
            buffer[y, :] = ci
            ci = 1 + ((ci + 3) % 254)
        # Vertical lines
        for x in range(off_x, W, self.spacing):
            buffer[:, x] = ci
            ci = 1 + ((ci + 3) % 254)

        self.color_idx = 1 + ((self.color_idx + 1 + int(features['mid'] * 4)) % 254)
