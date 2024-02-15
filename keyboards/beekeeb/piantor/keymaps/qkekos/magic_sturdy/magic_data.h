#pragma once

#define MAX_CONTEXT_LENGTH 10

static const uint16_t trie_symbols[] = {55};
#define TRIE_SYMBOLS_COUNT 1

// --------------------------------------------------

// Magic dictionary (112 entries):
//   democrac -> democracy
//   supremac -> supremacy
//   accurac  -> accuracy
//   pharmac  -> pharmacy
//   never    -> nevertheless
//   every    -> everything
//   polic    -> policy
//   prob     -> probably
//   keyb     -> keyboard
//   with     -> without
//   →rec     -> recy
//   →an      -> another
//   →ex      -> example
//   →ar      -> around
//   →in      -> inform
//   →or      -> order
//   →ti      -> time
//   →ed      -> edge
//   →se      -> seen
//   →al      -> alr
//   →us      -> use
//   unf      -> unfortunate
//   def      -> definitely
//   hil      -> hilarious
//   ess      -> essential
//   con      -> consider
//   alt      -> although
//   any      -> anything
//   dif      -> differen
//   pos      -> position
//   bel      -> believe
//   bet      -> between
//   var      -> various
//   ser      -> serious
//   gen      -> general
//   pro      -> problem
//   key      -> keycode
//   bec      -> become
//   bud      -> budget
//   col      -> column
//   tho      -> though
//   num      -> number
//   rid      -> ridge
//   red      -> redge
//   jud      -> judge
//   led      -> ledge
//   vac      -> vacy
//   men      -> menu
//   gac      -> gacy
//   →t       -> that
//   →e       -> e.g.
//   pr       -> previous
//   th       -> through
//   ob       -> obvious
//   pe       -> people
//   pu       -> public
//   up       -> update
//   sh       -> should
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
//   ve       -> very
//   so       -> some
//   do       -> doub
//   li       -> list
//   be       -> been
//   pl       -> ply
//   mp       -> mpl
//   ma       -> mao
//   oc       -> ock
//   we       -> web
//   wa       -> way
//   uc       -> uck
//   cy       -> cyc
//   ac       -> ack
//   da       -> day
//   ic       -> ick
//   ec       -> eck
//   →        -> the
//   b        -> before
//   t        -> tment
//   w        -> which
//   f        -> first
//   n        -> nion
//   m        -> ment
//   j        -> just
//   z        -> zone
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
#define MAGIC_DICTIONARY_SIZE 994

