/*
 * led_display.c
 *
 *  Created on: Nov 1, 2023
 *      Author: Duyen
 */

#include "led_display.h"

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

void toggle_led(int color, int index)
{
	switch (color)
	{
	case RED:
		HAL_GPIO_TogglePin(LED_port[index][RED], LED_pin[index][RED]);
		HAL_GPIO_WritePin(LED_port[index][AMBER], LED_pin[index][AMBER], SET);
		HAL_GPIO_WritePin(LED_port[index][GREEN], LED_pin[index][GREEN], SET);
		break;
	case AMBER:
		HAL_GPIO_WritePin(LED_port[index][RED], LED_pin[index][RED], SET);
		HAL_GPIO_TogglePin(LED_port[index][AMBER], LED_pin[index][AMBER]);
		HAL_GPIO_WritePin(LED_port[index][GREEN], LED_pin[index][GREEN], SET);
		break;
	default:
		HAL_GPIO_WritePin(LED_port[index][RED], LED_pin[index][RED], SET);
		HAL_GPIO_WritePin(LED_port[index][AMBER], LED_pin[index][AMBER], SET);
		HAL_GPIO_TogglePin(LED_port[index][GREEN], LED_pin[index][GREEN]);
	}
}

void led_blinking(int color)
{
	toggle_led(color, SINGLE_LED1);
	toggle_led(color, SINGLE_LED2);
	setTimer(DURATION_FOR_BLINKING, BLINKING_LED);
}
