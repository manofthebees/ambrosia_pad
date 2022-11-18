// Copyright 2022 Jibran Syed (@manofbees)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_DEL  ,  KC_P7,  KC_P8  ,  KC_P9  ,  KC_PSLS,  
        KC_PGUP ,  KC_P4,  KC_P5  ,  KC_P6  ,  KC_PAST,  
        KC_PGDN ,  KC_P1,  KC_P2  ,  KC_P3  ,  KC_PMNS,  
        KC_MUTE ,  KC_P0,  KC_PDOT,  KC_PENT,  KC_CALC   
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise){
    if (index == 1){
        if (clockwise){
            tap_code(KC_VOLU);
        } else{
            tap_code(KC_VOLD);
        }
    }
    else if (index == 0){
        if (clockwise)
        {
            tap_code(KC_MS_WH_UP);
        } else {
            tap_code(KC_MS_WH_DOWN);
        }
    }
    return true;
}
