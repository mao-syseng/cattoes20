#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        { KC_I,    KC_N,    KC_S,    KC_R    },
        { KC_E,    KC_T,    KC_O,    KC_A    },
        { KC_BSPC, KC_SPC,  KC_NO,   KC_NO   }
    }
};


/*
 * Combos
 *
 * R + S = B
 * N + I = Y
 * T + E = H
 * A + O = L
 * S + N = P
 * O + T = U
 * R + I = G
 * A + E = D
 * R + N = Z
 * S + I = F
 * A + T = Q
 * O + E = C
 * R + T = X
 * O + I = K
 * S + E = V
 * N + A = J
 * R + E = M
 * A + I = W
 */

const uint16_t PROGMEM combo_RS[] = {
    KC_R,
    KC_S,
    COMBO_END
};

const uint16_t PROGMEM combo_NI[] = {
    KC_N,
    KC_I,
    COMBO_END
};

const uint16_t PROGMEM combo_TE[] = {
    KC_T,
    KC_E,
    COMBO_END
};

const uint16_t PROGMEM combo_AO[] = {
    KC_A,
    KC_O,
    COMBO_END
};

const uint16_t PROGMEM combo_SN[] = {
    KC_S,
    KC_N,
    COMBO_END
};

const uint16_t PROGMEM combo_OT[] = {
    KC_O,
    KC_T,
    COMBO_END
};

const uint16_t PROGMEM combo_RI[] = {
    KC_R,
    KC_I,
    COMBO_END
};

const uint16_t PROGMEM combo_AE[] = {
    KC_A,
    KC_E,
    COMBO_END
};

const uint16_t PROGMEM combo_RN[] = {
    KC_R,
    KC_N,
    COMBO_END
};

const uint16_t PROGMEM combo_SI[] = {
    KC_S,
    KC_I,
    COMBO_END
};

const uint16_t PROGMEM combo_AT[] = {
    KC_A,
    KC_T,
    COMBO_END
};

const uint16_t PROGMEM combo_OE[] = {
    KC_O,
    KC_E,
    COMBO_END
};

const uint16_t PROGMEM combo_RT[] = {
    KC_R,
    KC_T,
    COMBO_END
};

const uint16_t PROGMEM combo_OI[] = {
    KC_O,
    KC_I,
    COMBO_END
};

const uint16_t PROGMEM combo_SE[] = {
    KC_S,
    KC_E,
    COMBO_END
};

const uint16_t PROGMEM combo_NA[] = {
    KC_N,
    KC_A,
    COMBO_END
};

const uint16_t PROGMEM combo_RE[] = {
    KC_R,
    KC_E,
    COMBO_END
};

const uint16_t PROGMEM combo_AI[] = {
    KC_A,
    KC_I,
    COMBO_END
};


combo_t key_combos[] = {
    COMBO(combo_RS, KC_B),
    COMBO(combo_NI, KC_Y),
    COMBO(combo_TE, KC_H),
    COMBO(combo_AO, KC_L),
    COMBO(combo_SN, KC_P),
    COMBO(combo_OT, KC_U),
    COMBO(combo_RI, KC_G),
    COMBO(combo_AE, KC_D),
    COMBO(combo_RN, KC_Z),
    COMBO(combo_SI, KC_F),
    COMBO(combo_AT, KC_Q),
    COMBO(combo_OE, KC_C),
    COMBO(combo_RT, KC_X),
    COMBO(combo_OI, KC_K),
    COMBO(combo_SE, KC_V),
    COMBO(combo_NA, KC_J),
    COMBO(combo_RE, KC_M),
    COMBO(combo_AI, KC_W),
};
