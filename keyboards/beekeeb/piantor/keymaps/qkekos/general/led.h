
#pragma once
#include "../__init__.h"

void toggle_left_pin(void);
void toggle_right_pin(void);
void toggle_both_pins(void);

void caps_word_set_user(bool active);
bool ld_process_record(uint16_t keycode, keyrecord_t *record, bool *return_value);
