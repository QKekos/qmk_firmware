#pragma once

#define MAX_CONTEXT_LENGTH 7

// --------------------------------------------------

// Magic dictionary (7 entries):
//   uld    -> uldn't
//   uldn't -> uld've
//   :p     -> pepe
//   pepe   -> pepega
//   :i     -> i'm
//   :i'm   -> i'll
//   :i'll  -> i've

#define MAGIC_MIN_LENGTH 2 // ":p"
#define MAGIC_MAX_LENGTH 6 // "uldn't"
#define MAGIC_DICTIONARY_SIZE 79

static const uint8_t magic_data[MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x47, 0x16, 0x00, 0x08, 0x1E, 0x00, 0x0C, 0x26, 0x00, 0x0F, 0x2C, 0x00, 0x10, 0x35, 0x00, 0x13,
    0x3D, 0x00, 0x17, 0x44, 0x00, 0x00, 0x0F, 0x18, 0x00, 0x80, 0x6E, 0x27, 0x74, 0x00, 0x13, 0x08,
    0x13, 0x00, 0x80, 0x67, 0x61, 0x00, 0x2C, 0x00, 0x80, 0x27, 0x6D, 0x00, 0x0F, 0x34, 0x0C, 0x2C,
    0x00, 0x82, 0x76, 0x65, 0x00, 0x34, 0x0C, 0x2C, 0x00, 0x81, 0x6C, 0x6C, 0x00, 0x2C, 0x00, 0x80,
    0x65, 0x70, 0x65, 0x00, 0x34, 0x11, 0x07, 0x0F, 0x18, 0x00, 0x83, 0x27, 0x76, 0x65, 0x00
};

// --------------------------------------------------

// Repeat dictionary (1 entries):
//   :poss -> possible

#define REPEAT_MIN_LENGTH 5 // ":poss"
#define REPEAT_MAX_LENGTH 5 // ":poss"
#define REPEAT_DICTIONARY_SIZE 12

static const uint8_t repeat_data[REPEAT_DICTIONARY_SIZE] PROGMEM = {
    0x16, 0x16, 0x12, 0x13, 0x2C, 0x00, 0x80, 0x69, 0x62, 0x6C, 0x65, 0x00
};
