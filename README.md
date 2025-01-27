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
First working version of simple KMK config!!
```
import board

from kmk.kmk_keyboard import KMKKeyboard
from kmk.keys import KC
from kmk.scanners import DiodeOrientation

keyboard = KMKKeyboard()

keyboard.col_pins = (board.GP0, board.GP3, board.GP5, board.GP6)
keyboard.row_pins = (board.GP15, board.GP18, board.GP22)
keyboard.diode_orientation = DiodeOrientation.ROW2COL

keyboard.keymap = [
    [KC.Q, KC.W, KC.E, KC.R,
     KC.A, KC.S, KC.D, KC.F,
     KC.Z, KC.X, KC.NO, KC.NO]
]


if __name__ == '__main__':
    keyboard.go()
```
