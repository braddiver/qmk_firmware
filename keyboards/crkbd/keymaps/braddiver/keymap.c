#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_3(
    // -- Left (top row)
    KC_Q, KC_W, LT(2,KC_E), KC_R, KC_T,
    // -- Right (top row)
    KC_Y, KC_U, LT(1,KC_I), KC_O, KC_P,

    // -- Left (middle row)
    LT(2,KC_A), KC_S, LT(2,KC_D), LT(3,KC_F), KC_G, // LT=layerTap(layerNumOnHold, keyOnTap)
    // -- Right (middle row)
    KC_H, KC_J, KC_K, KC_L, LT(1,KC_SCLN),

    // -- Left (bottom row)
    KC_Z, LALT_T(KC_X), LSFT_T(KC_C), LCTL_T(KC_V), KC_B,
    // -- Right (bottom row)
    KC_N, RCTL_T(KC_M), RSFT_T(KC_COMMA), RALT_T(KC_DOT), KC_SLSH,

    // -- Left thumb
    MO(4), LGUI_T(KC_ESC), KC_BSPC,
    // -- Right thumb
    KC_TAB, KC_SPC, OSM(MOD_MEH)
  ),

  // Symbol layer for left hand. Right holds pinky middle.
  [1] = LAYOUT_split_3x5_3(
    // -- Left (top)
    KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_NO, // ! @ { } <None>
    // -- Right (top)
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    // -- Left (middle)
    KC_T, KC_EQL, KC_LPRN, KC_RPRN, KC_HASH, // t = ( ) #
    // -- Right (middle)
    KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,

    // -- Left (bottom)
    KC_CIRC, KC_PERC, KC_LBRC, KC_RBRC, KC_TILD, // ^ % [ ] ~
    // -- Right (bottom)
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    // -- Left thumb
    KC_TRNS, KC_TRNS, KC_TRNS,
    // -- Right thumb
    KC_TRNS, KC_TRNS, KC_TRNS
  ),

  // Symbol layer for right hand. Left holds pinky or middle finger.
  [2] = LAYOUT_split_3x5_3(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_PAST, KC_PLUS, KC_DQUO, KC_UNDS, // <None> * + " _

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_PMNS, KC_QUOT, KC_AMPR, KC_BSLS, KC_ENT, // - ' & \ <Enter>

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_Y, KC_PIPE, KC_GRV, KC_DLR, // <None> y | ` $

    KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
  ),

  // Number layer for right hand. Left hand holds index finger home row.
  [3] = LAYOUT_split_3x5_3(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_PLUS, KC_7, KC_8, KC_9, KC_ASTR, // + 7 8 9 *

    TO(0), KC_NO, KC_NO, KC_NO, KC_NO, // <Layer0>
    KC_DOT, KC_4, KC_5, KC_6, KC_0, // . 4 5 6 0

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_EQL, KC_1, KC_2, KC_3, KC_HASH, // = 1 2 3 #

    KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [4] = LAYOUT_split_3x5_3(
    // <ForceQuit> <CloseWindow> <PrevTab> <NextTab> <None>
    LALT(LGUI(KC_ESCAPE)), LGUI(KC_W), LCTL(RSFT(KC_TAB)), LCTL(KC_TAB), KC_NO,
    // <None> <TextSmaller> <TextBigger> <TextNormalSize> <None>
    KC_NO, LGUI(KC_PMNS), LGUI(KC_EQL), LGUI(KC_0), KC_NO,

    // <Layer0> <Esc> <PrevApp> <NextApp> <ScreenShotRectangle>
    TO(0), KC_ESC, LSFT(KC_TAB), LGUI(KC_TAB), LGUI(LSFT(KC_4)),
    // <LeftArrow> <DownArrow> <UpArrow> <RightArrow> <Enter>
    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT,

    // <Command> <PrevApp(w/ThumbCommand)> <NextApp(w/ThumbCommand)> <None>
    LGUI(KC_NO), LALT_T(KC_NO), LSFT_T(KC_NO), KC_LCTL, KC_NO,
    // <None> <PrevBrowseHistory> <NextBrowseHistory> <RightAlt(period)> <...>
    KC_NO, LGUI(KC_LBRC), LGUI(KC_RBRC), RALT_T(KC_DOT), KC_TRNS,

    // <Layer0> <Transparent> <...>
    KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
  )
};

