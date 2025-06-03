#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Encoders */
//#define ENCODER_A_PINS  { GPIO10}
//#define ENCODER_B_PINS  { GPIO9}
//#define ENCODER_RESOLUTION 4

//#define ENCODER_MAP_KEY_DELAY 10

/* Trackball */
/*#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GPIO14
#define SPI_MISO_PIN GPIO12
#define SPI_MOSI_PIN GPIO15
#define POINTING_DEVICE_CS_PIN GPIO13
#define ROTATIONAL_TRANSFORM_ANGLE -30 // Optional: Rotates the trackball
#define POINTING_DEVICE_INVERT_X // Optional: Inverts trackball X*/

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
// This LED blinks when entering bootloader

#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 0

#define BOOTMAGIC_ROW_RIGHT 4
#define BOOTMAGIC_COLUMN_RIGHT 0