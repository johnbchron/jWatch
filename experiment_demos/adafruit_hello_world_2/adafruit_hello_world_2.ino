#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789

#define TFT_RST 2
#define TFT_DC 3
#define TFT_BLK 8

Adafruit_ST7789 tft = Adafruit_ST7789(10, TFT_DC, TFT_RST);

void setup() {
  tft.init(240, 240, SPI_MODE2);
  tft.setRotation(2);
  tft.setTextWrap(true);
  tft.fillScreen(ST77XX_WHITE);
}

void loop() {
  //clockScreen();
  tft.setCursor(10, 10);
  tft.setTextColor(ST77XX_BLACK);
  tft.print(uint16_t(millis()/1000));
  tft.fillScreen(ST77XX_WHITE);
}

void clockScreen() {
  drawText("Test " + uint16_t(millis()/1000), 10, 10, ST77XX_BLACK);
}

void drawText(char *text, uint16_t x, uint16_t y, uint16_t color) {
  tft.setCursor(x, y);
  tft.setTextColor(color);
  tft.print(text);
}
