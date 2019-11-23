#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789

#define TFT_RST 6
#define TFT_DC 7
#define TFT_BLK 8

Adafruit_ST7789 tft = Adafruit_ST7789(10, TFT_DC, TFT_RST);

void setup() {
  tft.init(240, 240, SPI_MODE2);
  tft.setRotation(2);
  tft.fillScreen(ST77XX_WHITE);
}

void loop() {
  
}

void clockScreen() {
  
}
