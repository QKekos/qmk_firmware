#pragma once

#define MAX_CONTEXT_LENGTH 15

static const uint16_t trie_symbols[] = {55};
#define TRIE_SYMBOLS_COUNT 1

// --------------------------------------------------

// Magic dictionary (94 entries):
//   oc       -> ock
//   ac       -> ack
//   uc       -> uck
//   ec       -> eck
//   ic       -> ick
//   democrac -> democracy
//   supremac -> supremacy
//   accurac  -> accuracy
//   pharmac  -> pharmacy
//   never    -> nevertheless
//   polic    -> policy
//   →rec     -> recycle
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
#define MAGIC_DICTIONARY_SIZE 794

static const uint8_t magic_data[MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x44, 0x46, 0x00, 0x06, 0x6B, 0x00, 0x07, 0xDC, 0x00, 0x08, 0x15, 0x01, 0x09, 0x53, 0x01, 0x0A,
    0x63, 0x01, 0x0C, 0x6D, 0x01, 0x0D, 0x96, 0x01, 0x0E, 0x9B, 0x01, 0x0F, 0x9E, 0x01, 0x10, 0xC7,
    0x01, 0x12, 0xD4, 0x01, 0x13, 0x0A, 0x02, 0x14, 0x1D, 0x02, 0x15, 0x21, 0x02, 0x16, 0x6C, 0x02,
    0x17, 0x91, 0x02, 0x18, 0xB4, 0x02, 0x19, 0xC8, 0x02, 0x1A, 0xCC, 0x02, 0x1B, 0xD2, 0x02, 0x1C,
    0xEB, 0x02, 0x2C, 0x15, 0x03, 0x00, 0xC0, 0x62, 0x00, 0x47, 0x59, 0x00, 0x0F, 0x5C, 0x00, 0x10,
    0x61, 0x00, 0x13, 0x64, 0x00, 0x1A, 0x68, 0x00, 0x00, 0x80, 0x79, 0x00, 0x80, 0x72, 0x67, 0x65,
    0x00, 0x80, 0x6F, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x79, 0x00, 0x44, 0x7E,
    0x00, 0x08, 0xC0, 0x00, 0x0C, 0xCC, 0x00, 0x12, 0xD6, 0x00, 0x18, 0xD9, 0x00, 0x00, 0xC0, 0x6B,
    0x00, 0x4A, 0x8E, 0x00, 0x10, 0x91, 0x00, 0x15, 0xA7, 0x00, 0x19, 0xBD, 0x00, 0x00, 0x80, 0x79,
    0x00, 0x48, 0x98, 0x00, 0x15, 0xA0, 0x00, 0x00, 0x15, 0x13, 0x18, 0x16, 0x00, 0x80, 0x79, 0x00,
    0x04, 0x0B, 0x13, 0x00, 0x80, 0x79, 0x00, 0x46, 0xAE, 0x00, 0x18, 0xB6, 0x00, 0x00, 0x12, 0x10,
    0x08, 0x07, 0x00, 0x80, 0x79, 0x00, 0x06, 0x06, 0x04, 0x00, 0x80, 0x79, 0x00, 0x80, 0x79, 0x00,
    0xC0, 0x6B, 0x00, 0x15, 0x2C, 0x00, 0x80, 0x79, 0x63, 0x6C, 0x65, 0x00, 0xC0, 0x6B, 0x00, 0x0F,
    0x12, 0x13, 0x00, 0x80, 0x79, 0x00, 0x80, 0x6B, 0x00, 0x80, 0x6B, 0x00, 0xC0, 0x79, 0x00, 0x48,
    0xE9, 0x00, 0x0C, 0xFF, 0x00, 0x18, 0x05, 0x01, 0x00, 0x4F, 0xF3, 0x00, 0x15, 0xF7, 0x00, 0x2C,
    0xFB, 0x00, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x67, 0x65, 0x00, 0x15,
    0x00, 0x80, 0x67, 0x65, 0x00, 0x45, 0x0C, 0x01, 0x0D, 0x11, 0x01, 0x00, 0x80, 0x67, 0x65, 0x74,
    0x00, 0x80, 0x67, 0x65, 0x00, 0xC0, 0x75, 0x00, 0x45, 0x2E, 0x01, 0x13, 0x32, 0x01, 0x15, 0x38,
    0x01, 0x16, 0x3F, 0x01, 0x17, 0x45, 0x01, 0x1A, 0x4B, 0x01, 0x2C, 0x4E, 0x01, 0x00, 0x80, 0x65,
    0x6E, 0x00, 0x80, 0x6F, 0x70, 0x6C, 0x65, 0x00, 0x80, 0x6F, 0x72, 0x64, 0x65, 0x72, 0x00, 0x2C,
    0x00, 0x80, 0x65, 0x6E, 0x00, 0x80, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x80, 0x62, 0x00, 0x80, 0x2E,
    0x67, 0x2E, 0x00, 0xC0, 0x69, 0x6E, 0x65, 0x00, 0x12, 0x06, 0x00, 0x81, 0x6E, 0x66, 0x75, 0x73,
    0x65, 0x64, 0x00, 0xC0, 0x79, 0x00, 0x04, 0x00, 0x80, 0x61, 0x69, 0x6E, 0x00, 0xC0, 0x6F, 0x6E,
    0x00, 0x47, 0x7E, 0x01, 0x0F, 0x88, 0x01, 0x17, 0x8C, 0x01, 0x19, 0x92, 0x01, 0x00, 0x80, 0x63,
    0x74, 0x69, 0x6F, 0x6E, 0x61, 0x72, 0x79, 0x00, 0x80, 0x73, 0x74, 0x00, 0x2C, 0x00, 0x80, 0x6D,
    0x65, 0x00, 0x80, 0x65, 0x77, 0x00, 0x80, 0x75, 0x73, 0x74, 0x00, 0x80, 0x73, 0x00, 0xC0, 0x6B,
    0x00, 0x44, 0xAE, 0x01, 0x0C, 0xB3, 0x01, 0x12, 0xBD, 0x01, 0x13, 0xC4, 0x01, 0x00, 0x2C, 0x00,
    0x80, 0x72, 0x00, 0x0B, 0x00, 0x80, 0x61, 0x72, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x06, 0x00, 0x80,
    0x75, 0x6D, 0x6E, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x65, 0x6E, 0x74, 0x00, 0x18, 0x11, 0x00, 0x80,
    0x62, 0x65, 0x72, 0x00, 0xC0, 0x61, 0x00, 0x46, 0xEA, 0x01, 0x07, 0xEF, 0x01, 0x0B, 0xF3, 0x01,
    0x10, 0xFA, 0x01, 0x15, 0xFE, 0x01, 0x16, 0x06, 0x02, 0x00, 0x80, 0x75, 0x6C, 0x64, 0x00, 0x80,
    0x75, 0x62, 0x00, 0x17, 0x00, 0x80, 0x75, 0x67, 0x68, 0x00, 0x80, 0x73, 0x74, 0x00, 0x13, 0x00,
    0x80, 0x62, 0x6C, 0x65, 0x6D, 0x00, 0x80, 0x6D, 0x65, 0x00, 0xC0, 0x79, 0x00, 0x50, 0x14, 0x02,
    0x18, 0x17, 0x02, 0x00, 0x80, 0x6C, 0x00, 0x80, 0x64, 0x61, 0x74, 0x65, 0x00, 0x80, 0x75, 0x65,
    0x00, 0xC0, 0x6C, 0x00, 0x44, 0x31, 0x02, 0x08, 0x44, 0x02, 0x12, 0x5D, 0x02, 0x13, 0x64, 0x02,
    0x00, 0x59, 0x38, 0x02, 0x2C, 0x3E, 0x02, 0x00, 0x80, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x80, 0x6F,
    0x75, 0x6E, 0x64, 0x00, 0x56, 0x4B, 0x02, 0x19, 0x51, 0x02, 0x00, 0x80, 0x69, 0x6F, 0x75, 0x73,
    0x00, 0x08, 0x11, 0x00, 0x80, 0x74, 0x68, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x00, 0x2C, 0x00, 0x80,
    0x64, 0x65, 0x72, 0x00, 0x80, 0x65, 0x76, 0x69, 0x6F, 0x75, 0x73, 0x00, 0xC0, 0x6B, 0x00, 0x52,
    0x79, 0x02, 0x16, 0x82, 0x02, 0x18, 0x8C, 0x02, 0x00, 0x13, 0x00, 0x80, 0x69, 0x74, 0x69, 0x6F,
    0x6E, 0x00, 0x08, 0x00, 0x80, 0x65, 0x6E, 0x74, 0x69, 0x61, 0x6C, 0x00, 0x2C, 0x00, 0x80, 0x65,
    0x00, 0xC0, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x4F, 0xA1, 0x02, 0x12, 0xAA, 0x02, 0x2C, 0xAF, 0x02,
    0x00, 0x04, 0x00, 0x80, 0x68, 0x6F, 0x75, 0x67, 0x68, 0x00, 0x80, 0x68, 0x65, 0x72, 0x00, 0x80,
    0x68, 0x61, 0x74, 0x00, 0xC0, 0x65, 0x00, 0x50, 0xBE, 0x02, 0x13, 0xC2, 0x02, 0x00, 0x80, 0x73,
    0x74, 0x00, 0x80, 0x62, 0x6C, 0x69, 0x63, 0x00, 0x80, 0x65, 0x72, 0x00, 0x80, 0x68, 0x69, 0x63,
    0x68, 0x00, 0xC0, 0x74, 0x00, 0x08, 0x00, 0xC0, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x00, 0x51, 0xE5,
    0x02, 0x17, 0xE8, 0x02, 0x00, 0x80, 0x74, 0x00, 0x80, 0x74, 0x00, 0xC0, 0x70, 0x00, 0x46, 0xFB,
    0x02, 0x08, 0xFE, 0x02, 0x11, 0x06, 0x03, 0x16, 0x0F, 0x03, 0x00, 0x80, 0x63, 0x00, 0x0E, 0x00,
    0x80, 0x63, 0x6F, 0x64, 0x65, 0x00, 0x04, 0x00, 0x80, 0x74, 0x68, 0x69, 0x6E, 0x67, 0x00, 0x80,
    0x73, 0x74, 0x65, 0x6D, 0x00, 0x80, 0x74, 0x68, 0x65, 0x00
};

