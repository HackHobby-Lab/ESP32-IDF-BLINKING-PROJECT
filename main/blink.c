#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"

#define TAG  "Blink"
#define BLINK_GPIO 2
static uint8_t s_led_state = 0;

static void configure_led(void){
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
}

static void blink_led(void){
    gpio_set_level(BLINK_GPIO, s_led_state);
}

void app_main(void){
    configure_led();
    printf("Hello World!\n");
    
    while (1){
        blink_led();
        ESP_LOGI(TAG, "Hello World");
        s_led_state = !s_led_state;
        
        vTaskDelay(100);
    }
    
    
}

