#pragma once

#define MAX_CONTEXT_LENGTH 15

static const uint16_t trie_symbols[] = {55};
#define TRIE_SYMBOLS_COUNT 1

// --------------------------------------------------

// Magic dictionary (114 entries):
//   oc         -> ock
//   ac         -> ack
//   uc         -> uck
//   ec         -> eck
//   ic         -> ick
//   →implement -> implementation
//   →democrac  -> democracy
//   →supremac  -> supremacy
//   →accurac   -> accuracy
//   →pharmac   -> pharmacy
//   →privac    -> privacy
//   →polic     -> policy
//   →lega      -> legacy
//   →unre      -> unreasonable
//   →algo      -> algorithm
//   →undo      -> undoable
//   →reor      -> reorder
//   →rec       -> recycle
//   →enc       -> encrypt
//   →esp       -> especially
//   →exp       -> experience
//   →hil       -> hilarious
//   →ess       -> essential
//   →sit       -> situation
//   →alt       -> although
//   →any       -> anything
//   →pos       -> position
//   →cof       -> confused
//   →res       -> restrict
//   →inc       -> increase
//   →var       -> various
//   →ser       -> serious
//   →pro       -> problem
//   →key       -> keycode
//   →spe       -> special
//   →bud       -> budget
//   →col       -> column
//   →tho       -> though
//   →num       -> number
//   →cri       -> cringe
//   →exc       -> except
//   →pay       -> paypal
//   →red       -> redge
//   →jud       -> judge
//   →led       -> ledge
//   →nex       -> next
//   ion        -> ional
//   rid        -> ridge
//   tex        -> text
//   →di        -> dictionary
//   →pr        -> previous
//   →ex        -> example
//   →pe        -> people
//   →pu        -> public
//   →up        -> update
//   →sy        -> system
//   →fi        -> finger
//   →ar        -> around
//   →si        -> singer
//   →gi        -> ginger
//   →by        -> bypass
//   →re        -> reason
//   →ot        -> other
//   →co        -> could
//   →ag        -> again
//   →la        -> large
//   →po        -> point
//   →or        -> order
//   →st        -> start
//   →pa        -> page
//   →mo        -> most
//   →mu        -> must
//   →vi        -> view
//   →so        -> some
//   →do        -> doub
//   →li        -> list
//   →be        -> been
//   →ti        -> time
//   →ed        -> edge
//   →se        -> seen
//   →al        -> alr
//   →us        -> use
//   →ty        -> typ
//   →we        -> web
//   →wa        -> way
//   te         -> tement
//   da         -> day
//   ma         -> mao
//   mp         -> mpl
//   pl         -> ply
//   →w         -> which
//   →t         -> that
//   →j         -> just
//   →f         -> fine
//   →          -> the
//   t          -> tment
//   m          -> ment
//   y          -> ying
//   i          -> ion
//   v          -> ver
//   q          -> que
//   s          -> sk
//   r          -> rl
//   d          -> dy
//   e          -> eu
//   a          -> ab
//   l          -> lk
//   c          -> cy
//   p          -> py
//   k          -> ks
//   g          -> gy
//   o          -> oa
//   u          -> ue
//   x          -> xt

#define MAGIC_MIN_LENGTH 1 // "→"
#define MAGIC_MAX_LENGTH 10 // "→implement"
#define MAGIC_DICTIONARY_SIZE 1147

