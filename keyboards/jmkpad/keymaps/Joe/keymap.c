// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum number_to_string{
    NUM_10 = SAFE_RANGE,
    NUM_11,
    NUM_12,
    NUM_13,
    NUM_14,
    NUM_15,
    NUM_16,
    NUM_17,
    NUM_18,
    NUM_19,
    NUM_20
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_P1,   KC_P2,   KC_P3,   KC_P4,
        KC_P5,   KC_P6,   KC_P7,   KC_P8, 
        KC_P9,   NUM_10,   NUM_11,   NUM_12, 
        NUM_13,   NUM_14, NUM_15, NUM_16, 
        NUM_17,   NUM_18, NUM_19, NUM_20 
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(!record->event.pressed){
        return true;
    }

    switch (keycode) {
        case NUM_10: SEND_STRING("10"); return false;
        case NUM_11: SEND_STRING("11"); return false;
        case NUM_12: SEND_STRING("12"); return false;
        case NUM_13: SEND_STRING("13"); return false;
        case NUM_14: SEND_STRING("14"); return false;
        case NUM_15: SEND_STRING("15"); return false;
        case NUM_16: SEND_STRING("16"); return false;
        case NUM_17: SEND_STRING("17"); return false;
        case NUM_18: SEND_STRING("18"); return false;
        case NUM_19: SEND_STRING("19"); return false;
        case NUM_20: SEND_STRING("20"); return false;
    }

    return true;    

}
