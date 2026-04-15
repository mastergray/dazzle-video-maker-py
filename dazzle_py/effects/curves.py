"""Curves — quadratic Bezier curves with wandering control points."""
from __future__ import annotations
import numpy as np

from ._draw import line as _line

W, H = 320, 200


class Curves:
    def __init__(self):
        self.reset()

    def reset(self):
        self.p0 = np.random.rand(2) * np.array([W, H])
        self.p1 = np.random.rand(2) * np.array([W, H])
        self.p2 = np.random.rand(2) * np.array([W, H])
        self.v0 = np.random.uniform(-2, 2, size=2)
        self.v1 = np.random.uniform(-3, 3, size=2)
        self.v2 = np.random.uniform(-2, 2, size=2)
        self.color_idx = 1 + np.random.randint(254)

    def _jitter(self, v, features):
        kick = 0.3 + features['bass'] * 2.5
        v += np.random.uniform(-kick, kick, size=2)
        return v * 0.95

    def step(self, buffer, features):
        if features['transient']:
            self.v1 += np.random.uniform(-4, 4, size=2)
            self.color_idx = 1 + np.random.randint(254)

        self.v0 = self._jitter(self.v0, features)
        self.v1 = self._jitter(self.v1, features)
        self.v2 = self._jitter(self.v2, features)
        self.p0 = (self.p0 + self.v0) % np.array([W, H])
        self.p1 = (self.p1 + self.v1) % np.array([W, H])
        self.p2 = (self.p2 + self.v2) % np.array([W, H])

        samples = 24 + int(features['rms'] * 60 + features['mid'] * 40)
        ts = np.linspace(0, 1, samples)
        one = (1 - ts) ** 2
        two = 2 * (1 - ts) * ts
        thr = ts ** 2
        xs = one * self.p0[0] + two * self.p1[0] + thr * self.p2[0]
        ys = one * self.p0[1] + two * self.p1[1] + thr * self.p2[1]

        ci = self.color_idx
        for i in range(samples - 1):
            _line(buffer, xs[i], ys[i], xs[i + 1], ys[i + 1], ci)
            ci = 1 + ((ci + 3) % 254)
        self.color_idx = 1 + ((self.color_idx + 1) % 254)
