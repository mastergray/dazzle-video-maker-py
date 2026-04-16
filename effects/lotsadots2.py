"""LotsaDots2 — clustered dot scatter around moving gaussian centers."""
from __future__ import annotations
import numpy as np

W, H = 320, 200


class LotsaDots2:
    def __init__(self):
        self.reset()

    def reset(self):
        self.n_clusters = int(np.random.choice([3, 4, 5, 6]))
        self.centers = np.column_stack([
            np.random.uniform(0, W, self.n_clusters),
            np.random.uniform(0, H, self.n_clusters),
        ])
        self.vels = np.random.uniform(-2, 2, size=(self.n_clusters, 2))
        self.color_idx = 1 + np.random.randint(254)

    def step(self, buffer, features):
        if features['transient']:
            self.vels += np.random.uniform(-3, 3, size=self.vels.shape)
            self.color_idx = 1 + np.random.randint(254)

        # Drift centers with damping + audio kick
        kick = 0.2 + features['bass'] * 1.5
        self.vels += np.random.uniform(-kick, kick, size=self.vels.shape)
        self.vels *= 0.93
        self.centers = (self.centers + self.vels) % np.array([W, H])

        sigma = 6 + features['rms'] * 20
        per_cluster = 20 + int(features['rms'] * 200 + features['treble'] * 200)
        ci = self.color_idx

        for k in range(self.n_clusters):
            cx, cy = self.centers[k]
            xs = np.clip(np.random.normal(cx, sigma, per_cluster).astype(int), 0, W - 1)
            ys = np.clip(np.random.normal(cy, sigma, per_cluster).astype(int), 0, H - 1)
            buffer[ys, xs] = ci
            ci = 1 + ((ci + 19) % 254)

        self.color_idx = 1 + ((self.color_idx + 1 + int(features['mid'] * 3)) % 254)
