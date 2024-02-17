
#pragma once
#include "../__init__.h"

typedef void (*potential_match_found_cb)(uint16_t, char*, char*);

typedef struct {
    char    *max_completion;
    char    context_string[MAX_CONTEXT_LENGTH];
    uint8_t max_completion_len;
    uint8_t match_context_level;
} potential_compl_result_t;

void check_potential_matches(potential_match_found_cb callback);

void disable_magic_training(void);
void toggle_magic_training(void); 
void enable_magic_training(void); 
bool is_magic_training_on(void);
