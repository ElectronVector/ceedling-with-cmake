#ifndef CMAKE_UNIT_TEST_LED_H
#define CMAKE_UNIT_TEST_LED_H

typedef enum led_color {
    LED_COLOR_RED,
    LED_COLOR_GREEN
} led_color_t;

void led_set_color(led_color_t color);

#endif //CMAKE_UNIT_TEST_LED_H
