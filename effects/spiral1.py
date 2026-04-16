"""Spiral1 — logarithmic spiral: r = a * exp(b*θ)."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Spiral1:
    def __init__(self):
        self.reset()

    def reset(self):
        self.theta = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.a = 1.2 + np.random.rand() * 1.8
        self.b = 0.12 + np.random.rand() * 0.12
        self.direction = 1 if np.random.rand() < 0.5 else -1

    def step(self, buffer, features):
        if features['transient'] and np.random.rand() < 0.3:
            self.direction *= -1
            self.color_idx = 1 + np.random.randint(254)

        cx, cy = W // 2, H // 2
        steps = 80 + int(features['bass'] * 400 + features['mid'] * 250)
        dtheta = 0.02 + features['treble'] * 0.05
        max_r = min(cx, cy) - 2
        b = self.b * (0.8 + features['rms'] * 0.6)

        theta = self.theta
        ci = self.color_idx
        for _ in range(steps):
            r = self.a * np.exp(b * theta)
            if r > max_r:
                theta = 0.0
                ci = 1 + (ci % 254)
                continue
            x = int(cx + r * np.cos(theta * self.direction))
            y = int(cy + r * np.sin(theta * self.direction))
            if 0 <= x < W and 0 <= y < H:
                buffer[y, x] = ci
            theta += dtheta
            ci = 1 + (ci % 254)
        self.theta = theta
        self.color_idx = ci
