#pragma once

#define MAX_CONTEXT_LENGTH 10

static const uint16_t trie_symbols[] = {55};
#define TRIE_SYMBOLS_COUNT 1

// --------------------------------------------------

// Magic dictionary (96 entries):
//   oc       -> ock
//   uc       -> uck
//   ac       -> ack
//   ic       -> ick
//   ec       -> eck
//   democrac -> democracy
//   supremac -> supremacy
//   accurac  -> accuracy
//   pharmac  -> pharmacy
//   never    -> nevertheless
//   polic    -> policy
//   →rec     -> recycle
//   than     -> thanks
//   →ar      -> around
//   →or      -> order
//   →ti      -> time
//   →ed      -> edge
//   →se      -> seen
//   →al      -> alr
//   →us      -> use
//   hil      -> hilarious
//   ess      -> essential
//   alt      -> although
//   any      -> anything
//   pos      -> position
//   cof      -> confused
//   var      -> various
//   ser      -> serious
//   pro      -> problem
//   key      -> keycode
//   bud      -> budget
//   col      -> column
//   tho      -> though
//   num      -> number
//   rid      -> ridge
//   red      -> redge
//   jud      -> judge
//   led      -> ledge
//   vac      -> vacy
//   gac      -> gacy
//   tex      -> text
//   nex      -> next
//   →t       -> that
//   →e       -> e.g.
//   di       -> dictionary
//   pr       -> previous
//   ex       -> example
//   re       -> reorder
//   pe       -> people
//   pu       -> public
//   up       -> update
//   te       -> tement
//   sy       -> system
//   va       -> value
//   ot       -> other
//   co       -> could
//   ag       -> again
//   la       -> large
//   pa       -> page
//   mo       -> most
//   mu       -> must
//   vi       -> view
//   so       -> some
//   do       -> doub
//   li       -> list
//   be       -> been
//   pl       -> ply
//   mp       -> mpl
//   ma       -> mao
//   we       -> web
//   wa       -> way
//   cy       -> cyc
//   da       -> day
//   →        -> the
//   t        -> tment
//   w        -> which
//   m        -> ment
//   j        -> just
//   f        -> fine
//   i        -> ion
//   v        -> ver
//   q        -> que
//   s        -> sk
//   r        -> rl
//   d        -> dy
//   e        -> eu
//   a        -> ab
//   l        -> lk
//   c        -> cy
//   p        -> py
//   y        -> yp
//   k        -> ks
//   g        -> gy
//   o        -> oa
//   u        -> ue
//   x        -> xt

#define MAGIC_MIN_LENGTH 1 // "→"
#define MAGIC_MAX_LENGTH 8 // "democrac"
#define MAGIC_DICTIONARY_SIZE 813