// --------------------------------------------------

// Repeat dictionary (60 entries):
//   should         -> shouldn't
//   →sti           -> still
//   some           -> something
//   impl           -> implement
//   poss           -> possible
//   hand           -> handy
//   →vi            -> vision
//   →ab            -> about
//   sim            -> simultaneously
//   imp            -> impossible
//   uni            -> university
//   dif            -> difficult
//   inc            -> increase
//   int            -> interest
//   ins            -> instead
//   def            -> default
//   dev            -> develop
//   awk            -> awkward
//   cap            -> capable
//   pro            -> program
//   how            -> however
//   wit            -> without
//   thr            -> through
//   any            -> anyway
//   cou            -> course
//   nat            -> nation
//   tio            -> tional
//   min            -> minute
//   ing            -> inge
//   →b             -> because
//   →t             -> than
//   →i             -> ii
//   fu             -> function
//   ht             -> https://
//   sc             -> school
//   sy             -> symbol
//   mu             -> music
//   ba             -> basic
//   ex             -> exact
//   va             -> value
//   fr             -> from
//   ma             -> make
//   la             -> last
//   st             -> sts
//   rs             -> rst
//   .              -> .com
//   →              -> for
//   w              -> would
//   j              -> join
//   x              -> xes
//   i              -> ing
//   y              -> you
//   q              -> qui
//   v              -> ver
//   implement      -> implementation
//   function       -> functionality
//   simultaneously -> simultaneous
//   develop        -> development
//   basic          -> basically
//   exact          -> exactly

