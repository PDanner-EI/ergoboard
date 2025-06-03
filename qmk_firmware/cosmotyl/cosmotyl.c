#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    /* Key Matrix to LED index. */
    // Left split.
    {      6,      5,      4,      3,      2,      1    }, // Top row
    {      7,      8,      9,     10,     11,     12    }, // Middle row
    {     18,     17,     16,     15,     14,     13    }, // Bottom row
    {     NO_LED, NO_LED, 19,     20,     21,     NO_LED}, // Thumb cluster
    // Right split.
    {     23,     28,     29,     34,     35,     36 }, // Top row
    {     24,     27,     30,     33,     38,     37 }, // Middle row
    {     25,     26,     31,     32,     39,     40 }, // Bottom row
    {     NO_LED, 43,     42,     41, NO_LED, NO_LED } // Thumb cluster
}, {
    /* LED index to physical position. This is used for key effects.
       Positions range from { 0..224, 0..64 }. */
    // Left split.
    /* index=0  */ {   0,   0 }, 
    /* index=1  */ {   0,  42 }, {   0,  21 }, {   0,   0 },
    /* index=4  */ {  18,   0 }, {  18,  21 }, {  18,  42 },
    /* index=7  */ {  36,  42 }, {  36,  21 }, {  36,   0 },
    /* index=10 */ {  54,   0 }, {  54,  21 }, {  54,  42 },
    /* index=13 */ {  72,   0 }, {  72,  21 }, {  72,  42 },
    /* index=16 */ {  72,   0 }, {  72,  21 }, {  72,  42 },

    /* index=19 */ {  72,  64 }, {  90,  64 }, { 108,  64 },
    
    // Right split.
    /* index=22 */ {   0,   0 }, 
    /* index=23 */ { 145,  10 }, { 145,  22 }, { 145,  35 },
    /* index=26 */ { 158,  35 }, { 158,  22 }, { 158,  10 },
    /* index=29 */ { 171,   7 }, { 171,  19 }, { 171,  31 },
    /* index=32 */ { 184,  38 }, { 184,  26 }, { 184,  14 },
    /* index=35 */ { 197,  18 }, { 210,  18 }, { 210,  30 },
    /* index=38 */ { 197,  30 }, { 197,  42 }, { 210,  42 },

    /* index=41 */ { 168,  48 }, { 151,  50 }, { 139,  55 }
}, {
    /* LED index to flag. */
    // Left split.
    /* index=0  */ LED_FLAG_NONE,
    /* index=1  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=4  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=7  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=10 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=13 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=16 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=19 */ LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    // Right split.
    /* index=22 */ LED_FLAG_NONE,
    /* index=23 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=26 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=29 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=32 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=35 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=38 */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* index=41 */ LED_FLAG_MODIFIER, LED_FLAG_MODIFIER, LED_FLAG_MODIFIER
} };
#endif