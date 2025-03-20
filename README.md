# cat⋅toes20
cat⋅toes20 – A sculpted, one-handed keyboard with 10 keys. Designed for individuals with limited hand mobility or those who use only one hand, including those with monoplegia, hemiparesis, amputations, or other conditions. Its ergonomic design ensures comfort and accessibility for efficient, one-handed input.

https://mao-syseng.github.io/cattoes20/

## Parts
- 10x choc switches
- 10x 1N4148 Signal Diodes
- seeed studio xiao rp2040 mcu
- 22AWG solid core wire
- 3D printed case - I would recommend using 100% infill to add some weight to it.
- Some rubber tabs on the bottom of the case to avoid slipping.


## Layout
- Taipo https://inkeys.wiki/en/keymaps/taipo
- There is interactive version of the layout here: https://mao-syseng.github.io/monopleg10/


## Site notes
- https://news.ycombinator.com/item?id=42814110
- Make something to show how to use the layout

## soldering notes
- solder columns first
- columns should be low and rows high, no need for much insulation due to low amount of wires.

## V1.1
- 5mm walls instead of 2mm
- 100% infill to add weight
- skip the bottom plate and add dutter on the case edges.
- use seeed studio xiao rp2040, Pi Pico was too big.
- add hole for wire

## Firmware notes
- hold boot button while plugging in to laptop
- drag and drop CircuitPython to the microcontroller. Remember to get correct circuitpython version for the board.
- Drag and drop KMK folder to the board.
- Edit code.py accordingly

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

keyboard.col_pins = (board.D4, board.D5, board.D9, board.D8)
keyboard.row_pins = (board.D1, board.D10, board.D3)
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

## Cosmos 
V2 cosmos config: https://ryanis.cool/cosmos/beta#cm:Cn8KHhIJEKCABCAJSIACEgUQMEiAAjgTQMSWMUicg7iobwoWEgYQoIAGIAkSAhAwOABA0l5IgICMPAoZEgYQoIAIIAkSAhAwOBRArqaKOEibg7SobwocEgYQoIAKIAkSAhAwOChAgJKTkAJIg4uMjZDZARgAQMjQj/grSOKY1tADCj0KKhISEEAgAEDi6obIHUjTg6SP0PoBEg0gAECjhYyM0D9IgsIiOABAlIOQAxgCQPuLhJzwN0ifh6TN4fsDEAMYhiAiCQi0ARCqARiEBzAyOAOCAQBIAFgAaAByAiAF 

V3 : https://ryanis.cool/cosmos/beta#cm:CnkKGxIIEKBPIAlIgAISA0iAAjgTQMSWMUicg7iobwoWEgUQoFsgCRIDELAvOABA0l5IgICMPAoZEgUQoGcgCRIDELA7OBRArqaKOEibg7SobwoZEgUQoHMgCRIAOChAgqaTkAJIlYmIj7DXARgAQMbQj/grSOiY1qADCj0KKhISEEAgAEDi6obIHUjTg6SP0PoBEg4gAEC1hYyMkFBI2oeERTgAQOSwChgCQP2LhJzwN0ifh6TN4fsDEAMYhiAiCQi0ARCqARiEBzA8OAOCAQcAAGTIAXgASABQYlgKaAByAiAU

V3 MX: https://ryanis.cool/cosmos/beta#cm:CnkKGxIIEKBPIAlIgAISA0iAAjgTQMSWMUicg7iobwoWEgUQoFsgCRIDELAvOABA0l5IgICMPAoZEgUQoGcgCRIDELA7OBRArqaKOEibg7SobwoZEgUQoHMgCRIAOChAgqaTkAJIlYmIj7DXARgAQMbQj/grSOiY1qADCkAKLRISEEAgAEDi6obIHUjTg6SP0PoBEg4gAEC1hYyMkFBI2oeERTgAQIyDkI/AChgCQP2LhJzwN0ifh6TN4fsDGIQgIgkIvgEQvgEYhAcwPIIBBwAAZMgBeABIAFBiWApoAHICICg=

V4 MX from 30 to 25 tenting, lower pinkie, higher thumb, with screw for plate: https://ryanis.cool/cosmos/beta#cm:CngKGxIIEKBPIAlIgAISA0iAAjgTQMSWMUicg7iobwoWEgUQoFsgCRIDELAvOABA0l5IgICMPAoZEgUQoGcgCRIDELA7OBRArqaKOEibg7SobwoYEgUQoHMgCRIAOChAiZqW0AJI24mMu9kBGABAxtCP+CtI5JTH0AIKPQoqEhIQQCAAQOLqhsgdSNODpI/Q+gESDiAAQLeFjIyQUEjah4RFOABAnJQHGAJA/YuEnPA3SJ+HpM3h+wMQAiIJCL4BEL4BGIQHOAKCAQEDSAVYSWADaAByAiAZ

V5, improved spacing, optimized for MOG profile keycaps: https://ryanis.cool/cosmos/beta#cm:CngKGxIIEKBPIAlIgAISA0iAAjgTQMSWMUicg7iobwoWEgUQoFsgCRIDELAvOABA0l5IgICMPAoZEgUQoGcgCRIDELA7OBRArqaKOEibg7SobwoYEgUQoHMgCRIAOChAo+6WgANI24mMu9kBGABAxtCP+CtI5JTH0AIKPwosEhIQQCAAQOLqhsgdSNODpI/Q+gESDiAAQLeFjIyQUEjah4RFOABAwriH4BkYAkD9i4Sc8DdIn4ekzeH7AxACIgwIvgEQvgEYhAcg7Ak4AoIBAQNIBVhJYANoAHICIBk=

V6, back to choc since it is easier to type on. Improved spacing and rounded edges: https://ryanis.cool/cosmos/beta#expert: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
