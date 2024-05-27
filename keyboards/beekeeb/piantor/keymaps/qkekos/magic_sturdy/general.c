
#include "../__init__.h"

uint16_t magic_keycode_cast(uint16_t keycode, keyrecord_t *record);
uint16_t magic_double_tap_cast(uint16_t keycode, keyrecord_t *record, uint16_t magic_key);

int prev_key_timestamp;
int current_key_timestamp;

bool is_training_mode_active = true;
bool is_hard_mode_active = true;

void enable_magic_training(void) { is_training_mode_active = true; }
void enable_hard_training(void) { is_hard_mode_active = true; }

void toggle_magic_training(void) { is_training_mode_active = !is_training_mode_active; }
void toggle_hard_training(void) { is_hard_mode_active = !is_training_mode_active; }

void sequence_transform_on_missed_rule_user(const st_trie_rule_t *rule) {
    if (!is_training_mode_active) return;

    flick_leds(1.5, 250);
    uprintf("Missed rule! %s -> %s\n", rule->sequence, rule->transform);

    if (is_hard_mode_active) {
        tap_code16(C(KC_BSPC));

        next_record->event.pressed = true;
        process_sequence_transform(C(KC_BSPC), next_record, US_AREP);
    }
}

int sturdy_pr(uint16_t keycode, keyrecord_t *record) {
    if (current_lang != ENG) return PR_IGNORE;

    prev_key_timestamp = current_key_timestamp;
    current_key_timestamp = timer_read();

    keycode = magic_keycode_cast(keycode, record);

    if (!process_sequence_transform(keycode, record, US_AREP))
        return false;

    return PR_IGNORE;
}

uint16_t magic_keycode_cast(uint16_t keycode, keyrecord_t *record) {
    if (highest_layer != STURDY) return KC_ENT;

    switch (keycode) {
        case TH_REP:
            return record->tap.count ? US_REP : keycode;

        case OS_LSFT:
            return KC_ENT;

        case KC_1 ... KC_0:
        case S(KC_1) ... S(KC_0):
        case KC_MINUS ... KC_SLASH:
            return KC_SPC;
    }

    return keycode;
}

void matrix_scan_user(void)
{
    sequence_transform_task();
}
