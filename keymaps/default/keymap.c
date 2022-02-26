#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

LAYOUT(
    KC_MEDIA_SELECT, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_AUDIO_MUTE),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
      tap_code(KC_AUDIO_VOL_UP);
    } else {
      tap_code(KC_AUDIO_VOL_DOWN);
    }
    return true;
}