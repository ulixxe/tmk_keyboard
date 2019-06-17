/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keymap_hhkb.h"
#include "action_layer.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |   |
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         Fn0           |Alt  |Fn1|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP_HHKB(ESC  ,1    ,2    ,3    ,4    ,5    ,6    ,7    ,8    ,9    ,0    ,MINS ,EQL  ,BSLS ,GRV  , \
                TAB     ,Q    ,W    ,E    ,R    ,T    ,Y    ,U    ,I    ,O    ,P    ,LBRC ,RBRC ,BSPC    , \
                LCTL      ,A    ,S    ,D    ,F    ,G    ,H    ,J    ,K    ,L    ,SCLN ,QUOT ,ENT         , \
                LSFT         ,Z    ,X    ,C    ,V    ,B    ,N    ,M    ,COMM ,DOT  ,SLSH ,RSFT     ,       \
                          LGUI ,LALT    ,FN0                                ,RALT    ,FN1  ,               \
                     F1    ,F2   ,F3   ,F4   ,F5   ,F6   ,F7   ,F8   ,F9   ,F10  ,F11  ,F12  ,INS  ,DEL  , \
                CAPS    ,                                          PSCR ,SLCK ,PAUS ,UP   ,                \
                                                         PAST ,PSLS ,HOME ,PGUP ,LEFT ,RGHT ,PENT        , \
                                                            PPLS ,PMNS ,END  ,PGDN ,DOWN           ),      \

    /* Layer 1: Vi mode
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |Hom|PgD|Up |PgU|End|Hom|PgD|PgU|End|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |Lef|Dow|Rig|   |Lef|Dow|Up |Rig|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |Hom|PgD|PgU|End|   |Shift |   |
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |          Space        |Alt  |   |
     *       `-------------------------------------------'
     */
    [1] = \
    KEYMAP_HHKB(ESC  ,F1   ,F2   ,F3   ,F4   ,F5   ,F6   ,F7   ,F8   ,F9   ,F10  ,F11  ,F12  ,INS  ,DEL  , \
                TAB     ,HOME ,PGDN ,UP   ,PGUP ,END  ,HOME ,PGDN ,PGUP ,END  ,NO   ,NO   ,NO   ,BSPC    , \
                LCTL      ,NO   ,LEFT ,DOWN ,RGHT ,NO   ,LEFT ,DOWN ,UP   ,RGHT ,NO   ,NO   ,ENT         , \
                LSFT         ,NO   ,NO   ,NO   ,NO   ,NO   ,HOME ,PGDN ,PGUP ,END  ,NO   ,RSFT     ,       \
                          LGUI ,LALT    ,SPC                                ,RALT    ,TRNS ,               \
                     TRNS  ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS , \
                TRNS    ,                                          TRNS ,TRNS ,TRNS ,TRNS ,                \
                                                         TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS        , \
                                                            TRNS ,TRNS ,TRNS ,TRNS ,TRNS           ),      \

    /* Layer 2: Mouse mode(HJKL)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|MwU|MwR|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |Ma0|Ma1|Ma2|   |McL|McD|McU|McR|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |          Mb1          |Alt  |   |
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    [2] = \
    KEYMAP_HHKB(ESC  ,F1   ,F2   ,F3   ,F4   ,F5   ,F6   ,F7   ,F8   ,F9   ,F10  ,F11  ,F12  ,INS  ,DEL  , \
                TAB     ,NO   ,NO   ,NO   ,NO   ,NO   ,WH_L ,WH_D ,WH_U ,WH_R ,NO   ,NO   ,NO   ,BSPC    , \
                LCTL      ,NO   ,ACL0 ,ACL1 ,ACL2 ,NO   ,MS_L ,MS_D ,MS_U ,MS_R ,NO   ,NO   ,ENT         , \
                LSFT         ,NO   ,NO   ,NO   ,NO   ,BTN3 ,BTN2 ,BTN1 ,BTN4 ,BTN5 ,NO   ,RSFT     ,       \
                          LGUI ,LALT    ,BTN1                               ,RALT    ,TRNS ,               \
                     TRNS  ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS , \
                TRNS    ,                                          TRNS ,TRNS ,TRNS ,TRNS ,                \
                                                         TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS ,TRNS        , \
                                                            TRNS ,TRNS ,TRNS ,TRNS ,TRNS           ),      \

};



/* id for user defined functions */
enum function_id {
    LAYER_CHANGE,
};

enum macro_id {
    HELLO,
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),      // RControl with tap Space
    [1] = ACTION_FUNCTION_TAP(LAYER_CHANGE),
};


/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case HELLO:
            return (record->event.pressed ?
                    MACRO( I(0), T(H), T(E), T(L), T(L), W(255), T(O), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}


uint8_t layer_num = 0;

/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (record->event.pressed) dprint("P"); else dprint("R");
    dprintf("%d", record->tap.count);
    if (record->tap.interrupted) dprint("i");
    dprint("\n");

    switch (id) {
        case LAYER_CHANGE:
            if (record->event.pressed) {
                if (record->tap.count > 0) {
                    if (record->tap.interrupted) {
                        dprint("MODS_TAP: Tap: Cancel: register_mods\n");
                        // ad hoc: set 0 to cancel tap
                        record->tap.count = 0;
                    } else {
                        dprint("MODS_TAP: Tap: register_code\n");
                    }
                } else {
                    dprint("MODS_TAP: No tap: register_mods\n");
                }
            } else {
                if (record->tap.count > 0) {
                    dprint("MODS_TAP: Tap: unregister_code\n");
                    if (layer_num == 2)
                        layer_num = 0;
                    else
                        layer_num += 1;
                } else {
                    dprint("MODS_TAP: No tap: unregister_mods\n");
                    layer_num = 0;
                }
                layer_move(layer_num);
            }
            break;
    }
}