#define REPEAT_MIN_LENGTH 1 // "."
#define REPEAT_MAX_LENGTH 14 // "simultaneously"
#define REPEAT_DICTIONARY_SIZE 673

static const uint8_t repeat_data[REPEAT_DICTIONARY_SIZE] PROGMEM = {
    0x77, 0x4F, 0x00, 0x04, 0x54, 0x00, 0x05, 0x73, 0x00, 0x06, 0x89, 0x00, 0x07, 0xAC, 0x00, 0x08,
    0xC3, 0x00, 0x09, 0xCE, 0x00, 0x0A, 0xE7, 0x00, 0x0C, 0xED, 0x00, 0x0D, 0x1B, 0x01, 0x0E, 0x20,
    0x01, 0x0F, 0x29, 0x01, 0x10, 0x34, 0x01, 0x11, 0x44, 0x01, 0x12, 0x60, 0x01, 0x13, 0x76, 0x01,
    0x14, 0x9F, 0x01, 0x15, 0xA3, 0x01, 0x16, 0xB6, 0x01, 0x17, 0xD4, 0x01, 0x18, 0x2D, 0x02, 0x19,
    0x4B, 0x02, 0x1A, 0x58, 0x02, 0x1B, 0x67, 0x02, 0x1C, 0x72, 0x02, 0x2C, 0x9C, 0x02, 0x00, 0x80,
    0x63, 0x6F, 0x6D, 0x00, 0x45, 0x61, 0x00, 0x0F, 0x66, 0x00, 0x10, 0x6A, 0x00, 0x19, 0x6E, 0x00,
    0x00, 0x80, 0x73, 0x69, 0x63, 0x00, 0x80, 0x73, 0x74, 0x00, 0x80, 0x6B, 0x65, 0x00, 0x80, 0x6C,
    0x75, 0x65, 0x00, 0x44, 0x7A, 0x00, 0x2C, 0x81, 0x00, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x75, 0x74,
    0x00, 0x80, 0x65, 0x63, 0x61, 0x75, 0x73, 0x65, 0x00, 0x4C, 0x93, 0x00, 0x11, 0x9D, 0x00, 0x16,
    0xA6, 0x00, 0x00, 0x16, 0x04, 0x05, 0x00, 0x80, 0x61, 0x6C, 0x6C, 0x79, 0x00, 0x0C, 0x00, 0x80,
    0x72, 0x65, 0x61, 0x73, 0x65, 0x00, 0x80, 0x68, 0x6F, 0x6F, 0x6C, 0x00, 0x4F, 0xB3, 0x00, 0x11,
    0xBD, 0x00, 0x00, 0x18, 0x12, 0x0B, 0x16, 0x00, 0x80, 0x6E, 0x27, 0x74, 0x00, 0x04, 0x0B, 0x00,
    0x80, 0x79, 0x00, 0x10, 0x12, 0x16, 0x00, 0x80, 0x74, 0x68, 0x69, 0x6E, 0x67, 0x00, 0x48, 0xD5,
    0x00, 0x0C, 0xDD, 0x00, 0x00, 0x07, 0x00, 0x80, 0x61, 0x75, 0x6C, 0x74, 0x00, 0x07, 0x00, 0x80,
    0x66, 0x69, 0x63, 0x75, 0x6C, 0x74, 0x00, 0x11, 0x0C, 0x00, 0x80, 0x65, 0x00, 0xC0, 0x6E, 0x67,
    0x00, 0x51, 0xFE, 0x00, 0x17, 0x09, 0x01, 0x19, 0x10, 0x01, 0x2C, 0x18, 0x01, 0x00, 0x18, 0x00,
    0x80, 0x76, 0x65, 0x72, 0x73, 0x69, 0x74, 0x79, 0x00, 0x16, 0x2C, 0x00, 0x80, 0x6C, 0x6C, 0x00,
    0x2C, 0x00, 0x80, 0x73, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x69, 0x00, 0x80, 0x6F, 0x69, 0x6E, 0x00,
    0x1A, 0x04, 0x00, 0x80, 0x77, 0x61, 0x72, 0x64, 0x00, 0x13, 0x10, 0x0C, 0x00, 0x80, 0x65, 0x6D,
    0x65, 0x6E, 0x74, 0x00, 0x0C, 0x16, 0x00, 0x80, 0x75, 0x6C, 0x74, 0x61, 0x6E, 0x65, 0x6F, 0x75,
    0x73, 0x6C, 0x79, 0x00, 0x4C, 0x4B, 0x01, 0x12, 0x52, 0x01, 0x00, 0x10, 0x00, 0x80, 0x75, 0x74,
    0x65, 0x00, 0x0C, 0x17, 0x06, 0x11, 0x18, 0x09, 0x00, 0x80, 0x61, 0x6C, 0x69, 0x74, 0x79, 0x00,
    0x4C, 0x67, 0x01, 0x15, 0x6E, 0x01, 0x00, 0x17, 0x00, 0x80, 0x6E, 0x61, 0x6C, 0x00, 0x13, 0x00,
    0x80, 0x67, 0x72, 0x61, 0x6D, 0x00, 0x44, 0x80, 0x01, 0x10, 0x88, 0x01, 0x12, 0x93, 0x01, 0x00,
    0x06, 0x00, 0x80, 0x61, 0x62, 0x6C, 0x65, 0x00, 0x0C, 0x00, 0x80, 0x6F, 0x73, 0x73, 0x69, 0x62,
    0x6C, 0x65, 0x00, 0x0F, 0x08, 0x19, 0x08, 0x07, 0x00, 0x80, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x80,
    0x75, 0x69, 0x00, 0x49, 0xAA, 0x01, 0x0B, 0xAE, 0x01, 0x00, 0x80, 0x6F, 0x6D, 0x00, 0x17, 0x00,
    0x80, 0x6F, 0x75, 0x67, 0x68, 0x00, 0x51, 0xC0, 0x01, 0x15, 0xC8, 0x01, 0x16, 0xCB, 0x01, 0x00,
    0x0C, 0x00, 0x80, 0x74, 0x65, 0x61, 0x64, 0x00, 0x80, 0x74, 0x00, 0x12, 0x13, 0x00, 0x80, 0x69,
    0x62, 0x6C, 0x65, 0x00, 0x44, 0xEA, 0x01, 0x06, 0xF1, 0x01, 0x0B, 0xF9, 0x01, 0x0C, 0x01, 0x02,
    0x11, 0x09, 0x02, 0x16, 0x25, 0x02, 0x2C, 0x28, 0x02, 0x00, 0x11, 0x00, 0x80, 0x69, 0x6F, 0x6E,
    0x00, 0x04, 0x1B, 0x08, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x80, 0x74, 0x70, 0x73, 0x3A, 0x2F, 0x2F,
    0x00, 0x1A, 0x00, 0x80, 0x68, 0x6F, 0x75, 0x74, 0x00, 0x48, 0x10, 0x02, 0x0C, 0x1E, 0x02, 0x00,
    0x10, 0x08, 0x0F, 0x13, 0x10, 0x0C, 0x00, 0x80, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x65,
    0x72, 0x65, 0x73, 0x74, 0x00, 0x80, 0x73, 0x00, 0x80, 0x68, 0x61, 0x6E, 0x00, 0x49, 0x37, 0x02,
    0x10, 0x3F, 0x02, 0x12, 0x44, 0x02, 0x00, 0x80, 0x6E, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x80,
    0x73, 0x69, 0x63, 0x00, 0x06, 0x00, 0x80, 0x72, 0x73, 0x65, 0x00, 0xC0, 0x65, 0x72, 0x00, 0x08,
    0x07, 0x00, 0x80, 0x65, 0x6C, 0x6F, 0x70, 0x00, 0xC0, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0x12, 0x0B,
    0x00, 0x80, 0x65, 0x76, 0x65, 0x72, 0x00, 0xC0, 0x65, 0x73, 0x00, 0x08, 0x00, 0x80, 0x61, 0x63,
    0x74, 0x00, 0xC0, 0x6F, 0x75, 0x00, 0x4F, 0x80, 0x02, 0x11, 0x8F, 0x02, 0x16, 0x96, 0x02, 0x00,
    0x16, 0x18, 0x12, 0x08, 0x11, 0x04, 0x17, 0x0F, 0x18, 0x10, 0x0C, 0x16, 0x00, 0x82, 0x00, 0x04,
    0x00, 0x80, 0x77, 0x61, 0x79, 0x00, 0x80, 0x6D, 0x62, 0x6F, 0x6C, 0x00, 0x80, 0x66, 0x6F, 0x72,
    0x00
};