static const uint8_t magic_data[MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x44, 0x49, 0x00, 0x06, 0x76, 0x00, 0x07, 0xE7, 0x00, 0x08, 0x20, 0x01, 0x09, 0x5E, 0x01, 0x0A,
    0x6E, 0x01, 0x0C, 0x78, 0x01, 0x0D, 0xA1, 0x01, 0x0E, 0xA6, 0x01, 0x0F, 0xA9, 0x01, 0x10, 0xD2,
    0x01, 0x11, 0xDF, 0x01, 0x12, 0xE7, 0x01, 0x13, 0x1D, 0x02, 0x14, 0x30, 0x02, 0x15, 0x34, 0x02,
    0x16, 0x7F, 0x02, 0x17, 0xA4, 0x02, 0x18, 0xC7, 0x02, 0x19, 0xDB, 0x02, 0x1A, 0xDF, 0x02, 0x1B,
    0xE5, 0x02, 0x1C, 0xFE, 0x02, 0x2C, 0x28, 0x03, 0x00, 0xC0, 0x62, 0x00, 0x47, 0x5F, 0x00, 0x0F,
    0x62, 0x00, 0x10, 0x67, 0x00, 0x13, 0x6A, 0x00, 0x19, 0x6E, 0x00, 0x1A, 0x73, 0x00, 0x00, 0x80,
    0x79, 0x00, 0x80, 0x72, 0x67, 0x65, 0x00, 0x80, 0x6F, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x6C,
    0x75, 0x65, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x79, 0x00, 0x44, 0x89, 0x00, 0x08, 0xCB, 0x00, 0x0C,
    0xD7, 0x00, 0x12, 0xE1, 0x00, 0x18, 0xE4, 0x00, 0x00, 0xC0, 0x6B, 0x00, 0x4A, 0x99, 0x00, 0x10,
    0x9C, 0x00, 0x15, 0xB2, 0x00, 0x19, 0xC8, 0x00, 0x00, 0x80, 0x79, 0x00, 0x48, 0xA3, 0x00, 0x15,
    0xAB, 0x00, 0x00, 0x15, 0x13, 0x18, 0x16, 0x00, 0x80, 0x79, 0x00, 0x04, 0x0B, 0x13, 0x00, 0x80,
    0x79, 0x00, 0x46, 0xB9, 0x00, 0x18, 0xC1, 0x00, 0x00, 0x12, 0x10, 0x08, 0x07, 0x00, 0x80, 0x79,
    0x00, 0x06, 0x06, 0x04, 0x00, 0x80, 0x79, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x6B, 0x00, 0x15, 0x2C,
    0x00, 0x80, 0x79, 0x63, 0x6C, 0x65, 0x00, 0xC0, 0x6B, 0x00, 0x0F, 0x12, 0x13, 0x00, 0x80, 0x79,
    0x00, 0x80, 0x6B, 0x00, 0x80, 0x6B, 0x00, 0xC0, 0x79, 0x00, 0x48, 0xF4, 0x00, 0x0C, 0x0A, 0x01,
    0x18, 0x10, 0x01, 0x00, 0x4F, 0xFE, 0x00, 0x15, 0x02, 0x01, 0x2C, 0x06, 0x01, 0x00, 0x80, 0x67,
    0x65, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x67, 0x65, 0x00, 0x15, 0x00, 0x80, 0x67, 0x65, 0x00,
    0x45, 0x17, 0x01, 0x0D, 0x1C, 0x01, 0x00, 0x80, 0x67, 0x65, 0x74, 0x00, 0x80, 0x67, 0x65, 0x00,
    0xC0, 0x75, 0x00, 0x45, 0x39, 0x01, 0x13, 0x3D, 0x01, 0x15, 0x43, 0x01, 0x16, 0x4A, 0x01, 0x17,
    0x50, 0x01, 0x1A, 0x56, 0x01, 0x2C, 0x59, 0x01, 0x00, 0x80, 0x65, 0x6E, 0x00, 0x80, 0x6F, 0x70,
    0x6C, 0x65, 0x00, 0x80, 0x6F, 0x72, 0x64, 0x65, 0x72, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x6E, 0x00,
    0x80, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x80, 0x62, 0x00, 0x80, 0x2E, 0x67, 0x2E, 0x00, 0xC0, 0x69,
    0x6E, 0x65, 0x00, 0x12, 0x06, 0x00, 0x81, 0x6E, 0x66, 0x75, 0x73, 0x65, 0x64, 0x00, 0xC0, 0x79,
    0x00, 0x04, 0x00, 0x80, 0x61, 0x69, 0x6E, 0x00, 0xC0, 0x6F, 0x6E, 0x00, 0x47, 0x89, 0x01, 0x0F,
    0x93, 0x01, 0x17, 0x97, 0x01, 0x19, 0x9D, 0x01, 0x00, 0x80, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x61,
    0x72, 0x79, 0x00, 0x80, 0x73, 0x74, 0x00, 0x2C, 0x00, 0x80, 0x6D, 0x65, 0x00, 0x80, 0x65, 0x77,
    0x00, 0x80, 0x75, 0x73, 0x74, 0x00, 0x80, 0x73, 0x00, 0xC0, 0x6B, 0x00, 0x44, 0xB9, 0x01, 0x0C,
    0xBE, 0x01, 0x12, 0xC8, 0x01, 0x13, 0xCF, 0x01, 0x00, 0x2C, 0x00, 0x80, 0x72, 0x00, 0x0B, 0x00,
    0x80, 0x61, 0x72, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x06, 0x00, 0x80, 0x75, 0x6D, 0x6E, 0x00, 0x80,
    0x79, 0x00, 0xC0, 0x65, 0x6E, 0x74, 0x00, 0x18, 0x11, 0x00, 0x80, 0x62, 0x65, 0x72, 0x00, 0x04,
    0x0B, 0x17, 0x00, 0x80, 0x6B, 0x73, 0x00, 0xC0, 0x61, 0x00, 0x46, 0xFD, 0x01, 0x07, 0x02, 0x02,
    0x0B, 0x06, 0x02, 0x10, 0x0D, 0x02, 0x15, 0x11, 0x02, 0x16, 0x19, 0x02, 0x00, 0x80, 0x75, 0x6C,
    0x64, 0x00, 0x80, 0x75, 0x62, 0x00, 0x17, 0x00, 0x80, 0x75, 0x67, 0x68, 0x00, 0x80, 0x73, 0x74,
    0x00, 0x13, 0x00, 0x80, 0x62, 0x6C, 0x65, 0x6D, 0x00, 0x80, 0x6D, 0x65, 0x00, 0xC0, 0x79, 0x00,
    0x50, 0x27, 0x02, 0x18, 0x2A, 0x02, 0x00, 0x80, 0x6C, 0x00, 0x80, 0x64, 0x61, 0x74, 0x65, 0x00,
    0x80, 0x75, 0x65, 0x00, 0xC0, 0x6C, 0x00, 0x44, 0x44, 0x02, 0x08, 0x57, 0x02, 0x12, 0x70, 0x02,
    0x13, 0x77, 0x02, 0x00, 0x59, 0x4B, 0x02, 0x2C, 0x51, 0x02, 0x00, 0x80, 0x69, 0x6F, 0x75, 0x73,
    0x00, 0x80, 0x6F, 0x75, 0x6E, 0x64, 0x00, 0x56, 0x5E, 0x02, 0x19, 0x64, 0x02, 0x00, 0x80, 0x69,
    0x6F, 0x75, 0x73, 0x00, 0x08, 0x11, 0x00, 0x80, 0x74, 0x68, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x00,
    0x2C, 0x00, 0x80, 0x64, 0x65, 0x72, 0x00, 0x80, 0x65, 0x76, 0x69, 0x6F, 0x75, 0x73, 0x00, 0xC0,
    0x6B, 0x00, 0x52, 0x8C, 0x02, 0x16, 0x95, 0x02, 0x18, 0x9F, 0x02, 0x00, 0x13, 0x00, 0x80, 0x69,
    0x74, 0x69, 0x6F, 0x6E, 0x00, 0x08, 0x00, 0x80, 0x65, 0x6E, 0x74, 0x69, 0x61, 0x6C, 0x00, 0x2C,
    0x00, 0x80, 0x65, 0x00, 0xC0, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x4F, 0xB4, 0x02, 0x12, 0xBD, 0x02,
    0x2C, 0xC2, 0x02, 0x00, 0x04, 0x00, 0x80, 0x68, 0x6F, 0x75, 0x67, 0x68, 0x00, 0x80, 0x68, 0x65,
    0x72, 0x00, 0x80, 0x68, 0x61, 0x74, 0x00, 0xC0, 0x65, 0x00, 0x50, 0xD1, 0x02, 0x13, 0xD5, 0x02,
    0x00, 0x80, 0x73, 0x74, 0x00, 0x80, 0x62, 0x6C, 0x69, 0x63, 0x00, 0x80, 0x65, 0x72, 0x00, 0x80,
    0x68, 0x69, 0x63, 0x68, 0x00, 0xC0, 0x74, 0x00, 0x08, 0x00, 0xC0, 0x61, 0x6D, 0x70, 0x6C, 0x65,
    0x00, 0x51, 0xF8, 0x02, 0x17, 0xFB, 0x02, 0x00, 0x80, 0x74, 0x00, 0x80, 0x74, 0x00, 0xC0, 0x70,
    0x00, 0x46, 0x0E, 0x03, 0x08, 0x11, 0x03, 0x11, 0x19, 0x03, 0x16, 0x22, 0x03, 0x00, 0x80, 0x63,
    0x00, 0x0E, 0x00, 0x80, 0x63, 0x6F, 0x64, 0x65, 0x00, 0x04, 0x00, 0x80, 0x74, 0x68, 0x69, 0x6E,
    0x67, 0x00, 0x80, 0x73, 0x74, 0x65, 0x6D, 0x00, 0x80, 0x74, 0x68, 0x65, 0x00
};

