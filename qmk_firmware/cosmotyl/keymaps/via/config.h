#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define PERMISSIVE_HOLD

#define TAPPING_TOGGLE 2

#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50

#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP14
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP15
#define POINTING_DEVICE_CS_PIN GP13

// The trackball is quite sensitive to how
// large the liftoff distance should be.
#define PMW33XX_LIFTOFF_DISTANCE 0x02
// Sets the mouse resolution, up to 16000.
#define PMW33XX_CPI 600
// The directions where messed up, this fixes it.
//#define POINTING_DEVICE_ROTATION_270 
//#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y

#define SPLIT_POINTING_ENABLE
// The trackball is on the right
#define POINTING_DEVICE_RIGHT