static const uint8_t magic_data[MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x44, 0x52, 0x00, 0x05, 0x7F, 0x00, 0x06, 0xA6, 0x00, 0x07, 0x1F, 0x01, 0x08, 0x58, 0x01, 0x09,
    0x93, 0x01, 0x0A, 0xC3, 0x01, 0x0B, 0xCD, 0x01, 0x0C, 0xE9, 0x01, 0x0D, 0x05, 0x02, 0x0E, 0x0A,
    0x02, 0x0F, 0x0D, 0x02, 0x10, 0x41, 0x02, 0x11, 0x4E, 0x02, 0x12, 0x8A, 0x02, 0x13, 0xC0, 0x02,
    0x14, 0xD3, 0x02, 0x15, 0xD7, 0x02, 0x16, 0x22, 0x03, 0x17, 0x47, 0x03, 0x18, 0x75, 0x03, 0x19,
    0x89, 0x03, 0x1A, 0x8D, 0x03, 0x1B, 0x93, 0x03, 0x1C, 0xA0, 0x03, 0x1D, 0xD8, 0x03, 0x2C, 0xDD,
    0x03, 0x00, 0xC0, 0x62, 0x00, 0x47, 0x68, 0x00, 0x0F, 0x6B, 0x00, 0x10, 0x70, 0x00, 0x13, 0x73,
    0x00, 0x19, 0x77, 0x00, 0x1A, 0x7C, 0x00, 0x00, 0x80, 0x79, 0x00, 0x80, 0x72, 0x67, 0x65, 0x00,
    0x80, 0x6F, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x6C, 0x75, 0x65, 0x00, 0x80, 0x79, 0x00, 0xC0,
    0x65, 0x66, 0x6F, 0x72, 0x65, 0x00, 0x52, 0x8D, 0x00, 0x1C, 0x9D, 0x00, 0x00, 0xC0, 0x76, 0x69,
    0x6F, 0x75, 0x73, 0x00, 0x15, 0x13, 0x00, 0x80, 0x61, 0x62, 0x6C, 0x79, 0x00, 0x08, 0x0E, 0x00,
    0x80, 0x6F, 0x61, 0x72, 0x64, 0x00, 0xC0, 0x79, 0x00, 0x44, 0xB9, 0x00, 0x08, 0xFB, 0x00, 0x0C,
    0x0F, 0x01, 0x12, 0x19, 0x01, 0x18, 0x1C, 0x01, 0x00, 0xC0, 0x6B, 0x00, 0x4A, 0xC9, 0x00, 0x10,
    0xCC, 0x00, 0x15, 0xE2, 0x00, 0x19, 0xF8, 0x00, 0x00, 0x80, 0x79, 0x00, 0x48, 0xD3, 0x00, 0x15,
    0xDB, 0x00, 0x00, 0x15, 0x13, 0x18, 0x16, 0x00, 0x80, 0x79, 0x00, 0x04, 0x0B, 0x13, 0x00, 0x80,
    0x79, 0x00, 0x46, 0xE9, 0x00, 0x18, 0xF1, 0x00, 0x00, 0x12, 0x10, 0x08, 0x07, 0x00, 0x80, 0x79,
    0x00, 0x06, 0x06, 0x04, 0x00, 0x80, 0x79, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x6B, 0x00, 0x45, 0x05,
    0x01, 0x15, 0x0A, 0x01, 0x00, 0x80, 0x6F, 0x6D, 0x65, 0x00, 0x2C, 0x00, 0x80, 0x79, 0x00, 0xC0,
    0x6B, 0x00, 0x0F, 0x12, 0x13, 0x00, 0x80, 0x79, 0x00, 0x80, 0x6B, 0x00, 0x80, 0x6B, 0x00, 0xC0,
    0x79, 0x00, 0x48, 0x2C, 0x01, 0x0C, 0x42, 0x01, 0x18, 0x48, 0x01, 0x00, 0x4F, 0x36, 0x01, 0x15,
    0x3A, 0x01, 0x2C, 0x3E, 0x01, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x67,
    0x65, 0x00, 0x15, 0x00, 0x80, 0x67, 0x65, 0x00, 0x45, 0x4F, 0x01, 0x0D, 0x54, 0x01, 0x00, 0x80,
    0x67, 0x65, 0x74, 0x00, 0x80, 0x67, 0x65, 0x00, 0xC0, 0x75, 0x00, 0x45, 0x71, 0x01, 0x13, 0x75,
    0x01, 0x16, 0x7B, 0x01, 0x17, 0x81, 0x01, 0x19, 0x87, 0x01, 0x1A, 0x8B, 0x01, 0x2C, 0x8E, 0x01,
    0x00, 0x80, 0x65, 0x6E, 0x00, 0x80, 0x6F, 0x70, 0x6C, 0x65, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x6E,
    0x00, 0x80, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x80, 0x72, 0x79, 0x00, 0x80, 0x62, 0x00, 0x80, 0x2E,
    0x67, 0x2E, 0x00, 0xC0, 0x69, 0x72, 0x73, 0x74, 0x00, 0x48, 0xA3, 0x01, 0x0C, 0xAE, 0x01, 0x11,
    0xB7, 0x01, 0x00, 0x07, 0x00, 0x80, 0x69, 0x6E, 0x69, 0x74, 0x65, 0x6C, 0x79, 0x00, 0x07, 0x00,
    0x80, 0x66, 0x65, 0x72, 0x65, 0x6E, 0x00, 0x18, 0x00, 0x80, 0x6F, 0x72, 0x74, 0x75, 0x6E, 0x61,
    0x74, 0x65, 0x00, 0xC0, 0x79, 0x00, 0x04, 0x00, 0x80, 0x61, 0x69, 0x6E, 0x00, 0x56, 0xD4, 0x01,
    0x17, 0xDA, 0x01, 0x00, 0x80, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0xC0, 0x72, 0x6F, 0x75, 0x67, 0x68,
    0x00, 0x0C, 0x1A, 0x00, 0x80, 0x6F, 0x75, 0x74, 0x00, 0xC0, 0x6F, 0x6E, 0x00, 0x4F, 0xF7, 0x01,
    0x17, 0xFB, 0x01, 0x19, 0x01, 0x02, 0x00, 0x80, 0x73, 0x74, 0x00, 0x2C, 0x00, 0x80, 0x6D, 0x65,
    0x00, 0x80, 0x65, 0x77, 0x00, 0x80, 0x75, 0x73, 0x74, 0x00, 0x80, 0x73, 0x00, 0xC0, 0x6B, 0x00,
    0x44, 0x20, 0x02, 0x08, 0x25, 0x02, 0x0C, 0x2D, 0x02, 0x12, 0x37, 0x02, 0x13, 0x3E, 0x02, 0x00,
    0x2C, 0x00, 0x80, 0x72, 0x00, 0x05, 0x00, 0x80, 0x69, 0x65, 0x76, 0x65, 0x00, 0x0B, 0x00, 0x80,
    0x61, 0x72, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x06, 0x00, 0x80, 0x75, 0x6D, 0x6E, 0x00, 0x80, 0x79,
    0x00, 0xC0, 0x65, 0x6E, 0x74, 0x00, 0x18, 0x11, 0x00, 0x80, 0x62, 0x65, 0x72, 0x00, 0xC0, 0x69,
    0x6F, 0x6E, 0x00, 0x44, 0x60, 0x02, 0x08, 0x69, 0x02, 0x0C, 0x79, 0x02, 0x12, 0x81, 0x02, 0x00,
    0x2C, 0x00, 0x80, 0x6F, 0x74, 0x68, 0x65, 0x72, 0x00, 0x4A, 0x70, 0x02, 0x10, 0x76, 0x02, 0x00,
    0x80, 0x65, 0x72, 0x61, 0x6C, 0x00, 0x80, 0x75, 0x00, 0x2C, 0x00, 0x80, 0x66, 0x6F, 0x72, 0x6D,
    0x00, 0x06, 0x00, 0x80, 0x73, 0x69, 0x64, 0x65, 0x72, 0x00, 0xC0, 0x61, 0x00, 0x46, 0xA0, 0x02,
    0x07, 0xA5, 0x02, 0x0B, 0xA9, 0x02, 0x10, 0xB0, 0x02, 0x15, 0xB4, 0x02, 0x16, 0xBC, 0x02, 0x00,
    0x80, 0x75, 0x6C, 0x64, 0x00, 0x80, 0x75, 0x62, 0x00, 0x17, 0x00, 0x80, 0x75, 0x67, 0x68, 0x00,
    0x80, 0x73, 0x74, 0x00, 0x13, 0x00, 0x80, 0x62, 0x6C, 0x65, 0x6D, 0x00, 0x80, 0x6D, 0x65, 0x00,
    0xC0, 0x79, 0x00, 0x50, 0xCA, 0x02, 0x18, 0xCD, 0x02, 0x00, 0x80, 0x6C, 0x00, 0x80, 0x64, 0x61,
    0x74, 0x65, 0x00, 0x80, 0x75, 0x65, 0x00, 0xC0, 0x6C, 0x00, 0x44, 0xE7, 0x02, 0x08, 0xFA, 0x02,
    0x12, 0x13, 0x03, 0x13, 0x1A, 0x03, 0x00, 0x59, 0xEE, 0x02, 0x2C, 0xF4, 0x02, 0x00, 0x80, 0x69,
    0x6F, 0x75, 0x73, 0x00, 0x80, 0x6F, 0x75, 0x6E, 0x64, 0x00, 0x56, 0x01, 0x03, 0x19, 0x07, 0x03,
    0x00, 0x80, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x08, 0x11, 0x00, 0x80, 0x74, 0x68, 0x65, 0x6C, 0x65,
    0x73, 0x73, 0x00, 0x2C, 0x00, 0x80, 0x64, 0x65, 0x72, 0x00, 0x80, 0x65, 0x76, 0x69, 0x6F, 0x75,
    0x73, 0x00, 0xC0, 0x6B, 0x00, 0x52, 0x2F, 0x03, 0x16, 0x38, 0x03, 0x18, 0x42, 0x03, 0x00, 0x13,
    0x00, 0x80, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x08, 0x00, 0x80, 0x65, 0x6E, 0x74, 0x69, 0x61,
    0x6C, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x00, 0xC0, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x48, 0x5A, 0x03,
    0x0F, 0x62, 0x03, 0x12, 0x6B, 0x03, 0x2C, 0x70, 0x03, 0x00, 0x05, 0x00, 0x80, 0x77, 0x65, 0x65,
    0x6E, 0x00, 0x04, 0x00, 0x80, 0x68, 0x6F, 0x75, 0x67, 0x68, 0x00, 0x80, 0x68, 0x65, 0x72, 0x00,
    0x80, 0x68, 0x61, 0x74, 0x00, 0xC0, 0x65, 0x00, 0x50, 0x7F, 0x03, 0x13, 0x83, 0x03, 0x00, 0x80,
    0x73, 0x74, 0x00, 0x80, 0x62, 0x6C, 0x69, 0x63, 0x00, 0x80, 0x65, 0x72, 0x00, 0x80, 0x68, 0x69,
    0x63, 0x68, 0x00, 0xC0, 0x74, 0x00, 0x08, 0x2C, 0x00, 0x80, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x00,
    0xC0, 0x70, 0x00, 0x46, 0xB3, 0x03, 0x08, 0xB6, 0x03, 0x11, 0xBE, 0x03, 0x15, 0xC7, 0x03, 0x16,
    0xD2, 0x03, 0x00, 0x80, 0x63, 0x00, 0x0E, 0x00, 0x80, 0x63, 0x6F, 0x64, 0x65, 0x00, 0x04, 0x00,
    0x80, 0x74, 0x68, 0x69, 0x6E, 0x67, 0x00, 0x08, 0x19, 0x08, 0x00, 0x80, 0x74, 0x68, 0x69, 0x6E,
    0x67, 0x00, 0x80, 0x73, 0x74, 0x65, 0x6D, 0x00, 0x80, 0x6F, 0x6E, 0x65, 0x00, 0x80, 0x74, 0x68,
    0x65, 0x00
};

