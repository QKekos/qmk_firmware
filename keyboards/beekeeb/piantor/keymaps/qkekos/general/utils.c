
#include "../__init__.h"

bool is_shift_held_core(int mods) { return mods & MOD_BIT(KC_LSFT); }
bool is_ctrl_held_core(int mods)  { return mods & MOD_BIT(KC_LCTL); }
bool is_gui_held_core(int mods)   { return mods & MOD_BIT(KC_LGUI); }
bool is_alt_held_core(int mods)   { return mods & MOD_BIT(KC_LALT); }

bool is_shift_held(void) { return is_shift_held_core(get_mods()); }
bool is_ctrl_held(void)  { return is_ctrl_held_core(get_mods());  }
bool is_gui_held(void)   { return is_gui_held_core(get_mods());   }
bool is_alt_held(void)   { return is_alt_held_core(get_mods());   }

bool is_os_shift_held(void) { return is_shift_held_core(get_oneshot_mods()); }
bool is_os_ctrl_held(void)  { return is_ctrl_held_core(get_oneshot_mods());  }
bool is_os_gui_held(void)   { return is_gui_held_core(get_oneshot_mods());   }
bool is_os_alt_held(void)   { return is_alt_held_core(get_oneshot_mods());   }

bool is_alpha_layer_on(void) {
    return highest_layer <= QWERTY;
}

uint16_t normalize_keycode(uint16_t keycode) {
    if (IS_QK_MOD_TAP(keycode))   return QK_MOD_TAP_GET_TAP_KEYCODE(keycode);
    if (IS_QK_LAYER_TAP(keycode)) return QK_LAYER_TAP_GET_TAP_KEYCODE(keycode);

    return keycode;
}

void multi_tap(uint16_t keycode, int count) {
    for (int i = 0; i < count; i += 1)
        tap_code16(keycode);
}

const char* to_upper_case(const char *str) {
    static char result_string[MAX_STR_LEN];
    int len = strlen(str);

    if (len >= MAX_STR_LEN) {
        printf("Input string is too long\n");
        return "\0";
    }

    for (int i = 0; i < len; i++) {
        if (is_lowercase_letter(str[i])) result_string[i] = str[i] - 32;
        else result_string[i] = str[i];
    }

    result_string[len] = '\0';
    return result_string;
}

uint16_t char_to_keycode(char symbol) {
    return pgm_read_byte(&ascii_to_keycode_lut[(uint8_t)symbol]);
}

char keycode_to_char(uint16_t code) {
	switch (code) {
        case KC_SPACE: return ' ';
        case KC_QUOTE: return '\'';
	}

	return code - KC_A + 'a';
}

bool is_string_ascii(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') continue;
    
        if (!('a' <= str[i] && str[i] <= 'z'))
            return false; 
    }

    return true;
}

bool is_uppercase_letter(char symbol) { return 'A' <= symbol && symbol <= 'Z'; }
bool is_lowercase_letter(char symbol) { return 'a' <= symbol && symbol <= 'z'; }
