"""Atom — nucleus at center with electrons orbiting on multiple tilted ellipses."""
from __future__ import annotations
import numpy as np

from ._draw import circle as _circle

W, H = 320, 200


class Atom:
    def __init__(self):
        self.reset()

    def reset(self):
        self.phase = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.n_orbits = int(np.random.choice([3, 4, 5, 6]))
        self.tilts = np.random.rand(self.n_orbits) * np.pi
        self.rx = 30 + np.random.randint(60)
        self.ry = 15 + np.random.randint(30)
        self.cx = W // 2
        self.cy = H // 2

    def step(self, buffer, features):
        if features['transient'] and np.random.rand() < 0.4:
            self.tilts = np.random.rand(self.n_orbits) * np.pi
            self.color_idx = 1 + np.random.randint(254)

        self.phase += 0.08 + features['bass'] * 0.3 + features['mid'] * 0.15
        rx = self.rx * (0.7 + features['rms'] * 0.8)
        ry = self.ry * (0.7 + features['mid'] * 0.8)

        # Trace each orbital ellipse
        ci = self.color_idx
        samples = 80 + int(features['rms'] * 120)
        dtheta = 2 * np.pi / samples
        for k in range(self.n_orbits):
            cos_r, sin_r = np.cos(self.tilts[k]), np.sin(self.tilts[k])
            theta = 0.0
            for _ in range(samples):
                lx = rx * np.cos(theta)
                ly = ry * np.sin(theta)
                x = int(self.cx + lx * cos_r - ly * sin_r)
                y = int(self.cy + lx * sin_r + ly * cos_r)
                if 0 <= x < W and 0 <= y < H:
                    buffer[y, x] = ci
                theta += dtheta
            ci = 1 + ((ci + 9) % 254)

        # Electron particles orbiting each ring
        ec = 1 + ((self.color_idx + 40) % 254)
        for k in range(self.n_orbits):
            cos_r, sin_r = np.cos(self.tilts[k]), np.sin(self.tilts[k])
            a = self.phase * (1 + 0.3 * k) + k * 0.9
            lx = rx * np.cos(a)
            ly = ry * np.sin(a)
            x = int(self.cx + lx * cos_r - ly * sin_r)
            y = int(self.cy + lx * sin_r + ly * cos_r)
            _circle(buffer, x, y, 2 + int(features['treble'] * 3), ec)
            ec = 1 + ((ec + 17) % 254)

        # Nucleus
        nr = 3 + int(features['bass'] * 6)
        _circle(buffer, self.cx, self.cy, nr, ci)
        self.color_idx = 1 + ((self.color_idx + 1) % 254)
