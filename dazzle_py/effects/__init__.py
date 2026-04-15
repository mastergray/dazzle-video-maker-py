"""Effect registry — each entry is a zero-arg factory for a fresh effect instance."""
from .sierpinski import Sierpinski
from .lines import Lines
from .wandering import Wandering
from .lotsadots import LotsaDots
from .spiral import Spiral
from .hexagon import Hexagon
from .tunnel import Tunnel
from .sweep import Sweep
from .triangles import Triangles
from .squares import Squares
from .ellipse import Ellipse
from .zigzags import Zigzags
from .streamer import Streamer
from .grid import Grid
from .puffs import Puffs
from .pedals import Pedals


REGISTRY = {
    'sierpinski': Sierpinski,
    'lines': Lines,
    'wandering': Wandering,
    'lotsadots': LotsaDots,
    'spiral': Spiral,
    'hexagon': Hexagon,
    'tunnel': Tunnel,
    'sweep': Sweep,
    'triangles': Triangles,
    'squares': Squares,
    'ellipse': Ellipse,
    'zigzags': Zigzags,
    'streamer': Streamer,
    'grid': Grid,
    'puffs': Puffs,
    'pedals': Pedals,
}
