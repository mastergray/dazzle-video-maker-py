"""Formula1 — Lissajous-family parametric curve with audio-driven frequency ratios."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Formula1:
    def __init__(self):
        self.reset()

    def reset(self):
        self.theta = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.a = float(np.random.choice([2, 3, 4, 5]))
        self.b = float(np.random.choice([3, 4, 5, 7]))
        self.phi = np.random.rand() * np.pi
        self.cx = W // 2
        self.cy = H // 2

    def step(self, buffer, features):
        if features['transient']:
            self.a = float(np.random.choice([2, 3, 4, 5]))
            self.b = float(np.random.choice([3, 4, 5, 7]))
            self.phi = np.random.rand() * np.pi
            self.color_idx = 1 + np.random.randint(254)

        samples = 200 + int(features['bass'] * 500 + features['mid'] * 250)
        dtheta = 0.02 + features['treble'] * 0.06
        ax = (W // 2 - 10) * (0.6 + features['rms'] * 0.6)
        ay = (H // 2 - 10) * (0.6 + features['rms'] * 0.6)

        theta = self.theta
        ci = self.color_idx
        phi = self.phi + features['mid'] * 0.8
        for _ in range(samples):
            x = int(self.cx + ax * np.sin(self.a * theta + phi))
            y = int(self.cy + ay * np.sin(self.b * theta))
            if 0 <= x < W and 0 <= y < H:
                buffer[y, x] = ci
            theta += dtheta
            ci = 1 + (ci % 254)
        self.theta = theta
        self.color_idx = ci