// --------------------------------------------------

// Repeat dictionary (48 entries):
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
//   any       -> anyway
//   cou       -> course
//   →b        -> because
//   →t        -> than
//   →i        -> ii
//   fu        -> function
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

#define REPEAT_MIN_LENGTH 1 // "."
#define REPEAT_MAX_LENGTH 9 // "implement"
#define REPEAT_DICTIONARY_SIZE 536

static const uint8_t repeat_data[REPEAT_DICTIONARY_SIZE] PROGMEM = {
    0x77, 0x49, 0x00, 0x04, 0x4E, 0x00, 0x05, 0x65, 0x00, 0x06, 0x7B, 0x00, 0x07, 0x9E, 0x00, 0x08,
    0xB5, 0x00, 0x09, 0xC0, 0x00, 0x0C, 0xD9, 0x00, 0x0D, 0x07, 0x01, 0x0E, 0x0C, 0x01, 0x0F, 0x15,
    0x01, 0x11, 0x20, 0x01, 0x12, 0x2F, 0x01, 0x13, 0x38, 0x01, 0x14, 0x61, 0x01, 0x15, 0x65, 0x01,
    0x16, 0x6B, 0x01, 0x17, 0x83, 0x01, 0x18, 0xB6, 0x01, 0x19, 0xD4, 0x01, 0x1A, 0xE1, 0x01, 0x1B,
    0xF0, 0x01, 0x1C, 0xFB, 0x01, 0x2C, 0x13, 0x02, 0x00, 0x80, 0x63, 0x6F, 0x6D, 0x00, 0x45, 0x58,
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
    0x12, 0x0C, 0x17, 0x06, 0x11, 0x18, 0x09, 0x00, 0x80, 0x61, 0x6C, 0x69, 0x74, 0x79, 0x00, 0x15,
    0x13, 0x00, 0x80, 0x67, 0x72, 0x61, 0x6D, 0x00, 0x44, 0x42, 0x01, 0x10, 0x4A, 0x01, 0x12, 0x55,
    0x01, 0x00, 0x06, 0x00, 0x80, 0x61, 0x62, 0x6C, 0x65, 0x00, 0x0C, 0x00, 0x80, 0x6F, 0x73, 0x73,
    0x69, 0x62, 0x6C, 0x65, 0x00, 0x0F, 0x08, 0x19, 0x08, 0x07, 0x00, 0x80, 0x6D, 0x65, 0x6E, 0x74,
    0x00, 0x80, 0x75, 0x69, 0x00, 0x09, 0x00, 0x80, 0x6F, 0x6D, 0x00, 0x51, 0x72, 0x01, 0x16, 0x7A,
    0x01, 0x00, 0x0C, 0x00, 0x80, 0x74, 0x65, 0x61, 0x64, 0x00, 0x12, 0x13, 0x00, 0x80, 0x69, 0x62,
    0x6C, 0x65, 0x00, 0x46, 0x8D, 0x01, 0x11, 0x95, 0x01, 0x2C, 0xB1, 0x01, 0x00, 0x04, 0x1B, 0x08,
    0x00, 0x80, 0x6C, 0x79, 0x00, 0x48, 0x9C, 0x01, 0x0C, 0xAA, 0x01, 0x00, 0x10, 0x08, 0x0F, 0x13,
    0x10, 0x0C, 0x00, 0x80, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x65, 0x72, 0x65, 0x73, 0x74,
    0x00, 0x80, 0x68, 0x61, 0x6E, 0x00, 0x49, 0xC0, 0x01, 0x10, 0xC8, 0x01, 0x12, 0xCD, 0x01, 0x00,
    0x80, 0x6E, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x73, 0x69, 0x63, 0x00, 0x06, 0x00, 0x80,
    0x72, 0x73, 0x65, 0x00, 0xC0, 0x65, 0x72, 0x00, 0x08, 0x07, 0x00, 0x80, 0x65, 0x6C, 0x6F, 0x70,
    0x00, 0xC0, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0x12, 0x0B, 0x00, 0x80, 0x65, 0x76, 0x65, 0x72, 0x00,
    0xC0, 0x65, 0x73, 0x00, 0x08, 0x00, 0x80, 0x61, 0x63, 0x74, 0x00, 0xC0, 0x6F, 0x75, 0x00, 0x51,
    0x06, 0x02, 0x16, 0x0D, 0x02, 0x00, 0x04, 0x00, 0x80, 0x77, 0x61, 0x79, 0x00, 0x80, 0x6D, 0x62,
    0x6F, 0x6C, 0x00, 0x80, 0x66, 0x6F, 0x72, 0x00
};

