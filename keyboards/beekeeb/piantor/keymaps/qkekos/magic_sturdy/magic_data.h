#pragma once

#define MAX_CONTEXT_LENGTH 10

// --------------------------------------------------

// Magic dictionary (110 entries):
//   never -> nevertheless
//   every -> everything
//   ocrac -> ocracy
//   remac -> remacy
//   prob  -> probably
//   with  -> without
//   olic  -> olicy
//   urac  -> uracy
//   rmac  -> rmacy
//   :rec  -> recy
//   :an   -> another
//   :ex   -> example
//   :ar   -> around
//   :in   -> inform
//   :or   -> order
//   :ti   -> time
//   :ed   -> edge
//   :se   -> seen
//   :al   -> alr
//   :us   -> use
//   unf   -> unfortunate
//   def   -> definitely
//   hil   -> hilarious
//   ess   -> essential
//   con   -> consider
//   alt   -> although
//   any   -> anything
//   dif   -> differen
//   pos   -> position
//   bel   -> believe
//   bet   -> between
//   var   -> various
//   ser   -> serious
//   gen   -> general
//   pro   -> problem
//   bec   -> become
//   bud   -> budget
//   col   -> column
//   tho   -> though
//   num   -> number
//   rid   -> ridge
//   red   -> redge
//   jud   -> judge
//   led   -> ledge
//   vac   -> vacy
//   men   -> menu
//   gac   -> gacy
//   :t    -> that
//   :e    -> e.g.
//   pr    -> previous
//   th    -> through
//   ob    -> obvious
//   pe    -> people
//   pu    -> public
//   up    -> update
//   sh    -> should
//   te    -> tement
//   sy    -> system
//   va    -> value
//   ot    -> other
//   co    -> could
//   ag    -> again
//   la    -> large
//   pa    -> page
//   mo    -> most
//   mu    -> must
//   vi    -> view
//   ve    -> very
//   so    -> some
//   do    -> doub
//   li    -> list
//   be    -> been
//   pl    -> ply
//   mp    -> mpl
//   ma    -> mao
//   oc    -> ock
//   we    -> web
//   wa    -> way
//   uc    -> uck
//   cy    -> cyc
//   ac    -> ack
//   da    -> day
//   ic    -> ick
//   ec    -> eck
//   :     -> the
//   b     -> before
//   t     -> tment
//   w     -> which
//   f     -> first
//   n     -> nion
//   m     -> ment
//   j     -> just
//   z     -> zone
//   i     -> ion
//   v     -> ver
//   q     -> que
//   s     -> sk
//   r     -> rl
//   d     -> dy
//   e     -> eu
//   a     -> ab
//   l     -> lk
//   c     -> cy
//   p     -> py
//   y     -> yp
//   k     -> ks
//   g     -> gy
//   o     -> oa
//   u     -> ue
//   x     -> xt

#define MAGIC_MIN_LENGTH 1 // ":"
#define MAGIC_MAX_LENGTH 5 // "never"
#define MAGIC_DICTIONARY_SIZE 954

