# monopleg10
Monopleg10 – A sculpted, one-handed keyboard with 10 keys. Designed for individuals with limited hand mobility or those who use only one hand, including those with monoplegia, hemiparesis, amputations, or other conditions. Its ergonomic design ensures comfort and accessibility for efficient, one-handed input.

https://mao-syseng.github.io/monopleg10

## Parts
- 10x choc switches
- 10x 1N4148 Signal Diodes
- seeed studio xiao rp2040 mcu
- 22AWG solid core wire

- cosmos config: https://ryanis.cool/cosmos/beta#cm:Cn8KHhIJEKCABCAJSIACEgUQMEiAAjgTQMSWMUicg7iobwoWEgYQoIAGIAkSAhAwOABA0l5IgICMPAoZEgYQoIAIIAkSAhAwOBRArqaKOEibg7SobwocEgYQoIAKIAkSAhAwOChAgJKTkAJIg4uMjZDZARgAQMjQj/grSOKY1tADCj0KKhISEEAgAEDi6obIHUjTg6SP0PoBEg0gAECjhYyM0D9IgsIiOABAlIOQAxgCQPuLhJzwN0ifh6TN4fsDEAMYhiAiCQi0ARCqARiEBzAyOAOCAQBIAFgAaAByAiAF 
- layout: https://inkeys.wiki/en/keymaps/taipo


## Site notes
- https://news.ycombinator.com/item?id=42814110
- Use retro UI CSS, either Windows98 or the Steam/CS one.
- Should use tabs and really compact UI and write in no nonsense old school writing
- SVG image of the board
- Form to order one
- Use a slider and radio buttons for something...
- Make something to show how to use the layout
- use https://formsubmit.co/ to submit contact form

## soldering notes
- solder columns first
- columns should be low and rows high, no need for much insulation due to low amount of wires.

## V1.1
- 5mm walls instead of 2mm
- 100% infill to add weight
- skip the bottom plate and add dutter on the case edges.
- use seeed studio xiao rp2040, Pi Pico was too big.
- add hole for wire

## KMK Notes
First working version of simple KMK config!! has all base chords
```
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
]

if __name__ == '__main__':
    keyboard.go()


```

## Practice 120s monkeytype for each item
### Day 1 2025-01-27
1. 5wpm
2. 6wpm 
3. 6wpm
4. 6wpm
5. 5wpm
6. 6wpm
7. 7wpm
8. 8wpm
9. 7wpm
10. 7wpm
11. 8wpm
12. 8wpm
13. 10wpm
14. 8wpm
15. 9wpm
16. 7wpm
17. 
