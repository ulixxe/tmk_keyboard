#include "keymap_common.h"

    /* Default mode
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn |
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         Space         |Alt  |Gui|
     *       `-------------------------------------------'
     *
     * Fn mode
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |PrS|ScL|Pau|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
#define KEYMAP_HHKB( \
    K29,K1E,K1F,K20,K21,K22,K23,K24,K25,K26,K27,K2D,K2E,K31,K35,  \
    K2B,  K14,K1A,K08,K15,K17,K1C,K18,K0C,K12,K13,K2F,K30,  K2A,  \
    KE0,   K04,K16,K07,K09,K0A,K0B,K0D,K0E,K0F,K33,K34,     K28,  \
    KE1,    K1D,K1B,K06,K19,K05,K11,K10,K36,K37,K38,     KE5,     \
          KE3, KE2,          K2C,            KE6,KE7,             \
        K3A,K3B,K3C,K3D,K3E,K3F,K40,K41,K42,K43,K44,K45,K49,K4C,  \
    K39,                              K46,K47,K48,K52,            \
                               K55,K54,K4A,K4B,K50,K4F,     K58,  \
                                K57,K56,K4D,K4E,K51               \
) { \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##K04, KC_##K05, KC_##K06, KC_##K07,   /* 00-07 */ \
      KC_##K08, KC_##K09, KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F }, /* 08-0F */ \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17,   /* 10-17 */ \
      KC_##K18, KC_##K19, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F }, /* 18-1F */ \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27,   /* 20-27 */ \
      KC_##K28, KC_##K29, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F }, /* 28-2F */ \
    { KC_##K30, KC_##K31, KC_NO   , KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37,   /* 30-37 */ \
      KC_##K38, KC_##K39, KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F }, /* 38-3F */ \
    { KC_##K40, KC_##K41, KC_##K42, KC_##K43, KC_##K44, KC_##K45, KC_##K46, KC_##K47,   /* 40-47 */ \
      KC_##K48, KC_##K49, KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D, KC_##K4E, KC_##K4F }, /* 48-4F */ \
    { KC_##K50, KC_##K51, KC_##K52, KC_NO   , KC_##K54, KC_##K55, KC_##K56, KC_##K57,   /* 50-57 */ \
      KC_##K58, KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO    }, /* 58-5F */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* 60-67 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* 68-6F */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* 70-77 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* 78-7F */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* 80-87 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* 88-8F */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* 90-97 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* 98-9F */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* A0-A7 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* A8-AF */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* B0-B7 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* B8-BF */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* C0-C7 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* C8-CF */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* D0-D7 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* D8-DF */ \
    { KC_##KE0, KC_##KE1, KC_##KE2, KC_##KE3, KC_NO, KC_##KE5, KC_##KE6, KC_##KE7,      /* E0-E7 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* E8-EF */ \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      /* F0-F7 */ \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, /* F8-FF */ \
}

/* Usage example:
    /* Layer 0: Default Layer
    KEYMAP_HHKB(ESC  ,1    ,2    ,3    ,4    ,5    ,6    ,7    ,8    ,9    ,0    ,MINS ,EQL  ,BSLS ,GRV  , \
                TAB     ,Q    ,W    ,E    ,R    ,T    ,Y    ,U    ,I    ,O    ,P    ,LBRC ,RBRC ,BSPC    , \
                LCTL      ,A    ,S    ,D    ,F    ,G    ,H    ,J    ,K    ,L    ,SCLN ,QUOT ,ENT         , \
                LSFT         ,Z    ,X    ,C    ,V    ,B    ,N    ,M    ,COMM ,DOT  ,SLSH ,RSFT     ,       \
                          LGUI ,LALT    ,SPC                                ,RALT    ,RGUI ,               \
                     F1    ,F2   ,F3   ,F4   ,F5   ,F6   ,F7   ,F8   ,F9   ,F10  ,F11  ,F12  ,INS  ,DEL  , \
                CAPS    ,                                          PSCR ,SLCK ,PAUS ,UP   ,                \
                                                         PAST ,PSLS ,HOME ,PGUP ,LEFT ,RGHT ,PENT        , \
                                                            PPLS ,PMNS ,END  ,PGDN ,DOWN           ),      \
    /* Layer i: ...
    [i] = \
    KEYMAP_HHKB(TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS , \
                TRNS    ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS    , \
                TRNS      ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS        , \
                TRNS         ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS     ,       \
                          TRNS ,TRNS    ,TRNS                               ,TRNS    ,TRNS ,               \
                     TRNS  ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS , \
                TRNS    ,                                          TRNS ,TRNS ,TRNS ,TRNS ,                \
                                                         TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS        , \
                                                            TRNS ,TRNS ,TRNS ,TRNS ,TRNS           ),      \
 */
