"""Puffs — small radial bursts at random positions."""
from __future__ import annotations
import numpy as np

from ._draw import line

W, H = 320, 200


class Puffs:
    def __init__(self):
        self.reset()

    def reset(self):
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.color_idx = 1 + np.random.randint(254)

        puff_count = 1 + int(features['rms'] * 4 + features['mid'] * 3)
        rays_per_puff = 6 + int(features['bass'] * 12)
        radius = 8 + int(features['rms'] * 30)

        for _ in range(puff_count):
            cx = np.random.randint(W)
            cy = np.random.randint(H)
            base_angle = np.random.rand() * 2 * np.pi
            for k in range(rays_per_puff):
                ang = base_angle + k * (2 * np.pi / rays_per_puff)
                ex = int(cx + radius * np.cos(ang))
                ey = int(cy + radius * np.sin(ang))
                line(buffer, cx, cy, ex, ey, self.color_idx)
                self.color_idx = 1 + ((self.color_idx + 2) % 254)
