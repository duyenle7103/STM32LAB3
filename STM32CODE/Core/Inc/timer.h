/*
 * timer.h
 *
 *  Created on: Nov 13, 2023
 *      Author: Duyen
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"
#include "input_reading.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef * htim);

#endif /* INC_TIMER_H_ */