// --------------------------------------------------

// Db_Magic dictionary (11 entries):
//   →alr      -> already
//   never     -> nevertheless
//   essential -> essentially
//   some      -> somewhere
//   judge     -> judgment
//   could     -> couldn't
//   again     -> against
//   copy      -> copying
//   doub      -> doable
//   que       -> queue
//   somewhere -> somehow

#define DB_MAGIC_MIN_LENGTH 3 // "que"
#define DB_MAGIC_MAX_LENGTH 9 // "essential"
#define DB_MAGIC_DICTIONARY_SIZE 154

static const uint8_t db_magic_data[DB_MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x45, 0x16, 0x00, 0x07, 0x20, 0x00, 0x08, 0x2A, 0x00, 0x0F, 0x5E, 0x00, 0x11, 0x6B, 0x00, 0x15,
    0x74, 0x00, 0x1C, 0x91, 0x00, 0x00, 0x18, 0x12, 0x07, 0x00, 0x82, 0x61, 0x62, 0x6C, 0x65, 0x00,
    0x0F, 0x18, 0x12, 0x06, 0x00, 0x80, 0x6E, 0x27, 0x74, 0x00, 0x4A, 0x37, 0x00, 0x10, 0x41, 0x00,
    0x15, 0x4B, 0x00, 0x18, 0x58, 0x00, 0x00, 0x07, 0x18, 0x0D, 0x00, 0x81, 0x6D, 0x65, 0x6E, 0x74,
    0x00, 0x12, 0x16, 0x00, 0x80, 0x77, 0x68, 0x65, 0x72, 0x65, 0x00, 0x08, 0x0B, 0x1A, 0x08, 0x10,
    0x12, 0x16, 0x00, 0x85, 0x68, 0x6F, 0x77, 0x00, 0x14, 0x00, 0x80, 0x75, 0x65, 0x00, 0x04, 0x0C,
    0x17, 0x11, 0x08, 0x16, 0x16, 0x08, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x0C, 0x04, 0x0A, 0x04, 0x00,
    0x80, 0x73, 0x74, 0x00, 0x48, 0x7B, 0x00, 0x0F, 0x88, 0x00, 0x00, 0x19, 0x08, 0x11, 0x00, 0x80,
    0x74, 0x68, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x00, 0x04, 0x2C, 0x00, 0x80, 0x65, 0x61, 0x64, 0x79,
    0x00, 0x13, 0x12, 0x06, 0x00, 0x80, 0x69, 0x6E, 0x67, 0x00
};
