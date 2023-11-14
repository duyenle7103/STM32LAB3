/*
 * fsm_automatic.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#include "fsm_automatic.h"

void set_env()
{
	status[SINGLE_LED1] = AUTO_NOTHING;
	status[SINGLE_LED2] = AUTO_NOTHING;
	status_man = MAN_RED;
	on_light(RED, SINGLE_LED1);
	on_light(RED, SINGLE_LED2);
	setTimer(DURATION_FOR_BLINKING, BLINKING_LED);
}

void fsm_automatic_run(int index)
{
	switch (status[index])
	{
	case INIT:
		on_light(RED, index);
		status[index] = AUTO_RED;
		setTimer(time_display[RED], index);
		break;
	case AUTO_RED:
		on_light(RED, index);
		if (timer_flag[index] == 1)
		{
			status[index] = AUTO_GREEN;
			setTimer(time_display[GREEN], index);
		}
		if (is_button_pressed(BUTTON0) == 1)
		{
			set_env();
		}
		break;
	case AUTO_AMBER:
		on_light(AMBER, index);
		if (timer_flag[index] == 1)
		{
			status[index] = AUTO_RED;
			setTimer(time_display[RED], index);
		}
		if (is_button_pressed(BUTTON0) == 1)
		{
			set_env();
		}
		break;
	case AUTO_GREEN:
		on_light(GREEN, index);
		if (timer_flag[index] == 1)
		{
			status[index] = AUTO_AMBER;
			setTimer(time_display[AMBER], index);
		}
		if (is_button_pressed(BUTTON0) == 1)
		{
			set_env();
		}
		break;
	default:
	}
}