// --------------------------------------------------

// Repeat dictionary (54 entries):
//   should    -> shouldn't
//   →sti      -> still
//   some      -> something
//   impl      -> implement
//   poss      -> possible
//   hand      -> handy
//   →vi       -> vision
//   →ab       -> about
//   imp       -> impossible
//   uni       -> university
//   dif       -> difficult
//   inc       -> increase
//   int       -> interest
//   ins       -> instead
//   def       -> default
//   dev       -> develop
//   awk       -> awkward
//   cap       -> capable
//   pro       -> program
//   how       -> however
//   wit       -> without
//   any       -> anyway
//   cou       -> course
//   nat       -> nation
//   tio       -> tional
//   min       -> minute
//   →b        -> because
//   →t        -> than
//   →i        -> ii
//   fu        -> function
//   ht        -> https://
//   sc        -> school
//   sy        -> symbol
//   mu        -> music
//   ba        -> basic
//   ex        -> exact
//   fr        -> from
//   ma        -> make
//   la        -> last
//   .         -> .com
//   →         -> for
//   w         -> would
//   j         -> join
//   x         -> xes
//   i         -> ing
//   y         -> you
//   q         -> qui
//   v         -> ver
//   implement -> implementation
//   function  -> functionality
//   develop   -> development
//   basic     -> basically
//   exact     -> exactly
//   than      -> thank