static const uint8_t magic_data[MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x44, 0x49, 0x00, 0x06, 0x7F, 0x00, 0x07, 0x1A, 0x01, 0x08, 0x5B, 0x01, 0x09, 0xB7, 0x01, 0x0A,
    0xCE, 0x01, 0x0C, 0xD9, 0x01, 0x0D, 0x34, 0x02, 0x0E, 0x3B, 0x02, 0x0F, 0x3E, 0x02, 0x10, 0x69,
    0x02, 0x11, 0x77, 0x02, 0x12, 0x7E, 0x02, 0x13, 0xE4, 0x02, 0x14, 0x17, 0x03, 0x15, 0x1B, 0x03,
    0x16, 0x67, 0x03, 0x17, 0x9B, 0x03, 0x18, 0xEC, 0x03, 0x19, 0x04, 0x04, 0x1A, 0x08, 0x04, 0x1B,
    0x10, 0x04, 0x1C, 0x2E, 0x04, 0x2C, 0x76, 0x04, 0x00, 0xC0, 0x62, 0x00, 0x47, 0x5F, 0x00, 0x0A,
    0x62, 0x00, 0x0F, 0x6A, 0x00, 0x10, 0x71, 0x00, 0x13, 0x74, 0x00, 0x1A, 0x7A, 0x00, 0x00, 0x80,
    0x79, 0x00, 0x08, 0x0F, 0x2C, 0x00, 0x80, 0x63, 0x79, 0x00, 0x2C, 0x00, 0x80, 0x72, 0x67, 0x65,
    0x00, 0x80, 0x6F, 0x00, 0x2C, 0x00, 0x80, 0x67, 0x65, 0x00, 0x2C, 0x00, 0x80, 0x79, 0x00, 0xC0,
    0x79, 0x00, 0x44, 0x98, 0x00, 0x08, 0xDD, 0x00, 0x0C, 0xE9, 0x00, 0x11, 0xF4, 0x00, 0x12, 0x0C,
    0x01, 0x18, 0x0F, 0x01, 0x1B, 0x12, 0x01, 0x00, 0xC0, 0x6B, 0x00, 0x50, 0xA5, 0x00, 0x15, 0xBD,
    0x00, 0x19, 0xD5, 0x00, 0x00, 0x48, 0xAC, 0x00, 0x15, 0xB5, 0x00, 0x00, 0x15, 0x13, 0x18, 0x16,
    0x2C, 0x00, 0x80, 0x79, 0x00, 0x04, 0x0B, 0x13, 0x2C, 0x00, 0x80, 0x79, 0x00, 0x46, 0xC4, 0x00,
    0x18, 0xCD, 0x00, 0x00, 0x12, 0x10, 0x08, 0x07, 0x2C, 0x00, 0x80, 0x79, 0x00, 0x06, 0x06, 0x04,
    0x2C, 0x00, 0x80, 0x79, 0x00, 0x0C, 0x15, 0x13, 0x2C, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x6B, 0x00,
    0x15, 0x2C, 0x00, 0x80, 0x79, 0x63, 0x6C, 0x65, 0x00, 0xC0, 0x6B, 0x00, 0x0F, 0x12, 0x13, 0x2C,
    0x00, 0x80, 0x79, 0x00, 0x48, 0xFB, 0x00, 0x0C, 0x03, 0x01, 0x00, 0x2C, 0x00, 0x80, 0x72, 0x79,
    0x70, 0x74, 0x00, 0x2C, 0x00, 0x80, 0x72, 0x65, 0x61, 0x73, 0x65, 0x00, 0x80, 0x6B, 0x00, 0x80,
    0x6B, 0x00, 0x08, 0x2C, 0x00, 0x80, 0x65, 0x70, 0x74, 0x00, 0xC0, 0x79, 0x00, 0x48, 0x27, 0x01,
    0x0C, 0x41, 0x01, 0x18, 0x47, 0x01, 0x00, 0x4F, 0x31, 0x01, 0x15, 0x37, 0x01, 0x2C, 0x3D, 0x01,
    0x00, 0x2C, 0x00, 0x80, 0x67, 0x65, 0x00, 0x2C, 0x00, 0x80, 0x67, 0x65, 0x00, 0x80, 0x67, 0x65,
    0x00, 0x15, 0x00, 0x80, 0x67, 0x65, 0x00, 0x45, 0x4E, 0x01, 0x0D, 0x55, 0x01, 0x00, 0x2C, 0x00,
    0x80, 0x67, 0x65, 0x74, 0x00, 0x2C, 0x00, 0x80, 0x67, 0x65, 0x00, 0xC0, 0x75, 0x00, 0x45, 0x71,
    0x01, 0x13, 0x77, 0x01, 0x15, 0x8C, 0x01, 0x16, 0xA6, 0x01, 0x17, 0xAC, 0x01, 0x1A, 0xB2, 0x01,
    0x00, 0x2C, 0x00, 0x80, 0x65, 0x6E, 0x00, 0x56, 0x7E, 0x01, 0x2C, 0x86, 0x01, 0x00, 0x2C, 0x00,
    0x80, 0x63, 0x69, 0x61, 0x6C, 0x00, 0x80, 0x6F, 0x70, 0x6C, 0x65, 0x00, 0x51, 0x93, 0x01, 0x2C,
    0xA0, 0x01, 0x00, 0x18, 0x2C, 0x00, 0x80, 0x61, 0x73, 0x6F, 0x6E, 0x61, 0x62, 0x6C, 0x65, 0x00,
    0x80, 0x61, 0x73, 0x6F, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x6E, 0x00, 0x80, 0x6D, 0x65, 0x6E,
    0x74, 0x00, 0x2C, 0x00, 0x80, 0x62, 0x00, 0x52, 0xBE, 0x01, 0x2C, 0xC9, 0x01, 0x00, 0x06, 0x2C,
    0x00, 0x81, 0x6E, 0x66, 0x75, 0x73, 0x65, 0x64, 0x00, 0x80, 0x69, 0x6E, 0x65, 0x00, 0xC0, 0x79,
    0x00, 0x04, 0x2C, 0x00, 0x80, 0x61, 0x69, 0x6E, 0x00, 0xC0, 0x6F, 0x6E, 0x00, 0x47, 0xF6, 0x01,
    0x09, 0x02, 0x02, 0x0A, 0x0A, 0x02, 0x0F, 0x12, 0x02, 0x15, 0x18, 0x02, 0x16, 0x20, 0x02, 0x17,
    0x28, 0x02, 0x19, 0x2E, 0x02, 0x00, 0x2C, 0x00, 0x80, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x61, 0x72,
    0x79, 0x00, 0x2C, 0x00, 0x80, 0x6E, 0x67, 0x65, 0x72, 0x00, 0x2C, 0x00, 0x80, 0x6E, 0x67, 0x65,
    0x72, 0x00, 0x2C, 0x00, 0x80, 0x73, 0x74, 0x00, 0x06, 0x2C, 0x00, 0x80, 0x6E, 0x67, 0x65, 0x00,
    0x2C, 0x00, 0x80, 0x6E, 0x67, 0x65, 0x72, 0x00, 0x2C, 0x00, 0x80, 0x6D, 0x65, 0x00, 0x2C, 0x00,
    0x80, 0x65, 0x77, 0x00, 0x2C, 0x00, 0x80, 0x75, 0x73, 0x74, 0x00, 0x80, 0x73, 0x00, 0xC0, 0x6B,
    0x00, 0x44, 0x4E, 0x02, 0x0C, 0x53, 0x02, 0x12, 0x5E, 0x02, 0x13, 0x66, 0x02, 0x00, 0x2C, 0x00,
    0x80, 0x72, 0x00, 0x0B, 0x2C, 0x00, 0x80, 0x61, 0x72, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x06, 0x2C,
    0x00, 0x80, 0x75, 0x6D, 0x6E, 0x00, 0x80, 0x79, 0x00, 0xC0, 0x65, 0x6E, 0x74, 0x00, 0x18, 0x11,
    0x2C, 0x00, 0x80, 0x62, 0x65, 0x72, 0x00, 0x12, 0x0C, 0x00, 0x80, 0x61, 0x6C, 0x00, 0xC0, 0x61,
    0x00, 0x46, 0x9A, 0x02, 0x07, 0xA1, 0x02, 0x0A, 0xB5, 0x02, 0x0B, 0xC0, 0x02, 0x10, 0xC8, 0x02,
    0x13, 0xCE, 0x02, 0x15, 0xD5, 0x02, 0x16, 0xDE, 0x02, 0x00, 0x2C, 0x00, 0x80, 0x75, 0x6C, 0x64,
    0x00, 0x51, 0xA8, 0x02, 0x2C, 0xB1, 0x02, 0x00, 0x18, 0x2C, 0x00, 0x80, 0x61, 0x62, 0x6C, 0x65,
    0x00, 0x80, 0x75, 0x62, 0x00, 0x0F, 0x04, 0x2C, 0x00, 0x80, 0x72, 0x69, 0x74, 0x68, 0x6D, 0x00,
    0x17, 0x2C, 0x00, 0x80, 0x75, 0x67, 0x68, 0x00, 0x2C, 0x00, 0x80, 0x73, 0x74, 0x00, 0x2C, 0x00,
    0x80, 0x69, 0x6E, 0x74, 0x00, 0x13, 0x2C, 0x00, 0x80, 0x62, 0x6C, 0x65, 0x6D, 0x00, 0x2C, 0x00,
    0x80, 0x6D, 0x65, 0x00, 0xC0, 0x79, 0x00, 0x50, 0xF4, 0x02, 0x16, 0xF7, 0x02, 0x18, 0x03, 0x03,
    0x1B, 0x0B, 0x03, 0x00, 0x80, 0x6C, 0x00, 0x08, 0x2C, 0x00, 0x80, 0x65, 0x63, 0x69, 0x61, 0x6C,
    0x6C, 0x79, 0x00, 0x2C, 0x00, 0x80, 0x64, 0x61, 0x74, 0x65, 0x00, 0x08, 0x2C, 0x00, 0x80, 0x65,
    0x72, 0x69, 0x65, 0x6E, 0x63, 0x65, 0x00, 0x80, 0x75, 0x65, 0x00, 0xC0, 0x6C, 0x00, 0x44, 0x2B,
    0x03, 0x08, 0x40, 0x03, 0x12, 0x49, 0x03, 0x13, 0x5D, 0x03, 0x00, 0x59, 0x32, 0x03, 0x2C, 0x3A,
    0x03, 0x00, 0x2C, 0x00, 0x80, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x80, 0x6F, 0x75, 0x6E, 0x64, 0x00,
    0x16, 0x2C, 0x00, 0x80, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x48, 0x50, 0x03, 0x2C, 0x58, 0x03, 0x00,
    0x15, 0x2C, 0x00, 0x80, 0x64, 0x65, 0x72, 0x00, 0x80, 0x64, 0x65, 0x72, 0x00, 0x2C, 0x00, 0x80,
    0x65, 0x76, 0x69, 0x6F, 0x75, 0x73, 0x00, 0xC0, 0x6B, 0x00, 0x48, 0x77, 0x03, 0x12, 0x81, 0x03,
    0x16, 0x8B, 0x03, 0x18, 0x96, 0x03, 0x00, 0x15, 0x2C, 0x00, 0x80, 0x74, 0x72, 0x69, 0x63, 0x74,
    0x00, 0x13, 0x2C, 0x00, 0x80, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x08, 0x2C, 0x00, 0x80, 0x65,
    0x6E, 0x74, 0x69, 0x61, 0x6C, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x00, 0xC0, 0x6D, 0x65, 0x6E, 0x74,
    0x00, 0x4C, 0xB4, 0x03, 0x0F, 0xBF, 0x03, 0x11, 0xC9, 0x03, 0x12, 0xD9, 0x03, 0x16, 0xE0, 0x03,
    0x2C, 0xE7, 0x03, 0x00, 0x16, 0x2C, 0x00, 0x80, 0x75, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x04,
    0x2C, 0x00, 0x80, 0x68, 0x6F, 0x75, 0x67, 0x68, 0x00, 0x08, 0x10, 0x08, 0x0F, 0x13, 0x10, 0x0C,
    0x2C, 0x00, 0x80, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x68, 0x65, 0x72, 0x00,
    0x2C, 0x00, 0x80, 0x61, 0x72, 0x74, 0x00, 0x80, 0x68, 0x61, 0x74, 0x00, 0xC0, 0x65, 0x00, 0x50,
    0xF6, 0x03, 0x13, 0xFC, 0x03, 0x00, 0x2C, 0x00, 0x80, 0x73, 0x74, 0x00, 0x2C, 0x00, 0x80, 0x62,
    0x6C, 0x69, 0x63, 0x00, 0x80, 0x65, 0x72, 0x00, 0x2C, 0x00, 0x80, 0x68, 0x69, 0x63, 0x68, 0x00,
    0xC0, 0x74, 0x00, 0x08, 0x00, 0x51, 0x1F, 0x04, 0x17, 0x24, 0x04, 0x2C, 0x27, 0x04, 0x00, 0x2C,
    0x00, 0x80, 0x74, 0x00, 0x80, 0x74, 0x00, 0x80, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x00, 0xC0, 0x69,
    0x6E, 0x67, 0x00, 0x44, 0x46, 0x04, 0x05, 0x4E, 0x04, 0x08, 0x56, 0x04, 0x11, 0x5F, 0x04, 0x16,
    0x69, 0x04, 0x17, 0x71, 0x04, 0x00, 0x13, 0x2C, 0x00, 0x80, 0x70, 0x61, 0x6C, 0x00, 0x2C, 0x00,
    0x80, 0x70, 0x61, 0x73, 0x73, 0x00, 0x0E, 0x2C, 0x00, 0x80, 0x63, 0x6F, 0x64, 0x65, 0x00, 0x04,
    0x2C, 0x00, 0x80, 0x74, 0x68, 0x69, 0x6E, 0x67, 0x00, 0x2C, 0x00, 0x80, 0x73, 0x74, 0x65, 0x6D,
    0x00, 0x2C, 0x00, 0x80, 0x70, 0x00, 0x80, 0x74, 0x68, 0x65, 0x00
};

