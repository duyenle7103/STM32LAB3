/*
 * fsm_automatic.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#include "fsm_automatic.h"

void on_light(int color, int index)
{
	switch (color)
	{
	case RED:
		HAL_GPIO_WritePin(LED_port[index][RED], LED_pin[index][RED], RESET);
		HAL_GPIO_WritePin(LED_port[index][AMBER], LED_pin[index][AMBER], SET);
		HAL_GPIO_WritePin(LED_port[index][GREEN], LED_pin[index][GREEN], SET);
		break;
	case AMBER:
		HAL_GPIO_WritePin(LED_port[index][RED], LED_pin[index][RED], SET);
		HAL_GPIO_WritePin(LED_port[index][AMBER], LED_pin[index][AMBER], RESET);
		HAL_GPIO_WritePin(LED_port[index][GREEN], LED_pin[index][GREEN], SET);
		break;
	default:
		HAL_GPIO_WritePin(LED_port[index][RED], LED_pin[index][RED], SET);
		HAL_GPIO_WritePin(LED_port[index][AMBER], LED_pin[index][AMBER], SET);
		HAL_GPIO_WritePin(LED_port[index][GREEN], LED_pin[index][GREEN], RESET);
	}
}

void fsm_automatic_run(int index)
{
	switch (status[index])
	{
	case INIT:
		on_light(RED, index);
		status[index] = AUTO_RED;
		setTimer(500, 0);
		break;
	case AUTO_RED:
		on_light(RED, index);
		if (timer_flag[0] == 1)
		{
			status[index] = AUTO_GREEN;
			setTimer(300, 0);
		}
		break;
	case AUTO_AMBER:
		on_light(AMBER, index);
		if (timer_flag[0] == 1)
		{
			status[index] = AUTO_RED;
			setTimer(500, 0);
		}
		break;
	case AUTO_GREEN:
		on_light(GREEN, index);
		if (timer_flag[0] == 1)
		{
			status[index] = AUTO_AMBER;
			setTimer(200, 0);
		}
		break;
	default:
	}
}
