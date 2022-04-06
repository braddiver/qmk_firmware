#pragma once

#define QMK_VERSION "0.16.7-9-g80f7a4"
#define QMK_BUILDDATE "2022-04-03-16:22:11"
#define CHIBIOS_VERSION "develop_2021_q4"
#define CHIBIOS_CONTRIB_VERSION "develop_2021_q3-8-gd1c212"
// Wait before triggering mod version of mod-tap keys
#define TAPPING_TERM 200
// Respect above term for shift and command. Ex. with LSFT_T(KC_C) typing 'ck' fast will output 'K'.
#define IGNORE_MOD_TAP_INTERRUPT
