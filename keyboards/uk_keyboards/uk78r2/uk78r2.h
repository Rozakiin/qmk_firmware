#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
    K200, K301, K202, K303, K204, K305, K206, K307, K208, K309, K210, K311, K212, K313, K214, K315, K216, K317, K218,\
    K400, K501, K402, K503, K404, K505, K406, K507, K408, K509, K410, K511, K412,       K414, K515, K416, K517, K418,\
    K600, K701, K602, K703, K604, K705, K606, K707, K608, K709, K610, K711, K612,       K614, K715, K616, K717, K618,\
    K800, K901, K802, K903, K804, K905, K806, K907, K808, K909, K810, K911, K812, K913, K814, K915, K816, K917, K818,\
    K1000,K1101,K1002,K1103,            K1006,            K1109,K1010,K1111,K1012,K1113,K1014,K1115,K1016,K1117,K1018\
) { \
    { K200,   K202,   K204,   K206,   K208,   K210,   K212,   K214,   K216,   K218   },\
    { K301,   K303,   K305,   K307,   K309,   K311,   K313,   K315,   K317,   KC_NO  },\
    { K400,   K402,   K404,   K406,   K408,   K410,   K412,   K414,   K416,   K418   },\
    { K501,   K503,   K505,   K507,   K509,   K511,   KC_NO,  K515,   K517,   KC_NO  },\
    { K600,   K602,   K604,   K606,   K608,   K610,   K612,   K614,   K616,   K618   },\
    { K701,   K703,   K705,   K707,   K709,   K711,   KC_NO,  K715,   K717,   KC_NO  },\
    { K800,   K802,   K804,   K806,   K808,   K810,   K812,   K814,   K816,   K818   },\
    { K901,   K903,   K905,   K907,   K909,   K911,   K913,   K915,   K917,   KC_NO  },\
    { K1000,  K1002,  KC_NO,  K1006,  KC_NO,  K1010,  K1012,  K1014,  K1016,  K1018  },\
    { K1101,  K1103,  KC_NO,  KC_NO,  K1109,  K1111,  K1113,  K1115,  K1117,  KC_NO  }\
}