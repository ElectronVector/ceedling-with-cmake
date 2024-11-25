
#include "ui.h"
#include "driver/led.h"

void ui_set_status_good() {
    led_set_color(LED_COLOR_GREEN);
}

void ui_set_status_fail() {
    led_set_color(LED_COLOR_RED);
}