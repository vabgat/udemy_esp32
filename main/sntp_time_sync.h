/*
 * sntp_time_sync.h
 *
 *  Created on: Jan 9, 2025
 *      Author: vaibhav
 */

#ifndef MAIN_SNTP_TIME_SYNC_H_
#define MAIN_SNTP_TIME_SYNC_H_

/**
 * Starts the NTP server synchronization task.
 */
void sntp_time_sync_task_start(void);

/**
 * Returns local time if set.
 * @return local timer buffer.
 */
char* sntp_time_sync_get_time(void);

#endif /* MAIN_SNTP_TIME_SYNC_H_ */