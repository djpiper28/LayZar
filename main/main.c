#include <stdio.h>
#include <stdlib.h>
#include "../testing.h/testing.h"

#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"

int sanity_test()
{
    return 1;
}

SUB_TEST(main_tests, {&sanity_test, "Sanity Test"});

void app_main(void)
{
    // Print chip info
    esp_chip_info_t chip_info;
    uint32_t flash_size;
    esp_chip_info(&chip_info);
    lprintf(LOG_INFO, "This is %s chip with %d CPU core(s), WiFi%s%s, ",
            CONFIG_IDF_TARGET,
            chip_info.cores,
            (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
            (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");

    lprintf(LOG_INFO, "silicon revision %d, ", chip_info.revision);
    if(esp_flash_get_size(NULL, &flash_size) != ESP_OK) {
        printf("Get flash size failed");
        return;
    }

    lprintf(LOG_INFO, "%luMB %s flash\n", flash_size / (1024 * 1024),
            (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");

    lprintf(LOG_INFO, "Minimum free heap size: %ld bytes\n", esp_get_minimum_free_heap_size());

    // Run tests
    main_tests();

    // Force stdout and, stderr to be flushed
    fflush(stderr);
    fflush(stdout);
}
