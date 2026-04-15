"""Shared drawing primitives for effects."""
from __future__ import annotations
import numpy as np


def line(buf, x0, y0, x1, y1, c):
    """Bresenham line; buf is (H, W) paletted."""
    H, W = buf.shape
    x0, y0, x1, y1 = int(x0), int(y0), int(x1), int(y1)
    dx = abs(x1 - x0)
    dy = abs(y1 - y0)
    sx = 1 if x0 < x1 else -1
    sy = 1 if y0 < y1 else -1
    err = dx - dy
    while True:
        if 0 <= x0 < W and 0 <= y0 < H:
            buf[y0, x0] = c
        if x0 == x1 and y0 == y1:
            break
        e2 = err * 2
        if e2 > -dy:
            err -= dy; x0 += sx
        if e2 < dx:
            err += dx; y0 += sy


def polygon(buf, pts, c):
    """Connect pts as a closed polygon."""
    n = len(pts)
    for i in range(n):
        x0, y0 = pts[i]
        x1, y1 = pts[(i + 1) % n]
        line(buf, x0, y0, x1, y1, c)


def circle(buf, cx, cy, r, c):
    """Midpoint circle."""
    H, W = buf.shape
    cx, cy, r = int(cx), int(cy), int(r)
    x, y = r, 0
    err = 0
    while x >= y:
        for dx, dy in ((x, y), (y, x), (-x, y), (-y, x), (-x, -y), (-y, -x), (x, -y), (y, -x)):
            px, py = cx + dx, cy + dy
            if 0 <= px < W and 0 <= py < H:
                buf[py, px] = c
        y += 1
        err += 1 + 2 * y
        if 2 * (err - x) + 1 > 0:
            x -= 1
            err += 1 - 2 * x
