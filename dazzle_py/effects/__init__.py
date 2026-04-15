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
from .atom import Atom
from .bars import Bars
from .boxes import Boxes
from .curves import Curves
from .diag1 import Diag1
from .diag2 import Diag2
from .diag3 import Diag3
from .diag4 import Diag4
from .formula1 import Formula1
from .lotsadots2 import LotsaDots2
from .ribbons import Ribbons
from .sine import Sine
from .spiral1 import Spiral1
from .sweep2 import Sweep2
from .sweep3 import Sweep3
from .zigstream import Zigstream


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
    'atom': Atom,
    'bars': Bars,
    'boxes': Boxes,
    'curves': Curves,
    'diag1': Diag1,
    'diag2': Diag2,
    'diag3': Diag3,
    'diag4': Diag4,
    'formula1': Formula1,
    'lotsadots2': LotsaDots2,
    'ribbons': Ribbons,
    'sine': Sine,
    'spiral1': Spiral1,
    'sweep2': Sweep2,
    'sweep3': Sweep3,
    'zigstream': Zigstream,
}
