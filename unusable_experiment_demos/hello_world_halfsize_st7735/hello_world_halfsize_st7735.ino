#include <SPI.h>
#include "Ucglib.h"

Ucglib_ST7735_18x128x160_HWSPI ucg(/*cd=*/ 7, /*cs=*/ 8, /*reset=*/ 6);


void setup(void){
  delay(1000);
  ucg.begin(UCG_FONT_MODE_TRANSPARENT);
  ucg.clearScreen();
  ucg.setRotate90();
  ucg.setFont(ucg_font_helvB08_tf);
  ucg.setColor(255, 255, 255);
}

void loop(void){  
  ucg.setPrintPos(5, 5 + 29);
  ucg.print("It's smart watch time!");
  ucg.setPrintPos(10, 15 + 29);
  ucg.print("Don't worry,");
  ucg.setPrintPos(10, 25 + 29);
  ucg.print("the screen will be bigger.");
}