// --------------------------------------------------

// Repeat dictionary (72 entries):
//   →every         -> everywhere
//   →reason        -> reasoning
//   →should        -> shouldn't
//   →somewhere     -> somehow
//   →some          -> something
//   →impl          -> implement
//   →poss          -> possible
//   →over          -> overall
//   →hand          -> handy
//   →sim           -> simultaneously
//   →imp           -> impossible
//   →uni           -> university
//   →dif           -> difficult
//   →inc           -> incapable
//   →int           -> interest
//   →beh           -> behavior
//   →ins           -> instead
//   →def           -> default
//   →dev           -> develop
//   →awk           -> awkward
//   →cap           -> capable
//   →pro           -> program
//   →how           -> however
//   →wit           -> without
//   →thr           -> through
//   →any           -> anyway
//   →cou           -> course
//   →min           -> minute
//   →exp           -> expect
//   →bet           -> better
//   →ask           -> asking
//   →sti           -> still
//   nat            -> nation
//   tio            -> tional
//   ous            -> ously
//   →fu            -> function
//   →ht            -> https://
//   →cu            -> curious
//   →sc            -> school
//   →sy            -> symbol
//   →vi            -> vision
//   →mu            -> music
//   →ba            -> basic
//   →ex            -> exact
//   →va            -> value
//   →ab            -> about
//   →sk            -> skill
//   →fr            -> from
//   →ma            -> make
//   →la            -> last
//   st             -> sts
//   rs             -> rst
//   →b             -> because
//   →w             -> would
//   →t             -> than
//   →j             -> join
//   →v             -> var
//   →i             -> ii
//   .              -> .com
//   →              -> for
//   x              -> xes
//   i              -> ing
//   y              -> you
//   q              -> qui
//   function       -> functionality
//   implement      -> implementing
//   simultaneously -> simultaneous
//   develop        -> development
//   interest       -> interesting
//   basic          -> basically
//   var            -> variable
//   exact          -> exactly

