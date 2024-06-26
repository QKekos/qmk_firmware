
#include "../__init__.h"
#include "utils.h"

bool is_oneshot_shift_pressed = false;
bool is_oneshot_ctrl_pressed = false;
int current_oneshot_key = KC_NO;

void oneshot_mods_changed_user(uint8_t mods) {
    if (mods & MOD_MASK_SHIFT && current_oneshot_key == OSM(MOD_LSFT)) {
        toggle_left_pin();
        is_oneshot_shift_pressed = true;
    } else if (is_oneshot_shift_pressed && (current_oneshot_key != OSM(MOD_LCTL) || mods == 0)) {
        toggle_left_pin();
        is_oneshot_shift_pressed = false;
    }

    if (mods & MOD_MASK_CTRL && current_oneshot_key == OSM(MOD_LCTL)) {
        toggle_right_pin();
        is_oneshot_ctrl_pressed = true;

        set_oneshot_layer(QWERTY, ONESHOT_START);
    } else if (is_oneshot_ctrl_pressed && (current_oneshot_key != OSM(MOD_LSFT) || mods == 0)) {
        toggle_right_pin();
        is_oneshot_ctrl_pressed = false;

        clear_oneshot_layer_state(ONESHOT_PRESSED);
    }

    current_oneshot_key = KC_NO;
}

int oneshot_pr(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OS_LSFT:
            current_oneshot_key = OSM(MOD_LSFT);

            if (record->event.pressed) {
                if (is_os_shift_held()) {
                    del_oneshot_mods(MOD_MASK_SHIFT);

                    return false;
                }

                if (is_ctrl_held() && !is_os_ctrl_held()) {
                    current_oneshot_key = KC_NO;
                    tap_clear_code(KC_ENT);

                    return false;
                }
            }

            return true;

        case OS_LCTL:
            current_oneshot_key = OSM(MOD_LCTL);

            if (record->event.pressed) {
                if (is_os_ctrl_held()) {
                    del_oneshot_mods(MOD_MASK_CTRL);

                    return false;
                }

                if (is_shift_held() && !is_os_shift_held()) {
                    current_oneshot_key = KC_NO;
                    tap_clear_code(KC_ENT);

                    return false;
                }
            }

            return true;
    }

    return PR_IGNORE;
}
