"""Bars — vertical bars whose heights ripple across the screen."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class Bars:
    def __init__(self):
        self.reset()

    def reset(self):
        self.phase = 0.0
        self.color_idx = 1 + np.random.randint(254)
        self.n_bars = int(np.random.choice([16, 20, 32, 40]))
        self.vertical = np.random.rand() < 0.7

    def step(self, buffer, features):
        if features['transient']:
            self.color_idx = 1 + np.random.randint(254)
            if np.random.rand() < 0.2:
                self.n_bars = int(np.random.choice([16, 20, 32, 40]))
                self.vertical = np.random.rand() < 0.7

        self.phase += 0.08 + features['mid'] * 0.25 + features['bass'] * 0.15
        ci = self.color_idx
        amp = 0.4 + features['rms'] * 0.8

        if self.vertical:
            bar_w = W // self.n_bars
            for i in range(self.n_bars):
                h = (np.sin(self.phase + i * 0.35) * 0.5 + 0.5) * amp * H
                h = int(np.clip(h, 1, H))
                x0 = i * bar_w
                x1 = min(W, x0 + bar_w - 1)
                buffer[H - h:H, x0:x1] = ci
                ci = 1 + ((ci + 5) % 254)
        else:
            bar_h = H // self.n_bars
            for i in range(self.n_bars):
                w = (np.sin(self.phase + i * 0.35) * 0.5 + 0.5) * amp * W
                w = int(np.clip(w, 1, W))
                y0 = i * bar_h
                y1 = min(H, y0 + bar_h - 1)
                buffer[y0:y1, 0:w] = ci
                ci = 1 + ((ci + 5) % 254)

        self.color_idx = 1 + ((self.color_idx + 1 + int(features['treble'] * 3)) % 254)
