"""Concentric rotating hexagons — audio-reactive radius and rotation."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200
_VERTICES = np.arange(6) * (np.pi / 3)


class Hexagon:
    def __init__(self):
        self.reset()

    def reset(self):
        self.angle = np.random.rand() * np.pi * 2
        self.color_idx = 1 + np.random.randint(254)
        self.ring_offset = 0.0

    def step(self, buffer: np.ndarray, features: dict):
        if features['transient']:
            self.color_idx = 1 + np.random.randint(254)

        cx, cy = W // 2, H // 2
        self.angle += 0.02 + features['treble'] * 0.08
        self.ring_offset += 0.5 + features['bass'] * 3

        rings = 5 + int(features['rms'] * 8)
        base_r = 10
        step_r = 12 + features['mid'] * 10

        ci = self.color_idx
        for k in range(rings):
            r = base_r + k * step_r + (self.ring_offset % step_r)
            if r > max(W, H):
                break
            ang = self.angle + k * 0.15
            pts = []
            for v in _VERTICES:
                x = int(cx + r * np.cos(ang + v))
                y = int(cy + r * np.sin(ang + v))
                pts.append((x, y))
            for i in range(6):
                _line(buffer, pts[i][0], pts[i][1], pts[(i + 1) % 6][0], pts[(i + 1) % 6][1], ci)
            ci = 1 + ((ci + 7) % 254)

        self.color_idx = 1 + ((self.color_idx + 1) % 254)
