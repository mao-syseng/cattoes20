# Pico Chord 10

A custom 10-key chorded keyboard based on the Raspberry Pi Pico H / RP2040.


## QMK folder structure
```
qmk_firmware/
└── keyboards/
    └── pico_chord10/
        ├── keyboard.json
        ├── rules.mk
        ├── readme.md
        └── keymaps/
            └── default/
                └── keymap.c
```

## QMK Build
`qmk compile -kb pico_chord10 -km default`


## Hardware

- Raspberry Pi Pico H
- 10 switches
- Each switch connected directly between a GPIO and GND
- No matrix diodes required

## GPIO assignment

| Key | GPIO |
|-----|------|
| 1 | GP1 |
| 2 | GP2 |
| 3 | GP3 |
| 4 | GP4 |
| 5 | GP5 |
| 6 | GP6 |
| 7 | GP7 |
| 8 | GP8 |
| 9 | GP9 |
| 10 | GP10 |

## Layout

    I  N  S  R
    E  T  O  A
    BSPC SPC

## Combos

    R + S = B
    N + I = Y
    T + E = H
    A + O = L
    S + N = P
    O + T = U
    R + I = G
    A + E = D
    R + N = Z
    S + I = F
    A + T = Q
    O + E = C
    R + T = X
    O + I = K
    S + E = V
    N + A = J
    R + E = M
    A + I = W
