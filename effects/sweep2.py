"""Sweep2 — rotating sweep with off-center pivot and expanding arm length."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Sweep2:
    def __init__(self):
        self.reset()

    def reset(self):
        self.angle = np.random.rand() * np.pi * 2
        self.color_idx = 1 + np.random.randint(254)
        self.cx = np.random.randint(60, W - 60)
        self.cy = np.random.randint(40, H - 40)
        self.n_arms = int(np.random.choice([2, 3, 4]))
        self.direction = 1 if np.random.rand() < 0.5 else -1
        self.pulse = 0.0

    def step(self, buffer, features):
        if features['transient'] and np.random.rand() < 0.3:
            self.direction *= -1
            self.color_idx = 1 + np.random.randint(254)

        self.pulse += 0.1 + features['bass'] * 0.5
        max_r = int(np.hypot(W, H))
        arm_sep = 2 * np.pi / self.n_arms
        substeps = 2 + int(features['mid'] * 5)
        dangle = (0.04 + features['bass'] * 0.12) * self.direction / substeps

        ci = self.color_idx
        for _ in range(substeps):
            self.angle += dangle
            # Arm length pulses with bass
            arm_r = max_r * (0.55 + 0.45 * (np.sin(self.pulse) * 0.5 + 0.5))
            for k in range(self.n_arms):
                a = self.angle + k * arm_sep
                ca, sa = np.cos(a), np.sin(a)
                for r in range(0, int(arm_r), 2):
                    x = int(self.cx + r * ca)
                    y = int(self.cy + r * sa)
                    if 0 <= x < W and 0 <= y < H:
                        buffer[y, x] = ci
                    else:
                        break
                ci = 1 + ((ci + 4) % 254)
        self.color_idx = 1 + ((self.color_idx + 1 + int(features['treble'] * 3)) % 254)
