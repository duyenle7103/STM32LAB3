/*
 * timer.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Duyen
 */

#include "main.h"
#include "input_reading.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef * htim)
{
	if (htim->Instance == TIM2)
	{
		button_reading();
	}
}
