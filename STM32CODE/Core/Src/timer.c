/*
 * timer.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Duyen
 */

#include "timer.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef * htim)
{
	if (htim->Instance == TIM2)
	{
		timerRun(SINGLE_LED1);
		timerRun(SINGLE_LED2);
		timerRun(BLINKING_LED);
		timerRun(ANODE7SEG_LED);
		button_reading();
	}
}
