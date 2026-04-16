"""Tunnel: concentric polygons receding with perspective — bass drives travel speed."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200


class Tunnel:
    def __init__(self):
        self.reset()

    def reset(self):
        self.z = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.sides = int(np.random.choice([3, 4, 5, 6, 8]))
        self.rotation = np.random.rand() * np.pi * 2
        self.spin = (np.random.rand() - 0.5) * 0.1

    def step(self, buffer: np.ndarray, features: dict):
        if features['transient'] and np.random.rand() < 0.4:
            self.sides = int(np.random.choice([3, 4, 5, 6, 8]))

        cx, cy = W // 2, H // 2
        speed = 1.5 + features['bass'] * 6 + features['rms'] * 2
        self.z = (self.z + speed) % 24
        self.rotation += self.spin + features['treble'] * 0.05

        rings = 14
        sides = self.sides
        angles = np.arange(sides) * (2 * np.pi / sides)
        ci = self.color_idx

        for k in range(rings):
            r = (k * 24 + self.z) * (1.0 + features['mid'] * 0.3)
            if r < 4 or r > max(W, H):
                continue
            rot = self.rotation + k * 0.12
            pts = []
            for a in angles:
                x = int(cx + r * np.cos(rot + a))
                y = int(cy + r * np.sin(rot + a))
                pts.append((x, y))
            for i in range(sides):
                _line(buffer, pts[i][0], pts[i][1], pts[(i + 1) % sides][0], pts[(i + 1) % sides][1], ci)
            ci = 1 + ((ci + 5) % 254)

        self.color_idx = 1 + ((self.color_idx + 2) % 254)