#define REPEAT_MIN_LENGTH 1 // "."
#define REPEAT_MAX_LENGTH 14 // "simultaneously"
#define REPEAT_DICTIONARY_SIZE 891

static const uint8_t repeat_data[REPEAT_DICTIONARY_SIZE] PROGMEM = {
    0x77, 0x4F, 0x00, 0x04, 0x54, 0x00, 0x05, 0x7B, 0x00, 0x06, 0x91, 0x00, 0x07, 0xB8, 0x00, 0x08,
    0xD1, 0x00, 0x09, 0xF1, 0x00, 0x0B, 0x0C, 0x01, 0x0C, 0x17, 0x01, 0x0D, 0x46, 0x01, 0x0E, 0x4D,
    0x01, 0x0F, 0x70, 0x01, 0x10, 0x7C, 0x01, 0x11, 0x8D, 0x01, 0x12, 0xBA, 0x01, 0x13, 0xD1, 0x01,
    0x14, 0x07, 0x02, 0x15, 0x0B, 0x02, 0x16, 0x39, 0x02, 0x17, 0x62, 0x02, 0x18, 0xD5, 0x02, 0x19,
    0x04, 0x03, 0x1A, 0x18, 0x03, 0x1B, 0x2E, 0x03, 0x1C, 0x3A, 0x03, 0x2C, 0x76, 0x03, 0x00, 0x80,
    0x63, 0x6F, 0x6D, 0x00, 0x45, 0x61, 0x00, 0x0F, 0x68, 0x00, 0x10, 0x6E, 0x00, 0x19, 0x74, 0x00,
    0x00, 0x2C, 0x00, 0x80, 0x73, 0x69, 0x63, 0x00, 0x2C, 0x00, 0x80, 0x73, 0x74, 0x00, 0x2C, 0x00,
    0x80, 0x6B, 0x65, 0x00, 0x2C, 0x00, 0x80, 0x6C, 0x75, 0x65, 0x00, 0x44, 0x82, 0x00, 0x2C, 0x89,
    0x00, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x75, 0x74, 0x00, 0x80, 0x65, 0x63, 0x61, 0x75, 0x73, 0x65,
    0x00, 0x4C, 0x9B, 0x00, 0x11, 0xA5, 0x00, 0x16, 0xB0, 0x00, 0x00, 0x16, 0x04, 0x05, 0x00, 0x80,
    0x61, 0x6C, 0x6C, 0x79, 0x00, 0x0C, 0x2C, 0x00, 0x80, 0x61, 0x70, 0x61, 0x62, 0x6C, 0x65, 0x00,
    0x2C, 0x00, 0x80, 0x68, 0x6F, 0x6F, 0x6C, 0x00, 0x4F, 0xBF, 0x00, 0x11, 0xCA, 0x00, 0x00, 0x18,
    0x12, 0x0B, 0x16, 0x2C, 0x00, 0x80, 0x6E, 0x27, 0x74, 0x00, 0x04, 0x0B, 0x2C, 0x00, 0x80, 0x79,
    0x00, 0x50, 0xD8, 0x00, 0x15, 0xE3, 0x00, 0x00, 0x12, 0x16, 0x2C, 0x00, 0x80, 0x74, 0x68, 0x69,
    0x6E, 0x67, 0x00, 0x08, 0x0B, 0x1A, 0x08, 0x10, 0x12, 0x16, 0x2C, 0x00, 0x85, 0x68, 0x6F, 0x77,
    0x00, 0x48, 0xF8, 0x00, 0x0C, 0x01, 0x01, 0x00, 0x07, 0x2C, 0x00, 0x80, 0x61, 0x75, 0x6C, 0x74,
    0x00, 0x07, 0x2C, 0x00, 0x80, 0x66, 0x69, 0x63, 0x75, 0x6C, 0x74, 0x00, 0x08, 0x05, 0x2C, 0x00,
    0x80, 0x61, 0x76, 0x69, 0x6F, 0x72, 0x00, 0xC0, 0x6E, 0x67, 0x00, 0x51, 0x28, 0x01, 0x17, 0x34,
    0x01, 0x19, 0x3B, 0x01, 0x2C, 0x43, 0x01, 0x00, 0x18, 0x2C, 0x00, 0x80, 0x76, 0x65, 0x72, 0x73,
    0x69, 0x74, 0x79, 0x00, 0x16, 0x2C, 0x00, 0x80, 0x6C, 0x6C, 0x00, 0x2C, 0x00, 0x80, 0x73, 0x69,
    0x6F, 0x6E, 0x00, 0x80, 0x69, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x69, 0x6E, 0x00, 0x56, 0x54, 0x01,
    0x1A, 0x67, 0x01, 0x00, 0x44, 0x5B, 0x01, 0x2C, 0x62, 0x01, 0x00, 0x2C, 0x00, 0x80, 0x69, 0x6E,
    0x67, 0x00, 0x80, 0x69, 0x6C, 0x6C, 0x00, 0x04, 0x2C, 0x00, 0x80, 0x77, 0x61, 0x72, 0x64, 0x00,
    0x13, 0x10, 0x0C, 0x2C, 0x00, 0x80, 0x65, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x0C, 0x16, 0x2C, 0x00,
    0x80, 0x75, 0x6C, 0x74, 0x61, 0x6E, 0x65, 0x6F, 0x75, 0x73, 0x6C, 0x79, 0x00, 0x4C, 0x94, 0x01,
    0x12, 0x9C, 0x01, 0x00, 0x10, 0x2C, 0x00, 0x80, 0x75, 0x74, 0x65, 0x00, 0x4C, 0xA3, 0x01, 0x16,
    0xB0, 0x01, 0x00, 0x17, 0x06, 0x11, 0x18, 0x09, 0x00, 0x80, 0x61, 0x6C, 0x69, 0x74, 0x79, 0x00,
    0x04, 0x08, 0x15, 0x2C, 0x00, 0x80, 0x69, 0x6E, 0x67, 0x00, 0x4C, 0xC1, 0x01, 0x15, 0xC8, 0x01,
    0x00, 0x17, 0x00, 0x80, 0x6E, 0x61, 0x6C, 0x00, 0x13, 0x2C, 0x00, 0x80, 0x67, 0x72, 0x61, 0x6D,
    0x00, 0x44, 0xDE, 0x01, 0x10, 0xE7, 0x01, 0x12, 0xF3, 0x01, 0x1B, 0xFF, 0x01, 0x00, 0x06, 0x2C,
    0x00, 0x80, 0x61, 0x62, 0x6C, 0x65, 0x00, 0x0C, 0x2C, 0x00, 0x80, 0x6F, 0x73, 0x73, 0x69, 0x62,
    0x6C, 0x65, 0x00, 0x0F, 0x08, 0x19, 0x08, 0x07, 0x00, 0x80, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x08,
    0x2C, 0x00, 0x80, 0x65, 0x63, 0x74, 0x00, 0x80, 0x75, 0x69, 0x00, 0x44, 0x18, 0x02, 0x08, 0x21,
    0x02, 0x09, 0x2A, 0x02, 0x0B, 0x30, 0x02, 0x00, 0x19, 0x00, 0x80, 0x69, 0x61, 0x62, 0x6C, 0x65,
    0x00, 0x19, 0x12, 0x2C, 0x00, 0x80, 0x61, 0x6C, 0x6C, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x6D, 0x00,
    0x17, 0x2C, 0x00, 0x80, 0x6F, 0x75, 0x67, 0x68, 0x00, 0x51, 0x46, 0x02, 0x15, 0x4F, 0x02, 0x16,
    0x52, 0x02, 0x18, 0x5C, 0x02, 0x00, 0x0C, 0x2C, 0x00, 0x80, 0x74, 0x65, 0x61, 0x64, 0x00, 0x80,
    0x74, 0x00, 0x12, 0x13, 0x2C, 0x00, 0x80, 0x69, 0x62, 0x6C, 0x65, 0x00, 0x12, 0x00, 0x80, 0x6C,
    0x79, 0x00, 0x44, 0x7B, 0x02, 0x06, 0x82, 0x02, 0x08, 0x8A, 0x02, 0x0B, 0x92, 0x02, 0x0C, 0x9C,
    0x02, 0x11, 0xA5, 0x02, 0x16, 0xC1, 0x02, 0x2C, 0xD0, 0x02, 0x00, 0x11, 0x00, 0x80, 0x69, 0x6F,
    0x6E, 0x00, 0x04, 0x1B, 0x08, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x05, 0x2C, 0x00, 0x80, 0x74, 0x65,
    0x72, 0x00, 0x2C, 0x00, 0x80, 0x74, 0x70, 0x73, 0x3A, 0x2F, 0x2F, 0x00, 0x1A, 0x2C, 0x00, 0x80,
    0x68, 0x6F, 0x75, 0x74, 0x00, 0x48, 0xAC, 0x02, 0x0C, 0xB8, 0x02, 0x00, 0x10, 0x08, 0x0F, 0x13,
    0x10, 0x0C, 0x00, 0x80, 0x69, 0x6E, 0x67, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x72, 0x65, 0x73, 0x74,
    0x00, 0xC0, 0x73, 0x00, 0x08, 0x15, 0x08, 0x17, 0x11, 0x0C, 0x00, 0x80, 0x69, 0x6E, 0x67, 0x00,
    0x80, 0x68, 0x61, 0x6E, 0x00, 0x46, 0xE2, 0x02, 0x09, 0xEB, 0x02, 0x10, 0xF5, 0x02, 0x12, 0xFC,
    0x02, 0x00, 0x2C, 0x00, 0x80, 0x72, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x2C, 0x00, 0x80, 0x6E, 0x63,
    0x74, 0x69, 0x6F, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x73, 0x69, 0x63, 0x00, 0x06, 0x2C, 0x00, 0x80,
    0x72, 0x73, 0x65, 0x00, 0x48, 0x0B, 0x03, 0x2C, 0x14, 0x03, 0x00, 0x07, 0x2C, 0x00, 0x80, 0x65,
    0x6C, 0x6F, 0x70, 0x00, 0x80, 0x61, 0x72, 0x00, 0x52, 0x1F, 0x03, 0x2C, 0x28, 0x03, 0x00, 0x0B,
    0x2C, 0x00, 0x80, 0x65, 0x76, 0x65, 0x72, 0x00, 0x80, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0xC0, 0x65,
    0x73, 0x00, 0x08, 0x2C, 0x00, 0x80, 0x61, 0x63, 0x74, 0x00, 0xC0, 0x6F, 0x75, 0x00, 0x4F, 0x4B,
    0x03, 0x11, 0x5A, 0x03, 0x15, 0x62, 0x03, 0x16, 0x6E, 0x03, 0x00, 0x16, 0x18, 0x12, 0x08, 0x11,
    0x04, 0x17, 0x0F, 0x18, 0x10, 0x0C, 0x16, 0x00, 0x82, 0x00, 0x04, 0x2C, 0x00, 0x80, 0x77, 0x61,
    0x79, 0x00, 0x08, 0x19, 0x08, 0x2C, 0x00, 0x80, 0x77, 0x68, 0x65, 0x72, 0x65, 0x00, 0x2C, 0x00,
    0x80, 0x6D, 0x62, 0x6F, 0x6C, 0x00, 0x80, 0x66, 0x6F, 0x72, 0x00
};