static const uint8_t magic_data[MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x6C, 0x52, 0x00, 0x04, 0x57, 0x00, 0x05, 0x84, 0x00, 0x06, 0x9D, 0x00, 0x07, 0x07, 0x01, 0x08,
    0x40, 0x01, 0x09, 0x7B, 0x01, 0x0A, 0xAB, 0x01, 0x0B, 0xB5, 0x01, 0x0C, 0xD1, 0x01, 0x0D, 0xED,
    0x01, 0x0E, 0xF2, 0x01, 0x0F, 0xF5, 0x01, 0x10, 0x29, 0x02, 0x11, 0x36, 0x02, 0x12, 0x72, 0x02,
    0x13, 0xA8, 0x02, 0x14, 0xBB, 0x02, 0x15, 0xBF, 0x02, 0x16, 0x0A, 0x03, 0x17, 0x2F, 0x03, 0x18,
    0x5D, 0x03, 0x19, 0x71, 0x03, 0x1A, 0x75, 0x03, 0x1B, 0x7B, 0x03, 0x1C, 0x88, 0x03, 0x1D, 0xB5,
    0x03, 0x00, 0x80, 0x74, 0x68, 0x65, 0x00, 0xC0, 0x62, 0x00, 0x47, 0x6D, 0x00, 0x0F, 0x70, 0x00,
    0x10, 0x75, 0x00, 0x13, 0x78, 0x00, 0x19, 0x7C, 0x00, 0x1A, 0x81, 0x00, 0x00, 0x80, 0x79, 0x00,
    0x80, 0x72, 0x67, 0x65, 0x00, 0x80, 0x6F, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x6C, 0x75, 0x65,
    0x00, 0x80, 0x79, 0x00, 0xC0, 0x65, 0x66, 0x6F, 0x72, 0x65, 0x00, 0x12, 0x00, 0xC0, 0x76, 0x69,
    0x6F, 0x75, 0x73, 0x00, 0x15, 0x13, 0x00, 0x80, 0x61, 0x62, 0x6C, 0x79, 0x00, 0xC0, 0x79, 0x00,
    0x44, 0xB0, 0x00, 0x08, 0xE4, 0x00, 0x0C, 0xF8, 0x00, 0x12, 0x01, 0x01, 0x18, 0x04, 0x01, 0x00,
    0xC0, 0x6B, 0x00, 0x4A, 0xC0, 0x00, 0x10, 0xC3, 0x00, 0x15, 0xD2, 0x00, 0x19, 0xE1, 0x00, 0x00,
    0x80, 0x79, 0x00, 0x48, 0xCA, 0x00, 0x15, 0xCF, 0x00, 0x00, 0x15, 0x00, 0x80, 0x79, 0x00, 0x80,
    0x79, 0x00, 0x46, 0xD9, 0x00, 0x18, 0xDE, 0x00, 0x00, 0x12, 0x00, 0x80, 0x79, 0x00, 0x80, 0x79,
    0x00, 0x80, 0x79, 0x00, 0xC0, 0x6B, 0x00, 0x45, 0xEE, 0x00, 0x15, 0xF3, 0x00, 0x00, 0x80, 0x6F,
    0x6D, 0x65, 0x00, 0x2C, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x6B, 0x00, 0x0F, 0x12, 0x00, 0x80, 0x79,
    0x00, 0x80, 0x6B, 0x00, 0x80, 0x6B, 0x00, 0xC0, 0x79, 0x00, 0x48, 0x14, 0x01, 0x0C, 0x2A, 0x01,
    0x18, 0x30, 0x01, 0x00, 0x6C, 0x1E, 0x01, 0x0F, 0x22, 0x01, 0x15, 0x26, 0x01, 0x00, 0x80, 0x67,
    0x65, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x67, 0x65, 0x00, 0x15, 0x00, 0x80, 0x67, 0x65, 0x00,
    0x45, 0x37, 0x01, 0x0D, 0x3C, 0x01, 0x00, 0x80, 0x67, 0x65, 0x74, 0x00, 0x80, 0x67, 0x65, 0x00,
    0xC0, 0x75, 0x00, 0x6C, 0x59, 0x01, 0x05, 0x5E, 0x01, 0x13, 0x62, 0x01, 0x16, 0x68, 0x01, 0x17,
    0x6E, 0x01, 0x19, 0x74, 0x01, 0x1A, 0x78, 0x01, 0x00, 0x80, 0x2E, 0x67, 0x2E, 0x00, 0x80, 0x65,
    0x6E, 0x00, 0x80, 0x6F, 0x70, 0x6C, 0x65, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x6E, 0x00, 0x80, 0x6D,
    0x65, 0x6E, 0x74, 0x00, 0x80, 0x72, 0x79, 0x00, 0x80, 0x62, 0x00, 0xC0, 0x69, 0x72, 0x73, 0x74,
    0x00, 0x48, 0x8B, 0x01, 0x0C, 0x96, 0x01, 0x11, 0x9F, 0x01, 0x00, 0x07, 0x00, 0x80, 0x69, 0x6E,
    0x69, 0x74, 0x65, 0x6C, 0x79, 0x00, 0x07, 0x00, 0x80, 0x66, 0x65, 0x72, 0x65, 0x6E, 0x00, 0x18,
    0x00, 0x80, 0x6F, 0x72, 0x74, 0x75, 0x6E, 0x61, 0x74, 0x65, 0x00, 0xC0, 0x79, 0x00, 0x04, 0x00,
    0x80, 0x61, 0x69, 0x6E, 0x00, 0x56, 0xBC, 0x01, 0x17, 0xC2, 0x01, 0x00, 0x80, 0x6F, 0x75, 0x6C,
    0x64, 0x00, 0xC0, 0x72, 0x6F, 0x75, 0x67, 0x68, 0x00, 0x0C, 0x1A, 0x00, 0x80, 0x6F, 0x75, 0x74,
    0x00, 0xC0, 0x6F, 0x6E, 0x00, 0x4F, 0xDF, 0x01, 0x17, 0xE3, 0x01, 0x19, 0xE9, 0x01, 0x00, 0x80,
    0x73, 0x74, 0x00, 0x2C, 0x00, 0x80, 0x6D, 0x65, 0x00, 0x80, 0x65, 0x77, 0x00, 0x80, 0x75, 0x73,
    0x74, 0x00, 0x80, 0x73, 0x00, 0xC0, 0x6B, 0x00, 0x44, 0x08, 0x02, 0x08, 0x0D, 0x02, 0x0C, 0x15,
    0x02, 0x12, 0x1F, 0x02, 0x13, 0x26, 0x02, 0x00, 0x2C, 0x00, 0x80, 0x72, 0x00, 0x05, 0x00, 0x80,
    0x69, 0x65, 0x76, 0x65, 0x00, 0x0B, 0x00, 0x80, 0x61, 0x72, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x06,
    0x00, 0x80, 0x75, 0x6D, 0x6E, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x65, 0x6E, 0x74, 0x00, 0x18, 0x11,
    0x00, 0x80, 0x62, 0x65, 0x72, 0x00, 0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x44, 0x48, 0x02, 0x08, 0x51,
    0x02, 0x0C, 0x61, 0x02, 0x12, 0x69, 0x02, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x74, 0x68, 0x65, 0x72,
    0x00, 0x4A, 0x58, 0x02, 0x10, 0x5E, 0x02, 0x00, 0x80, 0x65, 0x72, 0x61, 0x6C, 0x00, 0x80, 0x75,
    0x00, 0x2C, 0x00, 0x80, 0x66, 0x6F, 0x72, 0x6D, 0x00, 0x06, 0x00, 0x80, 0x73, 0x69, 0x64, 0x65,
    0x72, 0x00, 0xC0, 0x61, 0x00, 0x46, 0x88, 0x02, 0x07, 0x8D, 0x02, 0x0B, 0x91, 0x02, 0x10, 0x98,
    0x02, 0x15, 0x9C, 0x02, 0x16, 0xA4, 0x02, 0x00, 0x80, 0x75, 0x6C, 0x64, 0x00, 0x80, 0x75, 0x62,
    0x00, 0x17, 0x00, 0x80, 0x75, 0x67, 0x68, 0x00, 0x80, 0x73, 0x74, 0x00, 0x13, 0x00, 0x80, 0x62,
    0x6C, 0x65, 0x6D, 0x00, 0x80, 0x6D, 0x65, 0x00, 0xC0, 0x79, 0x00, 0x50, 0xB2, 0x02, 0x18, 0xB5,
    0x02, 0x00, 0x80, 0x6C, 0x00, 0x80, 0x64, 0x61, 0x74, 0x65, 0x00, 0x80, 0x75, 0x65, 0x00, 0xC0,
    0x6C, 0x00, 0x44, 0xCF, 0x02, 0x08, 0xE2, 0x02, 0x12, 0xFB, 0x02, 0x13, 0x02, 0x03, 0x00, 0x6C,
    0xD6, 0x02, 0x19, 0xDC, 0x02, 0x00, 0x80, 0x6F, 0x75, 0x6E, 0x64, 0x00, 0x80, 0x69, 0x6F, 0x75,
    0x73, 0x00, 0x56, 0xE9, 0x02, 0x19, 0xEF, 0x02, 0x00, 0x80, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x08,
    0x11, 0x00, 0x80, 0x74, 0x68, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x00, 0x2C, 0x00, 0x80, 0x64, 0x65,
    0x72, 0x00, 0x80, 0x65, 0x76, 0x69, 0x6F, 0x75, 0x73, 0x00, 0xC0, 0x6B, 0x00, 0x52, 0x17, 0x03,
    0x16, 0x20, 0x03, 0x18, 0x2A, 0x03, 0x00, 0x13, 0x00, 0x80, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x00,
    0x08, 0x00, 0x80, 0x65, 0x6E, 0x74, 0x69, 0x61, 0x6C, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x00, 0xC0,
    0x6D, 0x65, 0x6E, 0x74, 0x00, 0x6C, 0x42, 0x03, 0x08, 0x47, 0x03, 0x0F, 0x4F, 0x03, 0x12, 0x58,
    0x03, 0x00, 0x80, 0x68, 0x61, 0x74, 0x00, 0x05, 0x00, 0x80, 0x77, 0x65, 0x65, 0x6E, 0x00, 0x04,
    0x00, 0x80, 0x68, 0x6F, 0x75, 0x67, 0x68, 0x00, 0x80, 0x68, 0x65, 0x72, 0x00, 0xC0, 0x65, 0x00,
    0x50, 0x67, 0x03, 0x13, 0x6B, 0x03, 0x00, 0x80, 0x73, 0x74, 0x00, 0x80, 0x62, 0x6C, 0x69, 0x63,
    0x00, 0x80, 0x65, 0x72, 0x00, 0x80, 0x68, 0x69, 0x63, 0x68, 0x00, 0xC0, 0x74, 0x00, 0x08, 0x2C,
    0x00, 0x80, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x00, 0xC0, 0x70, 0x00, 0x46, 0x98, 0x03, 0x11, 0x9B,
    0x03, 0x15, 0xA4, 0x03, 0x16, 0xAF, 0x03, 0x00, 0x80, 0x63, 0x00, 0x04, 0x00, 0x80, 0x74, 0x68,
    0x69, 0x6E, 0x67, 0x00, 0x08, 0x19, 0x08, 0x00, 0x80, 0x74, 0x68, 0x69, 0x6E, 0x67, 0x00, 0x80,
    0x73, 0x74, 0x65, 0x6D, 0x00, 0x80, 0x6F, 0x6E, 0x65, 0x00
};

