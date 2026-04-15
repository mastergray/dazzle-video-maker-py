"""Zigstream — streamer-style particle that zigzags instead of drifting smoothly."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200


class Zigstream:
    def __init__(self):
        self.reset()

    def reset(self):
        self.x = float(np.random.randint(W))
        self.y = float(np.random.randint(H))
        self.heading = np.random.rand() * 2 * np.pi
        self.turn_dir = np.random.choice([-1, 1])
        self.drift = np.random.uniform(-0.02, 0.02)
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.heading = np.random.rand() * 2 * np.pi
            self.drift = np.random.uniform(-0.03, 0.03)
            self.color_idx = 1 + np.random.randint(254)

        self.heading += self.drift + features['mid'] * 0.02
        zigs = 10 + int(features['bass'] * 40 + features['rms'] * 30)
        seg_len = 4 + int(features['rms'] * 14)
        turn = 1.5 + features['treble'] * 0.7

        ci = self.color_idx
        for _ in range(zigs):
            a = self.heading + self.turn_dir * turn
            nx = self.x + seg_len * np.cos(a)
            ny = self.y + seg_len * np.sin(a)
            _line(buffer, self.x, self.y, nx, ny, ci)
            self.x, self.y = nx % W, ny % H
            self.turn_dir *= -1
            self.heading += self.drift
            ci = 1 + ((ci + 3) % 254)
        self.color_idx = 1 + ((self.color_idx + 1) % 254)