// --------------------------------------------------

// Db_Magic dictionary (30 entries):
//   →never     -> nevertheless
//   →essential -> essentially
//   →restrict  -> restriction
//   →encrypt   -> encryption
//   →reason    -> reasonable
//   →ever      -> everything
//   →confused  -> confusion
//   →recycle   -> recycling
//   →other     -> otherwise
//   →some      -> somewhere
//   →special   -> specific
//   →judge     -> judgment
//   →could     -> couldn't
//   →over      -> override
//   →list      -> listener
//   →again     -> against
//   →start     -> started
//   →enque     -> enqueue
//   →deque     -> dequeue
//   →copy      -> copying
//   →ment      -> mention
//   →use       -> useless
//   →alr       -> already
//   →simpl     -> simply
//   →doub      -> doable
//   →most      -> mostly
//   →that      -> thank
//   →que       -> queue
//   ion        -> ional
//   reasonable -> reasonably

#define DB_MAGIC_MIN_LENGTH 3 // "ion"
#define DB_MAGIC_MAX_LENGTH 10 // "→essential"
#define DB_MAGIC_DICTIONARY_SIZE 432

static const uint8_t db_magic_data[DB_MAGIC_DICTIONARY_SIZE] PROGMEM = {
    0x45, 0x19, 0x00, 0x07, 0x24, 0x00, 0x08, 0x42, 0x00, 0x0F, 0xAC, 0x00, 0x11, 0xD9, 0x00, 0x15,
    0xFF, 0x00, 0x17, 0x49, 0x01, 0x1C, 0xA6, 0x01, 0x00, 0x18, 0x12, 0x07, 0x2C, 0x00, 0x82, 0x61,
    0x62, 0x6C, 0x65, 0x00, 0x48, 0x2B, 0x00, 0x0F, 0x38, 0x00, 0x00, 0x16, 0x18, 0x09, 0x11, 0x12,
    0x06, 0x2C, 0x00, 0x82, 0x69, 0x6F, 0x6E, 0x00, 0x18, 0x12, 0x06, 0x2C, 0x00, 0x80, 0x6E, 0x27,
    0x74, 0x00, 0x4A, 0x52, 0x00, 0x0F, 0x5D, 0x00, 0x10, 0x7A, 0x00, 0x16, 0x85, 0x00, 0x18, 0x8E,
    0x00, 0x00, 0x07, 0x18, 0x0D, 0x2C, 0x00, 0x81, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x45, 0x64, 0x00,
    0x06, 0x6F, 0x00, 0x00, 0x04, 0x11, 0x12, 0x16, 0x04, 0x08, 0x15, 0x00, 0x81, 0x79, 0x00, 0x1C,
    0x06, 0x08, 0x15, 0x2C, 0x00, 0x81, 0x69, 0x6E, 0x67, 0x00, 0x12, 0x16, 0x2C, 0x00, 0x80, 0x77,
    0x68, 0x65, 0x72, 0x65, 0x00, 0x18, 0x2C, 0x00, 0x80, 0x6C, 0x65, 0x73, 0x73, 0x00, 0x14, 0x00,
    0x48, 0x9A, 0x00, 0x11, 0xA1, 0x00, 0x2C, 0xA8, 0x00, 0x00, 0x07, 0x2C, 0x00, 0x80, 0x75, 0x65,
    0x00, 0x08, 0x2C, 0x00, 0x80, 0x75, 0x65, 0x00, 0x80, 0x75, 0x65, 0x00, 0x44, 0xB3, 0x00, 0x13,
    0xD1, 0x00, 0x00, 0x0C, 0x00, 0x46, 0xBC, 0x00, 0x17, 0xC6, 0x00, 0x00, 0x08, 0x13, 0x16, 0x2C,
    0x00, 0x82, 0x66, 0x69, 0x63, 0x00, 0x11, 0x08, 0x16, 0x16, 0x08, 0x2C, 0x00, 0x80, 0x6C, 0x79,
    0x00, 0x10, 0x0C, 0x16, 0x2C, 0x00, 0x80, 0x79, 0x00, 0x4C, 0xE0, 0x00, 0x12, 0xE9, 0x00, 0x00,
    0x04, 0x0A, 0x04, 0x2C, 0x00, 0x80, 0x73, 0x74, 0x00, 0x4C, 0xF0, 0x00, 0x16, 0xF4, 0x00, 0x00,
    0x80, 0x61, 0x6C, 0x00, 0x04, 0x08, 0x15, 0x2C, 0x00, 0x80, 0x61, 0x62, 0x6C, 0x65, 0x00, 0x48,
    0x06, 0x01, 0x0F, 0x40, 0x01, 0x00, 0x4B, 0x0D, 0x01, 0x19, 0x17, 0x01, 0x00, 0x17, 0x12, 0x2C,
    0x00, 0x80, 0x77, 0x69, 0x73, 0x65, 0x00, 0x48, 0x1E, 0x01, 0x12, 0x38, 0x01, 0x00, 0x51, 0x25,
    0x01, 0x2C, 0x30, 0x01, 0x00, 0x2C, 0x00, 0x80, 0x74, 0x68, 0x65, 0x6C, 0x65, 0x73, 0x73, 0x00,
    0x80, 0x79, 0x74, 0x68, 0x69, 0x6E, 0x67, 0x00, 0x2C, 0x00, 0x80, 0x72, 0x69, 0x64, 0x65, 0x00,
    0x04, 0x2C, 0x00, 0x80, 0x65, 0x61, 0x64, 0x79, 0x00, 0x44, 0x5C, 0x01, 0x06, 0x64, 0x01, 0x11,
    0x71, 0x01, 0x13, 0x7A, 0x01, 0x15, 0x86, 0x01, 0x16, 0x8F, 0x01, 0x00, 0x0B, 0x17, 0x2C, 0x00,
    0x81, 0x6E, 0x6B, 0x00, 0x0C, 0x15, 0x17, 0x16, 0x08, 0x15, 0x2C, 0x00, 0x80, 0x69, 0x6F, 0x6E,
    0x00, 0x08, 0x10, 0x2C, 0x00, 0x80, 0x69, 0x6F, 0x6E, 0x00, 0x1C, 0x15, 0x06, 0x11, 0x08, 0x2C,
    0x00, 0x80, 0x69, 0x6F, 0x6E, 0x00, 0x04, 0x17, 0x16, 0x2C, 0x00, 0x80, 0x65, 0x64, 0x00, 0x4C,
    0x96, 0x01, 0x12, 0x9F, 0x01, 0x00, 0x0F, 0x2C, 0x00, 0x80, 0x65, 0x6E, 0x65, 0x72, 0x00, 0x10,
    0x2C, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x13, 0x12, 0x06, 0x2C, 0x00, 0x80, 0x69, 0x6E, 0x67, 0x00
};

