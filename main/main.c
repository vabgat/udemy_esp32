/**
 * Applicaiton entry point.
 */

#include "nvs_flash.h"
#include "DHT11.h"
#include "wifi_app.h"
#include "wifi_reset_button.h"

void app_main(void)
{
    // Initialise NVS
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    // Start Wifi
    wifi_app_start();

    // Start DHT22 Sensor task
    DHT11_task_start();

    // Start wifi reset button task
    wifi_reset_button_config();
}