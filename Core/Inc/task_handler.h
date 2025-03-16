/*
 * task_handler.h
 *
 *  Created on: Mar 16, 2025
 *      Author: KemalT
 */

#ifndef INC_TASK_HANDLER_H_
#define INC_TASK_HANDLER_H_


void menu_task(void *param);
void cmd_handler_task(void *param);
void print_task(void *param);
void led_task(void *param);
void rtc_task(void *param);

#endif /* INC_TASK_HANDLER_H_ */
