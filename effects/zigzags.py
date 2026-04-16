"""Zigzag polyline — connected segments with alternating angles."""
from __future__ import annotations
import numpy as np

from ._draw import line

W, H = 320, 200


class Zigzags:
    def __init__(self):
        self.reset()

    def reset(self):
        self.x = np.random.randint(W)
        self.y = np.random.randint(H)
        self.angle = np.random.rand() * 2 * np.pi
        self.turn = np.random.choice([-1, 1])
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.angle = np.random.rand() * 2 * np.pi

        steps = 20 + int(features['bass'] * 80 + features['mid'] * 40)
        segment_len = 6 + int(features['rms'] * 20)
        turn_amt = 1.8 + features['treble'] * 0.8  # radians per zig

        for _ in range(steps):
            nx = self.x + int(segment_len * np.cos(self.angle))
            ny = self.y + int(segment_len * np.sin(self.angle))
            line(buffer, self.x, self.y, nx, ny, self.color_idx)
            self.x, self.y = nx % W, ny % H
            self.angle += self.turn * turn_amt
            self.turn *= -1
            self.color_idx = 1 + ((self.color_idx + 2) % 254)
