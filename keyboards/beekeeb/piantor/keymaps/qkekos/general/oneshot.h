
#pragma once
#include "../__init__.h"

void oneshot_mods_changed_user(uint8_t mods);
bool os_process_record(uint16_t keycode, keyrecord_t *record, bool *return_value);
