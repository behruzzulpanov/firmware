  GNU nano 9.0                     pins_arduino.h                               
#define TFT_SCLK 18
#define TFT_CS 7
#define TOUCH_CS -1 // SDCARD_CS to make sure SDCard works
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 20000000
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000

#define SDCARD_CS 3
#define SDCARD_SCK 18
#define SDCARD_MISO 8
#define SDCARD_MOSI 17

#define GROVE_SDA 47
#define GROVE_SCL 48
#define SYS_I2C_SDA 47
#define SYS_I2C_SCL 48

#define SPI_SCK_PIN 13
#define SPI_MOSI_PIN 12
#define SPI_MISO_PIN 11
#define SPI_SS_PIN 43

// RGB LED

#define HAS_RGB_LED 1
#define RGB_LED 45
#define LED_TYPE WS2812B
#define LED_ORDER GRB
#define LED_TYPE_IS_RGBW 0
#define LED_COUNT 16

#define LED_COLOR_STEP 15


 // Mic#
#define PIN_CLK 1
#define PIN_DATA 10
#define PIN_WS 2

// IO EXPANDER
#undef USE_IO_EXPANDER
#undef IO_EXPANDER_AW9523
#undef BAT_PIN
#define BAT_PIN -1

#undef TFT_MISO
#define TFT_MISO 8
#define HAS_TOUCH 1
#define TOUCH_CS 14
#define SPI_TOUCH_FREQUENCY 2500000
#undef ST7789_DRIVER
#define ILI9341_DRIVER 1
#undef TFT_WIDTH
#define TFT_WIDTH 240
#undef TFT_INVERSION_ON
#endif /* Pins_Arduino_h */
  
