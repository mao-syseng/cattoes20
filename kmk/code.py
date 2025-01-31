import board

from kmk.kmk_keyboard import KMKKeyboard
from kmk.keys import KC
from kmk.scanners import DiodeOrientation
from kmk.modules.combos import Combos, Chord, Sequence

keyboard = KMKKeyboard()
combos = Combos()
keyboard.modules.append(combos)

keyboard.col_pins = (board.GP0, board.GP3, board.GP5, board.GP6)
keyboard.row_pins = (board.GP15, board.GP18, board.GP22)
keyboard.diode_orientation = DiodeOrientation.ROW2COL

keyboard.keymap = [
    [KC.I, KC.N, KC.S, KC.R,
     KC.E, KC.T, KC.O, KC.A,
     KC.BSPC, KC.SPC, KC.NO, KC.NO]
]

combos.combos = [
    Chord((KC.R, KC.S), KC.B),
    Chord((KC.N, KC.I), KC.Y),
    Chord((KC.T, KC.E), KC.H),
    Chord((KC.A, KC.O), KC.L),
    Chord((KC.S, KC.N), KC.P),
    Chord((KC.O, KC.T), KC.U),
    Chord((KC.R, KC.I), KC.G),
    Chord((KC.A, KC.E), KC.D),
    Chord((KC.R, KC.N), KC.Z),
    Chord((KC.S, KC.I), KC.F),
    Chord((KC.A, KC.T), KC.Q),
    Chord((KC.O, KC.E), KC.C),
    Chord((KC.R, KC.T), KC.X),
    Chord((KC.O, KC.I), KC.K),
    Chord((KC.S, KC.E), KC.V),
    Chord((KC.N, KC.A), KC.J),
    Chord((KC.R, KC.E), KC.M),
    Chord((KC.A, KC.I), KC.W),
    Chord((KC.S, KC.T), KC.SLSH),  # /
    Chord((KC.R, KC.O), KC.SCLN),  # ;
    Chord((KC.N, KC.E), KC.COMM),  # ,
    Chord((KC.A, KC.S), KC.QUOT),  # '
    Chord((KC.T, KC.I), KC.QUES),  # ?
    Chord((KC.O, KC.N), KC.MINS),  # -
]

if __name__ == '__main__':
    keyboard.go()

