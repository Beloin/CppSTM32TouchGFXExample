//
// Created by beloin on 30/07/24.
//

#include <cstdio>
#include "stm32f750xx.h"
#include "stm32f7xx_hal_gpio.h"
#include "task.h"

void app_main() {
    HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
    printf("Hello World");

    // Remember, here stack size is counted in words, not bytes
    xTaskCreate(nullptr, nullptr, 128, nullptr, tskIDLE_PRIORITY, nullptr);
}