#define REPEAT_MIN_LENGTH 1 // "."
#define REPEAT_MAX_LENGTH 9 // "implement"
#define REPEAT_DICTIONARY_SIZE 603

static const uint8_t repeat_data[REPEAT_DICTIONARY_SIZE] PROGMEM = {
    0x77, 0x49, 0x00, 0x04, 0x4E, 0x00, 0x05, 0x65, 0x00, 0x06, 0x7B, 0x00, 0x07, 0x9E, 0x00, 0x08,
    0xB5, 0x00, 0x09, 0xC0, 0x00, 0x0C, 0xD9, 0x00, 0x0D, 0x07, 0x01, 0x0E, 0x0C, 0x01, 0x0F, 0x15,
    0x01, 0x11, 0x20, 0x01, 0x12, 0x45, 0x01, 0x13, 0x5B, 0x01, 0x14, 0x84, 0x01, 0x15, 0x88, 0x01,
    0x16, 0x8E, 0x01, 0x17, 0xA6, 0x01, 0x18, 0xF9, 0x01, 0x19, 0x17, 0x02, 0x1A, 0x24, 0x02, 0x1B,
    0x33, 0x02, 0x1C, 0x3E, 0x02, 0x2C, 0x56, 0x02, 0x00, 0x80, 0x63, 0x6F, 0x6D, 0x00, 0x45, 0x58,
    0x00, 0x0F, 0x5D, 0x00, 0x10, 0x61, 0x00, 0x00, 0x80, 0x73, 0x69, 0x63, 0x00, 0x80, 0x73, 0x74,
    0x00, 0x80, 0x6B, 0x65, 0x00, 0x44, 0x6C, 0x00, 0x2C, 0x73, 0x00, 0x00, 0x2C, 0x00, 0x80, 0x6F,
    0x75, 0x74, 0x00, 0x80, 0x65, 0x63, 0x61, 0x75, 0x73, 0x65, 0x00, 0x4C, 0x85, 0x00, 0x11, 0x8F,
    0x00, 0x16, 0x98, 0x00, 0x00, 0x16, 0x04, 0x05, 0x00, 0x80, 0x61, 0x6C, 0x6C, 0x79, 0x00, 0x0C,
    0x00, 0x80, 0x72, 0x65, 0x61, 0x73, 0x65, 0x00, 0x80, 0x68, 0x6F, 0x6F, 0x6C, 0x00, 0x4F, 0xA5,
    0x00, 0x11, 0xAF, 0x00, 0x00, 0x18, 0x12, 0x0B, 0x16, 0x00, 0x80, 0x6E, 0x27, 0x74, 0x00, 0x04,
    0x0B, 0x00, 0x80, 0x79, 0x00, 0x10, 0x12, 0x16, 0x00, 0x80, 0x74, 0x68, 0x69, 0x6E, 0x67, 0x00,
    0x48, 0xC7, 0x00, 0x0C, 0xCF, 0x00, 0x00, 0x07, 0x00, 0x80, 0x61, 0x75, 0x6C, 0x74, 0x00, 0x07,
    0x00, 0x80, 0x66, 0x69, 0x63, 0x75, 0x6C, 0x74, 0x00, 0xC0, 0x6E, 0x67, 0x00, 0x51, 0xEA, 0x00,
    0x17, 0xF5, 0x00, 0x19, 0xFC, 0x00, 0x2C, 0x04, 0x01, 0x00, 0x18, 0x00, 0x80, 0x76, 0x65, 0x72,
    0x73, 0x69, 0x74, 0x79, 0x00, 0x16, 0x2C, 0x00, 0x80, 0x6C, 0x6C, 0x00, 0x2C, 0x00, 0x80, 0x73,
    0x69, 0x6F, 0x6E, 0x00, 0x80, 0x69, 0x00, 0x80, 0x6F, 0x69, 0x6E, 0x00, 0x1A, 0x04, 0x00, 0x80,
    0x77, 0x61, 0x72, 0x64, 0x00, 0x13, 0x10, 0x0C, 0x00, 0x80, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x00,
    0x44, 0x2A, 0x01, 0x0C, 0x30, 0x01, 0x12, 0x37, 0x01, 0x00, 0x0B, 0x17, 0x00, 0x80, 0x6B, 0x00,
    0x10, 0x00, 0x80, 0x75, 0x74, 0x65, 0x00, 0x0C, 0x17, 0x06, 0x11, 0x18, 0x09, 0x00, 0x80, 0x61,
    0x6C, 0x69, 0x74, 0x79, 0x00, 0x4C, 0x4C, 0x01, 0x15, 0x53, 0x01, 0x00, 0x17, 0x00, 0x80, 0x6E,
    0x61, 0x6C, 0x00, 0x13, 0x00, 0x80, 0x67, 0x72, 0x61, 0x6D, 0x00, 0x44, 0x65, 0x01, 0x10, 0x6D,
    0x01, 0x12, 0x78, 0x01, 0x00, 0x06, 0x00, 0x80, 0x61, 0x62, 0x6C, 0x65, 0x00, 0x0C, 0x00, 0x80,
    0x6F, 0x73, 0x73, 0x69, 0x62, 0x6C, 0x65, 0x00, 0x0F, 0x08, 0x19, 0x08, 0x07, 0x00, 0x80, 0x6D,
    0x65, 0x6E, 0x74, 0x00, 0x80, 0x75, 0x69, 0x00, 0x09, 0x00, 0x80, 0x6F, 0x6D, 0x00, 0x51, 0x95,
    0x01, 0x16, 0x9D, 0x01, 0x00, 0x0C, 0x00, 0x80, 0x74, 0x65, 0x61, 0x64, 0x00, 0x12, 0x13, 0x00,
    0x80, 0x69, 0x62, 0x6C, 0x65, 0x00, 0x44, 0xB9, 0x01, 0x06, 0xC0, 0x01, 0x0B, 0xC8, 0x01, 0x0C,
    0xD0, 0x01, 0x11, 0xD8, 0x01, 0x2C, 0xF4, 0x01, 0x00, 0x11, 0x00, 0x80, 0x69, 0x6F, 0x6E, 0x00,
    0x04, 0x1B, 0x08, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x80, 0x74, 0x70, 0x73, 0x3A, 0x2F, 0x2F, 0x00,
    0x1A, 0x00, 0x80, 0x68, 0x6F, 0x75, 0x74, 0x00, 0x48, 0xDF, 0x01, 0x0C, 0xED, 0x01, 0x00, 0x10,
    0x08, 0x0F, 0x13, 0x10, 0x0C, 0x00, 0x80, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x65, 0x72,
    0x65, 0x73, 0x74, 0x00, 0x80, 0x68, 0x61, 0x6E, 0x00, 0x49, 0x03, 0x02, 0x10, 0x0B, 0x02, 0x12,
    0x10, 0x02, 0x00, 0x80, 0x6E, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x73, 0x69, 0x63, 0x00,
    0x06, 0x00, 0x80, 0x72, 0x73, 0x65, 0x00, 0xC0, 0x65, 0x72, 0x00, 0x08, 0x07, 0x00, 0x80, 0x65,
    0x6C, 0x6F, 0x70, 0x00, 0xC0, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0x12, 0x0B, 0x00, 0x80, 0x65, 0x76,
    0x65, 0x72, 0x00, 0xC0, 0x65, 0x73, 0x00, 0x08, 0x00, 0x80, 0x61, 0x63, 0x74, 0x00, 0xC0, 0x6F,
    0x75, 0x00, 0x51, 0x49, 0x02, 0x16, 0x50, 0x02, 0x00, 0x04, 0x00, 0x80, 0x77, 0x61, 0x79, 0x00,
    0x80, 0x6D, 0x62, 0x6F, 0x6C, 0x00, 0x80, 0x66, 0x6F, 0x72, 0x00
};

