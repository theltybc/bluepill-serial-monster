/*
 * MIT License 
 * 
 * Copyright (c) 2020 Kirill Kotyagin
 */

#include <stm32f1xx.h>
#include "system_clock.h"
#include "status_led.h"
#include "device_config.h"
#include "usb.h"


int main() {
    system_clock_init();
    device_config_init();
    status_led_init();
    usb_init();
    while (1) {
        __NOP();
    }
}
