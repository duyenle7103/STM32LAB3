/*
 * segment_display.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#include "segment_display.h"

void display7SEG(int num)
{
	switch (num)
	{
	case 0:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	}
}

void choose7SEG(int index)
{
	switch (index)
	{
	case 0:
		HAL_GPIO_WritePin(ANODE7SEG_port[0], ANODE7SEG_pin[0], RESET);
		HAL_GPIO_WritePin(ANODE7SEG_port[1], ANODE7SEG_pin[1], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[2], ANODE7SEG_pin[2], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[3], ANODE7SEG_pin[3], SET);
		break;
	case 1:
		HAL_GPIO_WritePin(ANODE7SEG_port[0], ANODE7SEG_pin[0], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[1], ANODE7SEG_pin[1], RESET);
		HAL_GPIO_WritePin(ANODE7SEG_port[2], ANODE7SEG_pin[2], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[3], ANODE7SEG_pin[3], SET);
		break;
	case 2:
		HAL_GPIO_WritePin(ANODE7SEG_port[0], ANODE7SEG_pin[0], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[1], ANODE7SEG_pin[1], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[2], ANODE7SEG_pin[2], RESET);
		HAL_GPIO_WritePin(ANODE7SEG_port[3], ANODE7SEG_pin[3], SET);
		break;
	default:
		HAL_GPIO_WritePin(ANODE7SEG_port[0], ANODE7SEG_pin[0], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[1], ANODE7SEG_pin[1], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[2], ANODE7SEG_pin[2], SET);
		HAL_GPIO_WritePin(ANODE7SEG_port[3], ANODE7SEG_pin[3], RESET);
	}
}

void update7SEG(int index)
{
	display7SEG(led_buffer[index]);
	choose7SEG(index);
}

void displayNum()
{
	update7SEG(index_led);
	if (timer_flag[ANODE7SEG_LED] == 1)
	{
		setTimer(DURATION_FOR_SCAN, ANODE7SEG_LED);
		index_led++;
		if (index_led >= N0_OF_7SEG)
		{
			index_led = 0;
		}
	}
}

void updateLedBuffer(int value1, int value2)
{
	led_buffer[0] = value1/10;
	led_buffer[1] = value1%10;
	led_buffer[2] = value2/10;
	led_buffer[3] = value2%10;
}
