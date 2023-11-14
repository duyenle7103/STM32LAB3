/*
 * fsm_manual.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#include "fsm_manual.h"

void fsm_manual_run()
{
	switch (status_man)
	{
	case MAN_RED:
		if (timer_flag[BLINKING_LED] == 1)
		{
			led_blinking(RED);
		}
		if (is_button_pressed(BUTTON0) == 1)
		{
			status_man = MAN_AMBER;
			on_light(AMBER, SINGLE_LED1);
			on_light(AMBER, SINGLE_LED2);
		}
		break;
	case MAN_AMBER:
		if (timer_flag[BLINKING_LED] == 1)
		{
			led_blinking(AMBER);
		}
		if (is_button_pressed(BUTTON0) == 1)
		{
			status_man = MAN_GREEN;
			on_light(GREEN, SINGLE_LED1);
			on_light(GREEN, SINGLE_LED2);
		}
		break;
	case MAN_GREEN:
		if (timer_flag[BLINKING_LED] == 1)
		{
			led_blinking(GREEN);
		}
		if (is_button_pressed(BUTTON0) == 1)
		{
			status[SINGLE_LED1] = AUTO_RED;
			setTimer(time_display[RED], SINGLE_LED1);
			status[SINGLE_LED2] = AUTO_GREEN;
			setTimer(time_display[GREEN], SINGLE_LED2);
			status_man = MAN_NOTHING;
		}
		break;
	default:
	}
}
