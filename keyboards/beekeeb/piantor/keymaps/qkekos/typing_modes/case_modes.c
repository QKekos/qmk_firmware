
#include "../__init__.h"

bool is_alt_case_active = false;
uint16_t case_separator;
int case_sep_len;

void toggle_alt_case_with(uint16_t separator, int sep_len) {
    is_alt_case_active = !is_alt_case_active;
    case_separator = separator;
    case_sep_len = sep_len;
    toggle_right_pin();
}

bool alt_case_pr(uint16_t keycode, keyrecord_t *record, bool *return_value) {
    *return_value = false;

    if (!(record->event.pressed && is_alt_case_active)) return false;
    if (!(keycode == TH_NUM && record->tap.count)) return false;

    if (queue(-2) == TH_NUM) {
        is_alt_case_active = false;
        toggle_right_pin();
        for (int i = 0; i < case_sep_len; i += 1) tap_code16(KC_BSPC);
        return false;
    }

    if (case_separator == KC_LSFT) add_oneshot_mods(MOD_BIT(KC_LSFT));
    else tap_code16(case_separator);

    return true;
}
