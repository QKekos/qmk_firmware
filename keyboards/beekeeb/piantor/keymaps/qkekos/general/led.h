
#pragma once
#include "../__init__.h"

void toggle_left_pin(void);
void toggle_right_pin(void);
void toggle_both_pins(void);

void caps_word_set_user(bool active);
int led_pr(uint16_t keycode, keyrecord_t *record);
