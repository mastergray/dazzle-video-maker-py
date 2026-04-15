"""Rotated ellipses traced parametrically."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Ellipse:
    def __init__(self):
        self.reset()

    def reset(self):
        self.theta = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.cx = W // 2 + np.random.randint(-40, 40)
        self.cy = H // 2 + np.random.randint(-30, 30)
        self.ax = 30 + np.random.randint(50)
        self.ay = 20 + np.random.randint(40)
        self.rot = np.random.rand() * np.pi

    def step(self, buffer, features):
        if features['transient']:
            self.rot = np.random.rand() * np.pi
            self.color_idx = 1 + np.random.randint(254)

        samples = 120 + int(features['bass'] * 400 + features['mid'] * 200)
        dtheta = 0.05 + features['treble'] * 0.1
        ax = self.ax * (0.7 + features['rms'] * 0.8)
        ay = self.ay * (0.7 + features['rms'] * 0.6)
        cos_r, sin_r = np.cos(self.rot), np.sin(self.rot)

        theta = self.theta
        ci = self.color_idx
        for _ in range(samples):
            lx = ax * np.cos(theta)
            ly = ay * np.sin(theta)
            x = int(self.cx + lx * cos_r - ly * sin_r)
            y = int(self.cy + lx * sin_r + ly * cos_r)
            if 0 <= x < W and 0 <= y < H:
                buffer[y, x] = ci
            theta += dtheta
            ci = 1 + (ci % 254)
        self.theta = theta
        self.color_idx = ci
        self.rot += 0.005 + features['mid'] * 0.02
