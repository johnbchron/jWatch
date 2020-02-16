#include <SPI.h>
#include "Ucglib.h"

Ucglib_ST7735_18x128x160_HWSPI ucg(/*dc=*/ 7, /*cs=*/ 8, /*reset=*/ 6);
String currentTime = "0000";


void setup(void){
  delay(1000);
  ucg.begin(UCG_FONT_MODE_TRANSPARENT);
  ucg.clearScreen();
  ucg.setRotate90();
  ucg.setFont(ucg_font_helvB08_tf);
  ucg.setColor(255, 255, 255);
}

void loop(void){  
  ucg.setColor(255, 255, 0);
  ucg.setPrintPos(5, 5 + 29);
  ucg.print("It's smart watch time!");
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(10, 15 + 29);
  ucg.print("Don't worry,");
  ucg.setPrintPos(10, 25 + 29);
  ucg.print("the screen will be bigger.");
  ucg.setPrintPos(10, 40 + 29);
  ucg.print("Seconds from launch:");
  
  ucg.setPrintPos(10, 55 + 29);
  ucg.setColor(0, 0, 0);
  ucg.print(currentTime);
  
  ucg.setPrintPos(10, 55 + 29);
  ucg.setColor(255, 255, 255);
  currentTime = String(int(millis()/1000));
  ucg.print(currentTime);
}
