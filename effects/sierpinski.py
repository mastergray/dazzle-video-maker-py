"""Sierpinski chaos-game effect.

Classic algorithm: pick 3 triangle vertices, start at a random point, repeatedly
jump halfway toward a randomly chosen vertex and plot. The Sierpinski triangle
emerges. Audio reactivity comes from varying iterations/frame (bass) and vertex
bias (mid/treble).
"""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Sierpinski:
    def __init__(self):
        self.reset()

    def reset(self):
        margin = 12
        self.vertices = np.array([
            (W // 2, margin),
            (margin, H - margin),
            (W - margin, H - margin),
        ], dtype=np.float32)
        self.point = np.array([W / 2, H / 2], dtype=np.float32)
        self.color_idx = 1  # skip 0 (background)

    def step(self, buffer: np.ndarray, features: dict):
        if features['transient']:
            self.reset()

        base_iters = 200
        iters = int(base_iters + features['bass'] * 3000)

        p = self.vertices.astype(np.float32)
        pt = self.point
        ci = self.color_idx
        # Vertex-selection weights: treble pulls toward top vertex, mid toward left, bass toward right.
        w = np.array([
            0.33 + features['treble'] * 0.4,
            0.33 + features['mid'] * 0.4,
            0.33 + features['bass'] * 0.4,
        ], dtype=np.float32)
        w /= w.sum()

        choices = np.random.choice(3, size=iters, p=w)
        for c in choices:
            pt = (pt + p[c]) * 0.5
            x = int(pt[0])
            y = int(pt[1])
            if 0 <= x < W and 0 <= y < H:
                buffer[y, x] = ci

        # Advance color index based on mid energy so bright pulses leave brighter trails
        ci = 1 + ((ci - 1 + 1 + int(features['mid'] * 3)) % 254)
        self.point = pt
        self.color_idx = ci
