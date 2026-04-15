"""Archimedean spiral: r = a*θ traced outward from center."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Spiral:
    def __init__(self):
        self.reset()

    def reset(self):
        self.theta = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.a = 0.5 + np.random.rand() * 1.5      # radius growth rate
        self.direction = 1 if np.random.rand() < 0.5 else -1

    def step(self, buffer: np.ndarray, features: dict):
        if features['transient'] and np.random.rand() < 0.3:
            self.direction *= -1

        cx, cy = W // 2, H // 2
        steps = 80 + int(features['bass'] * 400 + features['mid'] * 200)
        dtheta = 0.02 + features['treble'] * 0.06
        a = self.a * (0.7 + features['rms'] * 0.8)

        theta = self.theta
        ci = self.color_idx
        max_r = min(cx, cy) - 2

        for _ in range(steps):
            r = a * theta
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
