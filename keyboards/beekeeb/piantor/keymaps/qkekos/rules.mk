
mkfile_dir := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

all: st_build format_combos

st_build:
	python3 $(mkfile_dir)/sequence_transform/generator/sequence_transform_data.py

format_combos:
	python3 $(mkfile_dir)/format_combos.py -p $(mkfile_dir)

include $(mkfile_dir)/sequence_transform/rules.mk

AUTOCORRECT_ENABLE = yes

KEY_LOCK_ENABLE = yes
NKRO_ENABLE = yes
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
DEFERRED_EXEC_ENABLE = yes
CONSOLE_ENABLE = yes
CAPS_WORD_ENABLE = yes
REPEAT_KEY_ENABLE = yes
KEY_LOCK_ENABLE = yes
TAP_DANCE_ENABLE = yes

VPATH += keyboards/gboards

SRC += sequence_transform/sequence_transform.c
SRC += sequence_transform/trie.c
SRC += sequence_transform/keybuffer.c
SRC += sequence_transform/utils.c
SRC += sequence_transform/cursor.c
SRC += sequence_transform/key_stack.c

SRC += magic_sturdy/general.c
SRC += combos/general.c

SRC += general/utils.c
SRC += general/caps_word.c
SRC += general/led.c
SRC += general/oneshot.c
SRC += general/swapper.c
SRC += general/custom_keys.c
SRC += general/lower_layer.c
SRC += general/arrows.c
SRC += general/window_activator.c
SRC += general/timestamps.c

SRC += localization/language_swapper.c
SRC += localization/lang_independant.c

SRC += overrides/general.c

SRC += tap_dances/general.c
SRC += tap_dances/multiaction_core.c
SRC += tap_dances/sequences.c

SRC += tap_holds/mod_layer_taps.c
SRC += tap_holds/get_hold.c
SRC += tap_holds/general.c
SRC += tap_holds/interceptions.c

SRC += typing_modes/case_modes.c
SRC += typing_modes/fence.c