// --------------------------------------------------

// Db_Magic dictionary (18 entries):
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
//   most      -> mostly
//   que       -> queue
//   ion       -> ional
//   that      -> thank
//   somewhere -> somehow

#define DB_MAGIC_MIN_LENGTH 3 // "que"
#define DB_MAGIC_MAX_LENGTH 9 // "essential"
#define DB_MAGIC_DICTIONARY_SIZE 246

static const uint8_t db_magic_data[DB_MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x45, 0x19, 0x00, 0x07, 0x23, 0x00, 0x08, 0x3F, 0x00, 0x0F, 0x81, 0x00, 0x11, 0x8E, 0x00, 0x15,
    0xA3, 0x00, 0x17, 0xD8, 0x00, 0x1C, 0xED, 0x00, 0x00, 0x18, 0x12, 0x07, 0x00, 0x82, 0x61, 0x62,
    0x6C, 0x65, 0x00, 0x48, 0x2A, 0x00, 0x0F, 0x36, 0x00, 0x00, 0x16, 0x18, 0x09, 0x11, 0x12, 0x06,
    0x00, 0x82, 0x69, 0x6F, 0x6E, 0x00, 0x18, 0x12, 0x06, 0x00, 0x80, 0x6E, 0x27, 0x74, 0x00, 0x4A,
    0x4F, 0x00, 0x0F, 0x59, 0x00, 0x10, 0x64, 0x00, 0x15, 0x6E, 0x00, 0x18, 0x7B, 0x00, 0x00, 0x07,
    0x18, 0x0D, 0x00, 0x81, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x06, 0x1C, 0x06, 0x08, 0x15, 0x00, 0x81,
    0x69, 0x6E, 0x67, 0x00, 0x12, 0x16, 0x00, 0x80, 0x77, 0x68, 0x65, 0x72, 0x65, 0x00, 0x08, 0x0B,
    0x1A, 0x08, 0x10, 0x12, 0x16, 0x00, 0x85, 0x68, 0x6F, 0x77, 0x00, 0x14, 0x00, 0x80, 0x75, 0x65,
    0x00, 0x04, 0x0C, 0x17, 0x11, 0x08, 0x16, 0x16, 0x08, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x4C, 0x95,
    0x00, 0x12, 0x9D, 0x00, 0x00, 0x04, 0x0A, 0x04, 0x00, 0x80, 0x73, 0x74, 0x00, 0x0C, 0x00, 0x80,
    0x61, 0x6C, 0x00, 0x48, 0xAA, 0x00, 0x0F, 0xCF, 0x00, 0x00, 0x4B, 0xB1, 0x00, 0x19, 0xBA, 0x00,
    0x00, 0x17, 0x12, 0x00, 0x80, 0x77, 0x69, 0x73, 0x65, 0x00, 0x08, 0x00, 0xC0, 0x79, 0x74, 0x68,
    0x69, 0x6E, 0x67, 0x00, 0x11, 0x00, 0x80, 0x74, 0x68, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x00, 0x04,
    0x2C, 0x00, 0x80, 0x65, 0x61, 0x64, 0x79, 0x00, 0x44, 0xDF, 0x00, 0x16, 0xE6, 0x00, 0x00, 0x0B,
    0x17, 0x00, 0x81, 0x6E, 0x6B, 0x00, 0x12, 0x10, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x13, 0x12, 0x06,
    0x00, 0x80, 0x69, 0x6E, 0x67, 0x00
};

