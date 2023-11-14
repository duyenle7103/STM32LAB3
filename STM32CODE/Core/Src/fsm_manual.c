/*
 * fsm_manual.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#include "fsm_manual.h"

void increase_time(int color)
{
	increment++;
	if ((time_display[RED] + increment*SECOND)/SECOND > MAX_RANGE)
	{
		increment = -time_display[color];
	}
}

void fsm_manual_run()
{
	switch (status_man)
	{
	case MAN_RED:
		if (timer_flag[BLINKING_LED] == 1)
		{
			led_blinking(RED);
		}
		updateLedBuffer((time_display[RED] + increment*SECOND)/SECOND, status_man);
		if (is_button_pressed(BUTTON0) == 1)
		{
			status_man = MAN_AMBER;
			on_light(AMBER, SINGLE_LED1);
			on_light(AMBER, SINGLE_LED2);
			increment = 0;
		}
		if (is_button_pressed(BUTTON1) == 1)
		{
			increase_time(RED);
		}
		if (is_button_pressed(BUTTON2) == 1)
		{
			time_display[RED] += increment*SECOND;
			increment = 0;
		}
		break;
	case MAN_AMBER:
		if (timer_flag[BLINKING_LED] == 1)
		{
			led_blinking(AMBER);
		}
		updateLedBuffer((time_display[AMBER] + increment*SECOND)/SECOND, status_man);
		if (is_button_pressed(BUTTON0) == 1)
		{
			status_man = MAN_GREEN;
			on_light(GREEN, SINGLE_LED1);
			on_light(GREEN, SINGLE_LED2);
			increment = 0;
		}
		if (is_button_pressed(BUTTON1) == 1)
		{
			increase_time(AMBER);
		}
		if (is_button_pressed(BUTTON2) == 1)
		{
			time_display[AMBER] += increment*SECOND;
			increment = 0;
		}
		break;
	case MAN_GREEN:
		if (timer_flag[BLINKING_LED] == 1)
		{
			led_blinking(GREEN);
		}
		updateLedBuffer((time_display[GREEN] + increment*SECOND)/SECOND, status_man);
		if (is_button_pressed(BUTTON0) == 1)
		{
			status[SINGLE_LED1] = AUTO_RED;
			setTimer(time_display[RED], SINGLE_LED1);
			status[SINGLE_LED2] = AUTO_GREEN;
			setTimer(time_display[GREEN], SINGLE_LED2);
			status_man = MAN_NOTHING;
			increment = 0;
		}
		if (is_button_pressed(BUTTON1) == 1)
		{
			increase_time(GREEN);
		}
		if (is_button_pressed(BUTTON2) == 1)
		{
			time_display[GREEN] += increment*SECOND;
			increment = 0;
		}
		break;
	default:
	}
}