// --------------------------------------------------

// Repeat dictionary (46 entries):
//   :sti      -> still
//   some      -> something
//   impl      -> implement
//   poss      -> possible
//   hand      -> handy
//   :vi       -> vision
//   :ab       -> about
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
//   :b        -> because
//   :t        -> than
//   :i        -> ii
//   fu        -> function
//   sc        -> school
//   mu        -> music
//   ba        -> basic
//   ex        -> exact
//   fr        -> from
//   ma        -> make
//   la        -> last
//   .         -> .com
//   :         -> for
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
#define REPEAT_DICTIONARY_SIZE 508

static const uint8_t repeat_data[REPEAT_DICTIONARY_SIZE] PROGMEM = {
    0x77, 0x49, 0x00, 0x2C, 0x4E, 0x00, 0x04, 0x53, 0x00, 0x05, 0x6A, 0x00, 0x06, 0x80, 0x00, 0x07,
    0xA3, 0x00, 0x08, 0xAA, 0x00, 0x09, 0xB5, 0x00, 0x0C, 0xCE, 0x00, 0x0D, 0xFC, 0x00, 0x0E, 0x01,
    0x01, 0x0F, 0x0A, 0x01, 0x11, 0x15, 0x01, 0x12, 0x24, 0x01, 0x13, 0x2D, 0x01, 0x14, 0x56, 0x01,
    0x15, 0x5A, 0x01, 0x16, 0x60, 0x01, 0x17, 0x78, 0x01, 0x18, 0xAB, 0x01, 0x19, 0xC9, 0x01, 0x1A,
    0xD6, 0x01, 0x1B, 0xE5, 0x01, 0x1C, 0xF0, 0x01, 0x00, 0x80, 0x63, 0x6F, 0x6D, 0x00, 0x80, 0x66,
    0x6F, 0x72, 0x00, 0x45, 0x5D, 0x00, 0x0F, 0x62, 0x00, 0x10, 0x66, 0x00, 0x00, 0x80, 0x73, 0x69,
    0x63, 0x00, 0x80, 0x73, 0x74, 0x00, 0x80, 0x6B, 0x65, 0x00, 0x6C, 0x71, 0x00, 0x04, 0x79, 0x00,
    0x00, 0x80, 0x65, 0x63, 0x61, 0x75, 0x73, 0x65, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x75, 0x74, 0x00,
    0x4C, 0x8A, 0x00, 0x11, 0x94, 0x00, 0x16, 0x9D, 0x00, 0x00, 0x16, 0x04, 0x05, 0x00, 0x80, 0x61,
    0x6C, 0x6C, 0x79, 0x00, 0x0C, 0x00, 0x80, 0x72, 0x65, 0x61, 0x73, 0x65, 0x00, 0x80, 0x68, 0x6F,
    0x6F, 0x6C, 0x00, 0x11, 0x04, 0x0B, 0x00, 0x80, 0x79, 0x00, 0x10, 0x12, 0x16, 0x00, 0x80, 0x74,
    0x68, 0x69, 0x6E, 0x67, 0x00, 0x48, 0xBC, 0x00, 0x0C, 0xC4, 0x00, 0x00, 0x07, 0x00, 0x80, 0x61,
    0x75, 0x6C, 0x74, 0x00, 0x07, 0x00, 0x80, 0x66, 0x69, 0x63, 0x75, 0x6C, 0x74, 0x00, 0xC0, 0x6E,
    0x67, 0x00, 0x6C, 0xDF, 0x00, 0x11, 0xE2, 0x00, 0x17, 0xED, 0x00, 0x19, 0xF4, 0x00, 0x00, 0x80,
    0x69, 0x00, 0x18, 0x00, 0x80, 0x76, 0x65, 0x72, 0x73, 0x69, 0x74, 0x79, 0x00, 0x16, 0x2C, 0x00,
    0x80, 0x6C, 0x6C, 0x00, 0x2C, 0x00, 0x80, 0x73, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x6F, 0x69, 0x6E,
    0x00, 0x1A, 0x04, 0x00, 0x80, 0x77, 0x61, 0x72, 0x64, 0x00, 0x13, 0x10, 0x0C, 0x00, 0x80, 0x65,
    0x6D, 0x65, 0x6E, 0x74, 0x00, 0x12, 0x0C, 0x17, 0x06, 0x11, 0x18, 0x09, 0x00, 0x80, 0x61, 0x6C,
    0x69, 0x74, 0x79, 0x00, 0x15, 0x13, 0x00, 0x80, 0x67, 0x72, 0x61, 0x6D, 0x00, 0x44, 0x37, 0x01,
    0x10, 0x3F, 0x01, 0x12, 0x4A, 0x01, 0x00, 0x06, 0x00, 0x80, 0x61, 0x62, 0x6C, 0x65, 0x00, 0x0C,
    0x00, 0x80, 0x6F, 0x73, 0x73, 0x69, 0x62, 0x6C, 0x65, 0x00, 0x0F, 0x08, 0x19, 0x08, 0x07, 0x00,
    0x80, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x80, 0x75, 0x69, 0x00, 0x09, 0x00, 0x80, 0x6F, 0x6D, 0x00,
    0x51, 0x67, 0x01, 0x16, 0x6F, 0x01, 0x00, 0x0C, 0x00, 0x80, 0x74, 0x65, 0x61, 0x64, 0x00, 0x12,
    0x13, 0x00, 0x80, 0x69, 0x62, 0x6C, 0x65, 0x00, 0x6C, 0x82, 0x01, 0x06, 0x87, 0x01, 0x11, 0x8F,
    0x01, 0x00, 0x80, 0x68, 0x61, 0x6E, 0x00, 0x04, 0x1B, 0x08, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x48,
    0x96, 0x01, 0x0C, 0xA4, 0x01, 0x00, 0x10, 0x08, 0x0F, 0x13, 0x10, 0x0C, 0x00, 0x80, 0x61, 0x74,
    0x69, 0x6F, 0x6E, 0x00, 0x80, 0x65, 0x72, 0x65, 0x73, 0x74, 0x00, 0x49, 0xB5, 0x01, 0x10, 0xBD,
    0x01, 0x12, 0xC2, 0x01, 0x00, 0x80, 0x6E, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x80, 0x73, 0x69,
    0x63, 0x00, 0x06, 0x00, 0x80, 0x72, 0x73, 0x65, 0x00, 0xC0, 0x65, 0x72, 0x00, 0x08, 0x07, 0x00,
    0x80, 0x65, 0x6C, 0x6F, 0x70, 0x00, 0xC0, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0x12, 0x0B, 0x00, 0x80,
    0x65, 0x76, 0x65, 0x72, 0x00, 0xC0, 0x65, 0x73, 0x00, 0x08, 0x00, 0x80, 0x61, 0x63, 0x74, 0x00,
    0xC0, 0x6F, 0x75, 0x00, 0x11, 0x04, 0x00, 0x80, 0x77, 0x61, 0x79, 0x00
};

