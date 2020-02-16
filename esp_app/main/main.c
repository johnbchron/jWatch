
// this is included so that we can output to the serial stream (printf() and stuff)
#include <stdio.h>
// this is included so that we can use native logging commands (ESP_LOG_WRITE(), in longhand)
#include <esp_log.h>
// these next two are included so that we can run scheduled tasks for things like BLE scanning
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// Aight, I'm excited to start making this thing!

void app_main(void){
    // So this is the app's "entry point"; this is where the actual, real, sequential execution
    //   of code begins. Once the ESP32 boots, it immediately begins executing from here; this
    //   main function can make references to whatever it needs to, but here is where it starts.

    printf("Hello, World! Welcome to the ESP32!\n");

    // As of right now, if we leave the end of this function empty... it'll just hang. This is fine.
}
