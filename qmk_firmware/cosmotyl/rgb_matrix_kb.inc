// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macrom
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(rgb_layer_0)
RGB_MATRIX_EFFECT(rgb_layer_1)
RGB_MATRIX_EFFECT(rgb_layer_2)
RGB_MATRIX_EFFECT(rgb_layer_3)
RGB_MATRIX_EFFECT(rgb_layer_4)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS


static bool rgb_individual(effect_params_t* params, uint8_t r, uint8_t g, uint8_t b) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = led_min; i < led_max; i++) {
    if (i == 0 || i == 22) { //sacrificial LED
      rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
      continue;
    }
    rgb_matrix_set_color(i, r, g, b);
    
  }
  return rgb_matrix_check_finished_leds(led_max);
}

/*
static bool rgb_all(uint8_t r, uint8_t g, uint8_t b) {
  rgb_matrix_set_color_all(r, g, b);
  return false;
}
*/
// e.g: A simple effect, self-contained within a single method
static bool rgb_layer_0(effect_params_t* params) {
  return rgb_individual(params, 0x00, 0x22, 0x00);
  //return rgb_all(0x00, 0x22, 0x00);
}

static bool rgb_layer_1(effect_params_t* params) {
  return rgb_individual(params, 0x00, 0x22, 0x22);
  //return rgb_all(0x00, 0x22, 0x22);
}

static bool rgb_layer_2(effect_params_t* params) {
  return rgb_individual(params, 0x00, 0x00, 0x22);
  //return rgb_all(0x00, 0x00, 0x22);
}

static bool rgb_layer_3(effect_params_t* params) {
  return rgb_individual(params, 0x22, 0x00, 0x00);
  //return rgb_all(0x22, 0x00, 0x00);
}

static bool rgb_layer_4(effect_params_t* params) {
  return rgb_individual(params, 0x22, 0x00, 0x22);
  //return rgb_all(0x22, 0x00, 0x22);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS