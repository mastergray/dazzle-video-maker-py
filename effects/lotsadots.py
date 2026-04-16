"""Random pixel scatter — density driven by audio energy."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class LotsaDots:
    def __init__(self):
        self.color_idx = 1

    def reset(self):
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer: np.ndarray, features: dict):
        # Density scales with overall RMS; treble pushes up max
        count = 20 + int(features['rms'] * 600 + features['treble'] * 400)
        xs = np.random.randint(0, W, size=count)
        ys = np.random.randint(0, H, size=count)

        if features['transient']:
            self.color_idx = 1 + np.random.randint(254)

        # Use a narrow color band that drifts per frame — produces visible "color pulses"
        band_width = 1 + int(features['mid'] * 20)
        colors = self.color_idx + np.random.randint(0, band_width, size=count)
        buffer[ys, xs] = (colors % 254) + 1
        self.color_idx = 1 + ((self.color_idx + 1 + int(features['bass'] * 5)) % 254)