// --------------------------------------------------

// Db_Letter dictionary (34 entries):
//   on    -> onion
//   an    -> anion
//   un    -> union
//   in    -> inion
//   →quin -> quintessential
//   →prob -> probably
//   →keyb -> keyboard
//   →evn  -> eventually
//   →con  -> consider
//   →gen  -> general
//   →men  -> menu
//   →def  -> definitely
//   →cof  -> confusing
//   →dif  -> differen
//   →ref  -> refuse
//   →bel  -> believe
//   →bet  -> between
//   →bec  -> become
//   →ab   -> abbreviation
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
//   →n    -> nice
//   q     -> qua

#define DB_LETTER_MIN_LENGTH 1 // "q"
#define DB_LETTER_MAX_LENGTH 5 // "→quin"
#define DB_LETTER_DICTIONARY_SIZE 410

static const uint8_t db_letter_data[DB_LETTER_DICTIONARY_SIZE] PROGMEM = {
    0x45, 0x1C, 0x00, 0x06, 0x5F, 0x00, 0x09, 0x68, 0x00, 0x0B, 0xC5, 0x00, 0x0F, 0xF1, 0x00, 0x11,
    0xFB, 0x00, 0x14, 0x85, 0x01, 0x17, 0x89, 0x01, 0x1D, 0x93, 0x01, 0x00, 0x44, 0x29, 0x00, 0x12,
    0x37, 0x00, 0x1C, 0x4E, 0x00, 0x2C, 0x58, 0x00, 0x00, 0x2C, 0x00, 0x80, 0x62, 0x72, 0x65, 0x76,
    0x69, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x55, 0x3E, 0x00, 0x2C, 0x47, 0x00, 0x00, 0x13, 0x2C,
    0x00, 0x80, 0x61, 0x62, 0x6C, 0x79, 0x00, 0x80, 0x76, 0x69, 0x6F, 0x75, 0x73, 0x00, 0x08, 0x0E,
    0x2C, 0x00, 0x80, 0x6F, 0x61, 0x72, 0x64, 0x00, 0x80, 0x65, 0x66, 0x6F, 0x72, 0x65, 0x00, 0x08,
    0x05, 0x2C, 0x00, 0x80, 0x6F, 0x6D, 0x65, 0x00, 0x44, 0x7B, 0x00, 0x08, 0x82, 0x00, 0x0C, 0x9B,
    0x00, 0x12, 0xA5, 0x00, 0x18, 0xB1, 0x00, 0x2C, 0xBF, 0x00, 0x00, 0x2C, 0x00, 0x80, 0x74, 0x65,
    0x72, 0x00, 0x47, 0x89, 0x00, 0x15, 0x94, 0x00, 0x00, 0x2C, 0x00, 0x80, 0x69, 0x6E, 0x69, 0x74,
    0x65, 0x6C, 0x79, 0x00, 0x2C, 0x00, 0x80, 0x75, 0x73, 0x65, 0x00, 0x07, 0x2C, 0x00, 0x80, 0x66,
    0x65, 0x72, 0x65, 0x6E, 0x00, 0x06, 0x2C, 0x00, 0x81, 0x6E, 0x66, 0x75, 0x73, 0x69, 0x6E, 0x67,
    0x00, 0x2C, 0x00, 0x81, 0x6E, 0x66, 0x6F, 0x72, 0x74, 0x75, 0x6E, 0x61, 0x74, 0x65, 0x00, 0x80,
    0x69, 0x72, 0x73, 0x74, 0x00, 0x56, 0xD2, 0x00, 0x17, 0xDA, 0x00, 0x1A, 0xE0, 0x00, 0x2C, 0xEA,
    0x00, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x75, 0x6C, 0x64, 0x00, 0x2C, 0x00, 0x80, 0x69, 0x73, 0x00,
    0x2C, 0x00, 0x80, 0x61, 0x74, 0x65, 0x76, 0x65, 0x72, 0x00, 0x80, 0x65, 0x61, 0x6C, 0x74, 0x68,
    0x00, 0x08, 0x05, 0x2C, 0x00, 0x80, 0x69, 0x65, 0x76, 0x65, 0x00, 0x44, 0x14, 0x01, 0x08, 0x22,
    0x01, 0x0C, 0x36, 0x01, 0x12, 0x57, 0x01, 0x17, 0x66, 0x01, 0x18, 0x6E, 0x01, 0x19, 0x73, 0x01,
    0x2C, 0x80, 0x01, 0x00, 0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x74, 0x68, 0x65,
    0x72, 0x00, 0x4A, 0x29, 0x01, 0x10, 0x31, 0x01, 0x00, 0x2C, 0x00, 0x80, 0x65, 0x72, 0x61, 0x6C,
    0x00, 0x2C, 0x00, 0x80, 0x75, 0x00, 0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x58, 0x42, 0x01, 0x2C, 0x51,
    0x01, 0x00, 0x14, 0x2C, 0x00, 0x80, 0x74, 0x65, 0x73, 0x73, 0x65, 0x6E, 0x74, 0x69, 0x61, 0x6C,
    0x00, 0x80, 0x66, 0x6F, 0x72, 0x6D, 0x00, 0xC0, 0x69, 0x6F, 0x6E, 0x00, 0x06, 0x2C, 0x00, 0x80,
    0x73, 0x69, 0x64, 0x65, 0x72, 0x00, 0x2C, 0x00, 0x81, 0x68, 0x69, 0x6E, 0x6B, 0x00, 0x80, 0x69,
    0x6F, 0x6E, 0x00, 0x08, 0x2C, 0x00, 0x81, 0x65, 0x6E, 0x74, 0x75, 0x61, 0x6C, 0x6C, 0x79, 0x00,
    0x80, 0x69, 0x63, 0x65, 0x00, 0x80, 0x75, 0x61, 0x00, 0x08, 0x05, 0x2C, 0x00, 0x80, 0x77, 0x65,
    0x65, 0x6E, 0x00, 0x2C, 0x00, 0x80, 0x6F, 0x6E, 0x65, 0x00
};
