
#pragma once
#include "../__init__.h"

enum pr_response sturdy_pr(uint16_t, keyrecord_t*);
enum pr_response process_double_tap(uint16_t, keyrecord_t*, uint16_t);

void record_send_string(char*);
void record_tap_code(uint8_t);