// --------------------------------------------------

// Db_Magic dictionary (7 entries):
//   :alr      -> already
//   never     -> nevertheless
//   essential -> essentially
//   some      -> somewhere
//   judge     -> judgment
//   again     -> against
//   doub      -> doable

#define DB_MAGIC_MIN_LENGTH 4 // ":alr"
#define DB_MAGIC_MAX_LENGTH 9 // "essential"
#define DB_MAGIC_DICTIONARY_SIZE 104

static const uint8_t db_magic_data[DB_MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x45, 0x10, 0x00, 0x08, 0x1A, 0x00, 0x0F, 0x35, 0x00, 0x11, 0x42, 0x00, 0x15, 0x4B, 0x00, 0x00,
    0x18, 0x12, 0x07, 0x00, 0x82, 0x61, 0x62, 0x6C, 0x65, 0x00, 0x4A, 0x21, 0x00, 0x10, 0x2B, 0x00,
    0x00, 0x07, 0x18, 0x0D, 0x00, 0x81, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x12, 0x16, 0x00, 0x80, 0x77,
    0x68, 0x65, 0x72, 0x65, 0x00, 0x04, 0x0C, 0x17, 0x11, 0x08, 0x16, 0x16, 0x08, 0x00, 0x80, 0x6C,
    0x79, 0x00, 0x0C, 0x04, 0x0A, 0x04, 0x00, 0x80, 0x73, 0x74, 0x00, 0x48, 0x52, 0x00, 0x0F, 0x5F,
    0x00, 0x00, 0x19, 0x08, 0x11, 0x00, 0x80, 0x74, 0x68, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x00, 0x04,
    0x2C, 0x00, 0x80, 0x65, 0x61, 0x64, 0x79, 0x00
};