// --------------------------------------------------

// Db_Magic dictionary (15 entries):
//   →alr      -> already
//   never     -> nevertheless
//   essential -> essentially
//   ever      -> everything
//   some      -> somewhere
//   confused  -> confusion
//   other     -> otherwise
//   recycle   -> recycling
//   judge     -> judgment
//   could     -> couldn't
//   again     -> against
//   copy      -> copying
//   doub      -> doable
//   que       -> queue
//   somewhere -> somehow

#define DB_MAGIC_MIN_LENGTH 3 // "que"
#define DB_MAGIC_MAX_LENGTH 9 // "essential"
#define DB_MAGIC_DICTIONARY_SIZE 210

static const uint8_t db_magic_data[DB_MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x45, 0x16, 0x00, 0x07, 0x20, 0x00, 0x08, 0x3C, 0x00, 0x0F, 0x7E, 0x00, 0x11, 0x8B, 0x00, 0x15,
    0x94, 0x00, 0x1C, 0xC9, 0x00, 0x00, 0x18, 0x12, 0x07, 0x00, 0x82, 0x61, 0x62, 0x6C, 0x65, 0x00,
    0x48, 0x27, 0x00, 0x0F, 0x33, 0x00, 0x00, 0x16, 0x18, 0x09, 0x11, 0x12, 0x06, 0x00, 0x82, 0x69,
    0x6F, 0x6E, 0x00, 0x18, 0x12, 0x06, 0x00, 0x80, 0x6E, 0x27, 0x74, 0x00, 0x4A, 0x4C, 0x00, 0x0F,
    0x56, 0x00, 0x10, 0x61, 0x00, 0x15, 0x6B, 0x00, 0x18, 0x78, 0x00, 0x00, 0x07, 0x18, 0x0D, 0x00,
    0x81, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x06, 0x1C, 0x06, 0x08, 0x15, 0x00, 0x81, 0x69, 0x6E, 0x67,
    0x00, 0x12, 0x16, 0x00, 0x80, 0x77, 0x68, 0x65, 0x72, 0x65, 0x00, 0x08, 0x0B, 0x1A, 0x08, 0x10,
    0x12, 0x16, 0x00, 0x85, 0x68, 0x6F, 0x77, 0x00, 0x14, 0x00, 0x80, 0x75, 0x65, 0x00, 0x04, 0x0C,
    0x17, 0x11, 0x08, 0x16, 0x16, 0x08, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x0C, 0x04, 0x0A, 0x04, 0x00,
    0x80, 0x73, 0x74, 0x00, 0x48, 0x9B, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x4B, 0xA2, 0x00, 0x19, 0xAB,
    0x00, 0x00, 0x17, 0x12, 0x00, 0x80, 0x77, 0x69, 0x73, 0x65, 0x00, 0x08, 0x00, 0xC0, 0x79, 0x74,
    0x68, 0x69, 0x6E, 0x67, 0x00, 0x11, 0x00, 0x80, 0x74, 0x68, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x00,
    0x04, 0x2C, 0x00, 0x80, 0x65, 0x61, 0x64, 0x79, 0x00, 0x13, 0x12, 0x06, 0x00, 0x80, 0x69, 0x6E,
    0x67, 0x00
};

