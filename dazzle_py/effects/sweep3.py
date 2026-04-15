"""Sweep3 — dashed/broken rotating sweep with per-segment color bands."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Sweep3:
    def __init__(self):
        self.reset()

    def reset(self):
        self.angle = np.random.rand() * np.pi * 2
        self.color_idx = 1 + np.random.randint(254)
        self.cx = W // 2
        self.cy = H // 2
        self.dash_on = 6
        self.dash_off = 3
        self.direction = 1 if np.random.rand() < 0.5 else -1
        self.n_arms = int(np.random.choice([1, 2, 4]))

    def step(self, buffer, features):
        if features['transient']:
            self.dash_on = 4 + np.random.randint(8)
            self.dash_off = 2 + np.random.randint(5)
            self.color_idx = 1 + np.random.randint(254)

        max_r = int(np.hypot(self.cx, self.cy))
        substeps = 2 + int(features['bass'] * 5)
        dangle = (0.05 + features['mid'] * 0.1) * self.direction / substeps
        arm_sep = 2 * np.pi / self.n_arms
        stride = self.dash_on + self.dash_off

        ci = self.color_idx
        for _ in range(substeps):
            self.angle += dangle
            for k in range(self.n_arms):
                a = self.angle + k * arm_sep
                ca, sa = np.cos(a), np.sin(a)
                r = 0
                while r < max_r:
                    for j in range(self.dash_on):
                        rr = r + j
                        x = int(self.cx + rr * ca)
                        y = int(self.cy + rr * sa)
                        if 0 <= x < W and 0 <= y < H:
                            buffer[y, x] = ci
                    r += stride
                    ci = 1 + ((ci + 5) % 254)
        self.color_idx = 1 + ((self.color_idx + 1) % 254)