// --------------------------------------------------

// Db_Letter dictionary (29 entries):
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
//   →wh   -> whatever
//   →an   -> another
//   →ob   -> obvious
//   →in   -> inform
//   →sh   -> should
//   →af   -> after
//   →tn   -> think
//   →th   -> this
//   →b    -> before
//   →h    -> health
//   →f    -> first
//   →z    -> zone
//   q     -> qua

#define DB_LETTER_MIN_LENGTH 1 // "q"
#define DB_LETTER_MAX_LENGTH 5 // "→prob"
#define DB_LETTER_DICTIONARY_SIZE 336

static const uint8_t db_letter_data[DB_LETTER_DICTIONARY_SIZE] PROGMEM = {
    0x45, 0x1C, 0x00, 0x06, 0x4E, 0x00, 0x09, 0x57, 0x00, 0x0B, 0xA7, 0x00, 0x0F, 0xD3, 0x00, 0x11,
    0xDD, 0x00, 0x14, 0x3B, 0x01, 0x17, 0x3F, 0x01, 0x1D, 0x49, 0x01, 0x00, 0x52, 0x26, 0x00, 0x1C,
    0x3D, 0x00, 0x2C, 0x47, 0x00, 0x00, 0x55, 0x2D, 0x00, 0x2C, 0x36, 0x00, 0x00, 0x13, 0x2C, 0x00,
    0x80, 0x61, 0x62, 0x6C, 0x79, 0x00, 0x80, 0x76, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x08, 0x0E, 0x2C,
    0x00, 0x80, 0x6F, 0x61, 0x72, 0x64, 0x00, 0x80, 0x65, 0x66, 0x6F, 0x72, 0x65, 0x00, 0x08, 0x05,
    0x2C, 0x00, 0x80, 0x6F, 0x6D, 0x65, 0x00, 0x44, 0x6A, 0x00, 0x08, 0x71, 0x00, 0x0C, 0x7D, 0x00,
    0x12, 0x87, 0x00, 0x18, 0x93, 0x00, 0x2C, 0xA1, 0x00, 0x00, 0x2C, 0x00, 0x80, 0x74, 0x65, 0x72,
    0x00, 0x07, 0x2C, 0x00, 0x80, 0x69, 0x6E, 0x69, 0x74, 0x65, 0x6C, 0x79, 0x00, 0x07, 0x2C, 0x00,
    0x80, 0x66, 0x65, 0x72, 0x65, 0x6E, 0x00, 0x06, 0x2C, 0x00, 0x81, 0x6E, 0x66, 0x75, 0x73, 0x69,
    0x6E, 0x67, 0x00, 0x2C, 0x00, 0x81, 0x6E, 0x66, 0x6F, 0x72, 0x74, 0x75, 0x6E, 0x61, 0x74, 0x65,
    0x00, 0x80, 0x69, 0x72, 0x73, 0x74, 0x00, 0x56, 0xB4, 0x00, 0x17, 0xBC, 0x00, 0x1A, 0xC2, 0x00,
    0x2C, 0xCC, 0x00, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0x2C, 0x00, 0x80, 0x69,
    0x73, 0x00, 0x2C, 0x00, 0x80, 0x61, 0x74, 0x65, 0x76, 0x65, 0x72, 0x00, 0x80, 0x65, 0x61, 0x6C,
    0x74, 0x68, 0x00, 0x08, 0x05, 0x2C, 0x00, 0x80, 0x69, 0x65, 0x76, 0x65, 0x00, 0x44, 0xF0, 0x00,
    0x08, 0xFE, 0x00, 0x0C, 0x12, 0x01, 0x12, 0x1F, 0x01, 0x17, 0x2E, 0x01, 0x18, 0x36, 0x01, 0x00,
    0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x74, 0x68, 0x65, 0x72, 0x00, 0x4A, 0x05,
    0x01, 0x10, 0x0D, 0x01, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x72, 0x61, 0x6C, 0x00, 0x2C, 0x00, 0x80,
    0x75, 0x00, 0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x66, 0x6F, 0x72, 0x6D, 0x00, 0xC0,
    0x69, 0x6F, 0x6E, 0x00, 0x06, 0x2C, 0x00, 0x80, 0x73, 0x69, 0x64, 0x65, 0x72, 0x00, 0x2C, 0x00,
    0x81, 0x68, 0x69, 0x6E, 0x6B, 0x00, 0x80, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x75, 0x61, 0x00, 0x08,
    0x05, 0x2C, 0x00, 0x80, 0x77, 0x65, 0x65, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x6E, 0x65, 0x00
};