// --------------------------------------------------

// Db_Letter dictionary (28 entries):
//   on    -> onion
//   an    -> anion
//   un    -> union
//   in    -> inion
//   →prob -> probably
//   →keyb -> keyboard
//   →con  -> consider
//   →gen  -> general
//   →men  -> menu
//   →def  -> definitely
//   →cof  -> confusing
//   →dif  -> differen
//   →bel  -> believe
//   →bet  -> between
//   →bec  -> become
//   →uf   -> unfortunate
//   →an   -> another
//   →in   -> inform
//   →th   -> through
//   →ob   -> obvious
//   →sh   -> should
//   →af   -> after
//   →b    -> before
//   →h    -> health
//   →f    -> first
//   →z    -> zone
//   →t    -> this
//   q     -> qua

#define DB_LETTER_MIN_LENGTH 1 // "q"
#define DB_LETTER_MAX_LENGTH 5 // "→prob"
#define DB_LETTER_DICTIONARY_SIZE 326

static const uint8_t db_letter_data[DB_LETTER_DICTIONARY_SIZE] PROGMEM = {
    0x45, 0x1C, 0x00, 0x06, 0x4E, 0x00, 0x09, 0x57, 0x00, 0x0B, 0xA7, 0x00, 0x0F, 0xC9, 0x00, 0x11,
    0xD3, 0x00, 0x14, 0x26, 0x01, 0x17, 0x2A, 0x01, 0x1D, 0x3F, 0x01, 0x00, 0x52, 0x26, 0x00, 0x1C,
    0x3D, 0x00, 0x2C, 0x47, 0x00, 0x00, 0x55, 0x2D, 0x00, 0x2C, 0x36, 0x00, 0x00, 0x13, 0x2C, 0x00,
    0x80, 0x61, 0x62, 0x6C, 0x79, 0x00, 0x80, 0x76, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x08, 0x0E, 0x2C,
    0x00, 0x80, 0x6F, 0x61, 0x72, 0x64, 0x00, 0x80, 0x65, 0x66, 0x6F, 0x72, 0x65, 0x00, 0x08, 0x05,
    0x2C, 0x00, 0x80, 0x6F, 0x6D, 0x65, 0x00, 0x44, 0x6A, 0x00, 0x08, 0x71, 0x00, 0x0C, 0x7D, 0x00,
    0x12, 0x87, 0x00, 0x18, 0x93, 0x00, 0x2C, 0xA1, 0x00, 0x00, 0x2C, 0x00, 0x80, 0x74, 0x65, 0x72,
    0x00, 0x07, 0x2C, 0x00, 0x80, 0x69, 0x6E, 0x69, 0x74, 0x65, 0x6C, 0x79, 0x00, 0x07, 0x2C, 0x00,
    0x80, 0x66, 0x65, 0x72, 0x65, 0x6E, 0x00, 0x06, 0x2C, 0x00, 0x81, 0x6E, 0x66, 0x75, 0x73, 0x69,
    0x6E, 0x67, 0x00, 0x2C, 0x00, 0x81, 0x6E, 0x66, 0x6F, 0x72, 0x74, 0x75, 0x6E, 0x61, 0x74, 0x65,
    0x00, 0x80, 0x69, 0x72, 0x73, 0x74, 0x00, 0x56, 0xB1, 0x00, 0x17, 0xB9, 0x00, 0x2C, 0xC2, 0x00,
    0x00, 0x2C, 0x00, 0x80, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0x2C, 0x00, 0x80, 0x72, 0x6F, 0x75, 0x67,
    0x68, 0x00, 0x80, 0x65, 0x61, 0x6C, 0x74, 0x68, 0x00, 0x08, 0x05, 0x2C, 0x00, 0x80, 0x69, 0x65,
    0x76, 0x65, 0x00, 0x44, 0xE3, 0x00, 0x08, 0xF1, 0x00, 0x0C, 0x05, 0x01, 0x12, 0x12, 0x01, 0x18,
    0x21, 0x01, 0x00, 0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x74, 0x68, 0x65, 0x72,
    0x00, 0x4A, 0xF8, 0x00, 0x10, 0x00, 0x01, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x72, 0x61, 0x6C, 0x00,
    0x2C, 0x00, 0x80, 0x75, 0x00, 0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x66, 0x6F, 0x72,
    0x6D, 0x00, 0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x06, 0x2C, 0x00, 0x80, 0x73, 0x69, 0x64, 0x65, 0x72,
    0x00, 0x80, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x75, 0x61, 0x00, 0x48, 0x31, 0x01, 0x2C, 0x3A, 0x01,
    0x00, 0x05, 0x2C, 0x00, 0x80, 0x77, 0x65, 0x65, 0x6E, 0x00, 0x80, 0x68, 0x69, 0x73, 0x00, 0x2C,
    0x00, 0x80, 0x6F, 0x6E, 0x65, 0x00
};
