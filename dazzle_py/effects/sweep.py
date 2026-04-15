"""Sweep: radial line rotating around a center point, leaves a persistent trail."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Sweep:
    def __init__(self):
        self.reset()

    def reset(self):
        self.angle = np.random.rand() * np.pi * 2
        self.color_idx = 1 + np.random.randint(254)
        self.cx = W // 2
        self.cy = H // 2
        self.sweep_count = np.random.choice([1, 2, 3])  # sometimes multi-armed
        self.direction = 1 if np.random.rand() < 0.5 else -1

    def step(self, buffer: np.ndarray, features: dict):
        if features['transient'] and np.random.rand() < 0.3:
            self.direction *= -1
            self.color_idx = 1 + np.random.randint(254)

        max_r = int(np.sqrt(self.cx ** 2 + self.cy ** 2))
        arm_sep = 2 * np.pi / self.sweep_count

        # Multiple sub-steps per frame for smoother motion with bass drive
        substeps = 2 + int(features['bass'] * 6)
        dangle = (0.03 + features['mid'] * 0.08) * self.direction / substeps

        ci = self.color_idx
        for _ in range(substeps):
            self.angle += dangle
            for arm in range(self.sweep_count):
                a = self.angle + arm * arm_sep
                ca, sa = np.cos(a), np.sin(a)
                # Draw the sweep line from center to edge
                for r in range(0, max_r, 2):
                    x = int(self.cx + r * ca)
                    y = int(self.cy + r * sa)
                    if 0 <= x < W and 0 <= y < H:
                        buffer[y, x] = ci
                    else:
                        break
                ci = 1 + ((ci + 3) % 254)

        self.color_idx = 1 + ((self.color_idx + 1 + int(features['treble'] * 3)) % 254)
