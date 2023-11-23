
#pragma once
#include "../__init__.h"

bool is_shift_held_core(int mods);
bool is_ctrl_held_core(int mods);
bool is_gui_held_core(int mods);
bool is_alt_held_core(int mods);

bool is_shift_held(void);
bool is_ctrl_held(void);
bool is_gui_held(void);
bool is_alt_held(void);

bool is_os_shift_held(void);
bool is_os_ctrl_held(void);
bool is_os_gui_held(void);
bool is_os_alt_held(void);

bool is_alpha_layer_on(void);

#define execute_without_mods(x) \
    { \
        int mod_state = get_mods(); \
        clear_mods(); \
        { x; } \
        set_mods(mod_state); \
    }

#define tap_clear_code(code) execute_without_mods(tap_code16(code))
