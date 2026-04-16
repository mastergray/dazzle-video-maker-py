"""Streamer — a particle leaving a connected trail, with momentum."""
from __future__ import annotations
import numpy as np

from ._draw import line

W, H = 320, 200


class Streamer:
    def __init__(self):
        self.reset()

    def reset(self):
        self.x = float(np.random.randint(W))
        self.y = float(np.random.randint(H))
        self.vx = np.random.uniform(-3, 3)
        self.vy = np.random.uniform(-2, 2)
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            # Nudge velocity but keep trail continuous
            self.vx += np.random.uniform(-2, 2)
            self.vy += np.random.uniform(-2, 2)

        # Accelerate with bass, dampen always
        accel = 0.2 + features['bass'] * 2.0
        self.vx += np.random.uniform(-accel, accel)
        self.vy += np.random.uniform(-accel, accel)
        self.vx *= 0.95
        self.vy *= 0.95

        speed = 1 + int(features['rms'] * 5)
        for _ in range(speed * 4):
            nx = self.x + self.vx
            ny = self.y + self.vy
            line(buffer, self.x, self.y, nx, ny, self.color_idx)
            self.x, self.y = nx % W, ny % H
            self.color_idx = 1 + ((self.color_idx + 1) % 254)
