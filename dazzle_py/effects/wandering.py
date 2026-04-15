"""Random-walk particle — leaves a trail of pixels."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Wandering:
    def __init__(self):
        self.reset()

    def reset(self):
        self.x = W // 2
        self.y = H // 2
        self.color_idx = 1 + np.random.randint(254)
        self.dir_bias = np.random.rand(4)
        self.dir_bias /= self.dir_bias.sum()

    def step(self, buffer: np.ndarray, features: dict):
        if features['transient']:
            self.dir_bias = np.random.rand(4)
            self.dir_bias /= self.dir_bias.sum()

        iters = 50 + int(features['bass'] * 400 + features['mid'] * 200)
        step_size = 1 + int(features['treble'] * 3)
        x, y, ci = self.x, self.y, self.color_idx

        # Biased random walk: 4 directions with treble-influenced momentum
        choices = np.random.choice(4, size=iters, p=self.dir_bias)
        for d in choices:
            if d == 0: x += step_size
            elif d == 1: x -= step_size
            elif d == 2: y += step_size
            else: y -= step_size
            x %= W
            y %= H
            buffer[y, x] = ci
            ci = 1 + (ci % 254)

        self.x, self.y, self.color_idx = x, y, ci
