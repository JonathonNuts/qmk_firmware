#pragma once

#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#define WS2812_DI_PIN GP20
// #define BOOTMAGIC_LITE_ROW (4)
// #define BOOTMAGIC_LITE_COLUMN (2)
#define BOOTMAGIC_ROW 3
#define BOOTMAGIC_COLUMN 3

/*SPI PINS*/
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP16 // Unused

/* LCD Configuration */
#define LCD_RST_PIN GP12
#define LCD_DC_PIN GP11
#define LCD_CS_PIN GP17
#define LCD_BLK_PIN GP13 // Unused in this configuration
#define LCD_SPI_DIVISOR 4
#define LCD_WAIT_TIME 150
#define LCD_ROTATION QP_ROTATION_0
#define LCD_OFFSET_X 0
#define LCD_OFFSET_Y 0
//#define LCD_INVERT_COLOR

// QP Configuration
#define QUANTUM_PAINTER_SUPPORTS_NATIVE_COLORS TRUE
//#define ST7789_NO_AUTOMATIC_VIEWPORT_OFFSETS

// Timeout configuration, default 30000 (30 sek). 0 = No timeout. Beware of image retention.
#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0