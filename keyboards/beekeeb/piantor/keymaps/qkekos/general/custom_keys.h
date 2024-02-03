
#pragma once
#include "../__init__.h"

enum blender_keycode {
    US_REP = SAFE_RANGE,
    US_AREP,
    US_3ARR,
    US_3ARL,
    US_3ARU,
    US_3ARD,
    US_LGTG,
    US_QTLY,
    US_SLSR,
    US_CLER,
    US_CWRD,
    US_FNCE,
    US_SNKE,
    US_CAML
};

bool custom_keys_pr(uint16_t keycode, keyrecord_t *record, bool *return_value);
