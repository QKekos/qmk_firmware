
#include "../__init__.h"

int proceed_mlt(uint16_t keycode, keyrecord_t *record) {
    if (!record->tap.count) {
        if (record->event.pressed) register_code16(keycode);
        else unregister_code16(keycode);
    }

    return PR_IGNORE;
}

int mod_layer_taps_pr(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GLT_S:
            return proceed_mlt(KC_LGUI, record);

        case ALT_T:
        case ALT_E:
            return proceed_mlt(KC_LALT, record);

        case CLT_R:
        case CLT_A:
            return proceed_mlt(KC_LCTL, record);
    }

    return PR_IGNORE;
}
