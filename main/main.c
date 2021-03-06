// Dummy Main application to facilitate unit testing on the ESP32

#include <stdio.h>
#include "unity.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void unityTask(void *pvParameters) {
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    unity_run_menu();
}

void app_main() {
    // Note: if unpinning this task, change the way run times are calculated in
    // unity_platform
    xTaskCreatePinnedToCore(unityTask, "unityTask", 8192, NULL,
            CONFIG_UNITY_FREERTOS_PRIORITY, NULL, CONFIG_UNITY_FREERTOS_CPU);
}
