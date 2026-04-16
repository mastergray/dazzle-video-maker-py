"""Pedals (flower/rose curve) — r = cos(kθ) traced around center."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Pedals:
    def __init__(self):
        self.reset()

    def reset(self):
        self.theta = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.k = float(np.random.choice([3, 4, 5, 6, 7]))
        self.scale = 40 + np.random.randint(40)
        self.cx = W // 2
        self.cy = H // 2

    def step(self, buffer, features):
        if features['transient']:
            self.k = float(np.random.choice([3, 4, 5, 6, 7]))
            self.color_idx = 1 + np.random.randint(254)

        samples = 100 + int(features['bass'] * 400 + features['mid'] * 200)
        dtheta = 0.03 + features['treble'] * 0.06
        scale = self.scale * (0.7 + features['rms'] * 0.8)

        theta = self.theta
        ci = self.color_idx
        for _ in range(samples):
            r = scale * np.cos(self.k * theta)
            x = int(self.cx + r * np.cos(theta))
            y = int(self.cy + r * np.sin(theta))
            if 0 <= x < W and 0 <= y < H:
                buffer[y, x] = ci
            theta += dtheta
            ci = 1 + (ci % 254)

        self.theta = theta
        self.color_idx = ci
