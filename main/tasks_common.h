/*
 * tasks_common.h
 *
 *  Created on: Nov 6, 2024
 *      Author: vaibhav
 */

#ifndef MAIN_TASKS_COMMON_H_
#define MAIN_TASKS_COMMON_H_

// WiFi application task
#define WIFI_APP_TASK_STACK_SIZE			4096
#define WIFI_APP_TASK_PRIORITY				5
#define WIFI_APP_TASK_CORE_ID				0

// HTTP Server task
#define HTTP_SERVER_TASK_STACK_SIZE         8192
#define HTTP_SERVER_TASK_PRIORITY           4
#define HTTP_SERVER_TASK_CORE_ID            0

// HTTP Server Monitor task
#define HTTP_SERVER_MONITOR_STACK_SIZE      4096
#define HTTP_SERVER_MONITOR_PRIORITY        3
#define HTTP_SERVER_MONITOR_CORE_ID         0

#define WIFI_RESET_BUTTON_TASK_STACK_SIZE	2048
#define WIFI_RESET_BUTTON_TASK_PRIORITY		6
#define WIFI_RESET_BUTTON_TASK_CORE_ID		0
// DHT22 Sensor task
#define DHT22_TASK_STACK_SIZE               4096
#define DHT22_TASK_PRIORITY                 5
#define DHT22_TASK_CORE_ID                  1

// DHT11 Sensor task
#define DHT11_TASK_STACK_SIZE               4096
#define DHT11_TASK_PRIORITY                 5
#define DHT11_TASK_CORE_ID                  1


// SNTP Time Sync task
#define SNTP_TIME_SYNC_TASK_STACK_SIZE      4096
#define SNTP_TIME_SYNC_TASK_PRIORITY        4
#define SNTP_TIME_SYNC_TASK_CORE_ID         1

#endif /* TASKS_COMMON_H_ */
