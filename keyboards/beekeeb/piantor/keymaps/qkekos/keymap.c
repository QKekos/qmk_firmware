
#include "__init__.h"
#include "g/keymap_combo.h"

bool (*process_records[])(uint16_t, keyrecord_t*, bool*) = {
    mg_process_record,
    sw_process_record,
    os_process_record,
    mlt_process_record,
    ck_process_record,
    in_process_record,
    ld_process_record,
    td_process_record,
    NULL
};

void user_sync_a_slave_handler(
    uint8_t in_buflen, const void* in_data,
    uint8_t out_buflen, void* out_data
) { toggle_left_pin(); }

void keyboard_pre_init_user(void) {
    setPinOutput(GP25);

    transaction_register_rpc(USER_SYNC_A, user_sync_a_slave_handler);
    lang_independant_init();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    #ifdef CONSOLE_ENABLE
        const bool is_combo = record->event.type == COMBO_EVENT;
        uprintf("0x%04X,%u,%u,%u,%d,0x%02X,0x%02X,%u\n",
             keycode,
             is_combo ? 254 : record->event.key.row,
             is_combo ? 254 : record->event.key.col,
             get_highest_layer(layer_state),
             record->event.pressed,
             get_mods(),
             get_oneshot_mods(),
             record->tap.count
             );
    #endif

    bool return_value;

    for (int i = 0; process_records[i] != NULL; i++) {
        if (process_records[i](keycode, record, &return_value))
            return return_value;
    }

    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [STURDY] = LAYOUT_split_3x6_3(
        KC_CAPS,   KC_V,      KC_M,      KC_L,      KC_C,      KC_P,    /**/ KC_B,      US_AREP,   KC_O,      KC_U,      KC_Q,      KC_NO,
        US_CWRD,   LHR_S,     LHR_T,     LHR_R,     MHR_D,     KC_Y,    /**/ KC_F,      MHR_N,     LHR_A,     LHR_E,     HR_I,      KC_QUOT,
        KC_DEL,    KC_X,      KC_K,      KC_J,      KC_G,      KC_W,    /**/ KC_Z,      KC_H,      KC_COMM,   KC_DOT,    KC_SLSH,   TD_LOCK,
                                         TH_LNAV,   TH_NUM,    OS_LSFT, /**/ US_REP,    TH_NAV,    TH_FUNC
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [QWERTY] = LAYOUT_split_3x6_3(
        KC_CAPS,   KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,    /**/ KC_Y,      KC_U,      KC_I,      KC_O,     KC_P,       KC_LBRC,
        US_CWRD,   LHR_A,     LHR_S,     LHR_D,     MHR_F,     KC_G,    /**/ KC_H,      MHR_J,     LHR_K,     LHR_L,    HR_SCLN,    KC_QUOT,
        KC_DEL,    KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,    /**/ KC_N,      KC_M,      KC_COMM,   KC_DOT,   KC_SLSH,    KC_RBRC,
                                         TH_LNAV,   TH_NUM,    OS_LSFT, /**/ US_REP,    TH_NAV,    TH_FUNC
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [HOTKEY] = LAYOUT_split_3x6_3(
        KC_G,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,    /**/ KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_NO,
        KC_T,      HHR_A,     HHR_S,     HHR_D,     HHR_F,     KC_D,    /**/ KC_H,      HHR_J,     HHR_K,     HHR_L,     HR_SCLN,   KC_NO,
        KC_NO,     KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,    /**/ KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,
                                         TH_LNAV,   TH_NUM,    OS_LSFT, /**/ US_REP,    TH_NAV,    TH_FUNC
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [GAME] = LAYOUT_split_3x6_3(
        KC_TAB,    KC_G,      KC_Q,      KC_W,      KC_E,      KC_R,    /**/ KC_F3,     KC_P7,     KC_P8,     KC_P9,     KC_F6,     KC_F9,
        KC_T,      KC_LSFT,   KC_A,      KC_S,      KC_D,      KC_F,    /**/ KC_F2,     KC_P4,     KC_P5,     KC_P6,     HR_F5,     KC_F8,
        KC_B,      KC_LCTL,   KC_Z,      KC_X,      KC_C,      KC_V,    /**/ KC_M,      KC_P1,     KC_P2,     KC_P3,     KC_F4,     KC_F7,
                                         KC_ESC,    KC_SPC,    KC_ENT,  /**/ KC_Y,      KC_BSPC,   KC_P0
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [NUM] = LAYOUT_split_3x6_3(
        HK_GSRC,   KC_TAB,    KC_LEFT,   KC_UP,     KC_RGHT,   HK_SWAP, /**/ KC_EQL,    KC_7,      KC_8,      KC_9,      TG_NUM,    KC_NO,
        KC_ENT,    HR_RMLN,   HR_SAVE,   HR_CPLN,   HR_SRCH,   KC_F3,   /**/ KC_PLUS,   KC_4,      KC_5,      KC_6,      KC_DOT,    KC_NO,
        HK_SALL,   HK_UNDO,   KC_COMM,   KC_SPC,    HK_PSTE,   KC_ESC,  /**/ KC_MINS,   KC_1,      KC_2,      KC_3,      KC_SLSH,   KC_NO,
                                         HK_RFAL,   TD_NUM,    OS_LSFT, /**/ KC_ENT,    TH_NAV,    KC_0
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [FUNCTION] = LAYOUT_split_3x6_3(
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_F7,     KC_F8,     KC_F9,     KC_F11,    KC_NO,
        KC_NO,     OS_LGUI,   OS_LALT,   OS_LCTL,   OS_LSFT,   KC_NO,   /**/ KC_NO,     KC_F4,     KC_F5,     KC_F6,     KC_F12,    KC_NO,
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_F1,     KC_F2,     KC_F3,     KC_F10,    KC_NO,
                                         MO_PAD,    MO_PAD,    MO_PAD,  /**/ KC_NO,     KC_NO,     KC_NO
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [NAV] = LAYOUT_split_3x6_3(
        HK_GSRC,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   HK_SWAP, /**/ KC_PGUP,   KC_HOME,   KC_UP,     KC_END,    US_CLER,   KC_SPC,
        HK_SLXT,   HR_RMLN,   HR_SAVE,   HR_CPLN,   HR_SRCH,   KC_F3,   /**/ KC_PGDN,   KC_LEFT,   KC_DOWN,   KC_RGHT,   HR_DEL,    KC_NO,
        HK_SALL,   HK_UNDO,   HK_CUT,    HK_COPY,   HK_PSTE,   KC_ESC,  /**/ KC_ESC,    KC_BSPC,   KC_ENT,    KC_TAB,    HK_ALTB,   HK_COMM,
                                         KC_TRNS,   TH_LNUM,   KC_TRNS, /**/ KC_TRNS,   TG_NAV,    HK_RMWR
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [ALT_NAV] = LAYOUT_split_3x6_3(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ KC_TRNS,   KC_TRNS,   US_3ARU,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ KC_TRNS,   US_3ARL,   US_3ARD,   US_3ARR,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
                                         KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [NAV_LEFT] = LAYOUT_split_3x6_3(
        KC_SPC,    KC_TAB,    KC_HOME,   KC_UP,     KC_END,    HK_SWAP, /**/ KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_ENT,    HK_RMLN,   KC_LEFT,   KC_DOWN,   KC_RGHT,   KC_BSPC, /**/ KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        HK_SALL,   HK_UNDO,   HK_CUT,    HK_COPY,   HK_PSTE,   KC_ESC,  /**/ KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
                                         KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ MO_PAD,    MO_PAD,    MO_PAD
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [NUMPAD] = LAYOUT_split_3x6_3(
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_PSLS,   KC_P7,     KC_P8,     KC_P9,     KC_NO,     KC_NO,
        KC_NO,     KC_PMNS,   KC_LALT,   KC_LCTL,   KC_LSFT,   KC_NO,   /**/ KC_PAST,   KC_P4,     KC_P5,     KC_P6,     KC_PPLS,   KC_NO,
        KC_NO,     KC_NO,     KC_COMM,   KC_SPC,    KC_NO,     KC_NO,   /**/ KC_P0,     KC_P1,     KC_P2,     KC_P3,     KC_NO,     KC_NO,
                                         KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [MEDIA] = LAYOUT_split_3x6_3(
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_VLUP, /**/ KC_NO,     KC_NO,     KC_MS_U,   KC_NO,     US_LGTG,   TG_GAME,
        KC_NO,     KC_NO,     KC_LALT,   KC_LCTL,   KC_LSFT,   KC_VLDW, /**/ KC_NO,     KC_MS_L,   KC_MS_D,   KC_MS_R,   KC_NO,     KC_SCRL,
        HK_SALL,   HK_UNDO,   HK_CUT,    HK_COPY,   HK_PSTE,   KC_MPLY, /**/ KC_ESC,    KC_NO,     KC_VLUP,   KC_VLDW,   QK_BOOT,   KC_NO,
                                         KC_NO,     KC_NO,     KC_NO,   /**/ KC_BTN3,   KC_BTN1,   KC_BTN2
    ),
// -----------------------------------------------------------------------------------------------------------------------------------------
    [LOCK] = LAYOUT_split_3x6_3(
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     TD_LOCK,
                                         KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO
    )
// -----------------------------------------------------------------------------------------------------------------------------------------

//    [TRANSPARENT] = LAYOUT_split_3x6_3(
//        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
//        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
//        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
//                                         KC_TRNS,   KC_TRNS,   KC_TRNS, /**/ KC_TRNS,   KC_TRNS,   KC_TRNS
//    )
//
//    [EMPTY] = LAYOUT_split_3x6_3(
//        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
//        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
//        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
//                                         KC_NO,     KC_NO,     KC_NO,   /**/ KC_NO,     KC_NO,     KC_NO
//    )
};

int combo_actions_keys[][2] = {
    {CM_B_AREP_EQL, TD_EXLM},
    {CM_AREP_O_EQL, TD_EQL},
    {CM_OU_DQT, TD_DQT},
    {CM_FN_BSLS, TD_BSLS},
    {CM_H_CM_UNDS, TD_UNDS},
    {CM_CM_DT_COL, TD_COLN},
    {CM_AREP_OU_ARR, TD_ARR},
    {CM_H_CM_DT_DTS, TD_ECLP},
    {CM_BSPC_ENT_TAP_DTS, TD_ECLP},
    {-1, KC_NO},
};

void process_combo_event_user(uint16_t combo_index, bool pressed) {
    int keycode = get_combo_action(combo_index);

    if (keycode) {
        next_keycode = keycode;

        action_tapping_process((keyrecord_t) {
            .event   = MAKE_COMBOEVENT(pressed),
            .keycode = keycode
        });
    }
}

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {
        case CM_TRD_SWLG:
        case CM_LC_RPLY:
            return is_alpha_layer_on();

        case CM_LF_UP_PRTB:
        case CM_UP_RG_NXTB:
            return !is_alpha_layer_on();

        case CM_LF_DW_SWAP:
        case CM_DW_RG_SLXT:
            return get_highest_layer(layer_state) == NAV;

        case CM_LF_DW_SLXT:
        case CM_DW_RG_SWAP:
            return get_highest_layer(layer_state) == NAV_LEFT;

        case CM_45_SWAP:
            return get_highest_layer(layer_state) == NUM;
    }

    if (get_highest_layer(layer_state) == GAME) {
        switch (combo_index) {
            case CM_KP_123_ALTB:
            case CM_KP_456_SWAP:
            case CM_KP_3_F5_MUTE:
                return true;
        }
    }

    return get_highest_layer(layer_state) != GAME;
}
