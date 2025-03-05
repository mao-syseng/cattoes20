import board

from kmk.kmk_keyboard import KMKKeyboard
from kmk.keys import KC
from kmk.scanners import DiodeOrientation
from kmk.modules.combos import Combos, Chord, Sequence
from kmk.modules.mouse_keys import MouseKeys


keyboard = KMKKeyboard()
combos = Combos()
keyboard.modules.append(combos)
keyboard.modules.append(MouseKeys())

keyboard.col_pins = (board.D4, board.D5, board.D9, board.D8)
keyboard.row_pins = (board.D1, board.D10, board.D3)
keyboard.diode_orientation = DiodeOrientation.ROW2COL

keyboard.keymap = [
       [KC.MB_LMB, KC.X, KC.Z, KC.R,
     KC.E, KC.A, KC.S, KC.A,
     KC.MB_LMB, KC.MB_LMB, KC.NO, KC.NO]
]

combos.combos = [
    Chord((KC.X, KC.Z), KC.NO),
]

if __name__ == '__main__':
    keyboard.go()

