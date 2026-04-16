"""Pygame display + audio-playback engine for audio-reactive Dazzle port."""
from __future__ import annotations
import os
os.environ.setdefault('SDL_VIDEO_CENTERED', '1')
import numpy as np
import pygame
from pygame import surfarray

from audio import AudioFeatures
from palette import rainbow_palette, cycle
from effects.sierpinski import Sierpinski, W, H


SCALE = 3
FPS = 60


def run(wav_path: str):
    af = AudioFeatures(wav_path, fps=FPS)

    pygame.init()
    pygame.display.set_caption('Dazzle — sierpinski (audio-reactive)')
    screen = pygame.display.set_mode((W * SCALE, H * SCALE))
    clock = pygame.time.Clock()

    buffer = np.zeros((H, W), dtype=np.uint8)
    effect = Sierpinski()
    pal = rainbow_palette()
    pal_shift = 0

    pygame.mixer.init(frequency=af.sr, size=-16, channels=2)
    pygame.mixer.music.load(wav_path)
    pygame.mixer.music.play()
    start_ms = pygame.time.get_ticks()

    running = True
    while running:
        for ev in pygame.event.get():
            if ev.type == pygame.QUIT:
                running = False
            elif ev.type == pygame.KEYDOWN and ev.key in (pygame.K_ESCAPE, pygame.K_q):
                running = False

        elapsed = (pygame.time.get_ticks() - start_ms) / 1000.0
        frame_idx = int(elapsed * FPS)
        if frame_idx >= af.n_frames:
            running = False
            break
        feats = af.features_at(frame_idx)

        # Palette cycle: rate proportional to treble
        pal_shift = (pal_shift + 1 + int(feats['treble'] * 4)) % 255
        cur_pal = cycle(pal, pal_shift)

        # Fade previous frame lightly (subtract 1 from non-zero pixels)
        # Using RMS so quieter passages fade faster, louder passages hold
        fade_amt = 1 + int((1 - feats['rms']) * 2)
        nz = buffer > fade_amt
        buffer[nz] -= fade_amt
        buffer[~nz] = 0

        # Run effect
        effect.step(buffer, feats)

        # Convert paletted buffer to RGB and blit
        rgb = cur_pal[buffer]                # (H, W, 3)
        rgb_scaled = np.kron(rgb, np.ones((SCALE, SCALE, 1), dtype=np.uint8))
        # pygame surfarray wants (W, H, 3)
        surfarray.blit_array(screen, np.transpose(rgb_scaled, (1, 0, 2)))

        pygame.display.flip()
        clock.tick(FPS)

    pygame.mixer.music.stop()
    pygame.quit()


if __name__ == '__main__':
    import sys
    wav = sys.argv[1] if len(sys.argv) > 1 else (
        '/home/mastergray/codex/seamless-disarray/songs/clips/test/'
        'LANDR-10-11-25-2__clip02_02m01s_02m31s_reel30.wav'
    )
    run(wav)
