/*
 * software_timer.c
 *
 *  Created on: Nov 1, 2023
 *      Author: Duyen
 */

#ifndef SRC_SOFTWARE_TIMER_C_
#define SRC_SOFTWARE_TIMER_C_

#include "software_timer.h"

int timer_counter[N0_OF_FLAG];
int timer_flag[N0_OF_FLAG];

void setTimer(int duration, int index)
{
	timer_counter[index] = duration/TICK;
	timer_flag[index] = 0;
}

void timerRun(int index)
{
	timer_counter[index]--;
	if(timer_counter[index] <= 0)
	{
		timer_flag[index] = 1;
	}
}

#endif /* SRC_SOFTWARE_TIMER_C_ */
