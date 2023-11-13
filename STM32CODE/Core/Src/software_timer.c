/*
 * software_timer.c
 *
 *  Created on: Nov 1, 2023
 *      Author: Duyen
 */

#ifndef SRC_SOFTWARE_TIMER_C_
#define SRC_SOFTWARE_TIMER_C_

#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;
int timer2_counter = 0;
int timer2_flag = 0;
int timer3_counter = 0;
int timer3_flag = 0;
int timer4_counter = 0;
int timer4_flag = 0;
int timer5_counter = 0;
int timer5_flag = 0;

void setTimer1(int duration)
{
	timer1_counter = duration;
	timer1_flag = 0;
}
void timer1Run()
{
	timer1_counter--;
	if(timer1_counter <= 0)
	{
		timer1_flag = 1;
	}
}
void setTimer2(int duration)
{
	timer2_counter = duration;
	timer2_flag = 0;
}
void timer2Run()
{
	timer2_counter--;
	if(timer2_counter <= 0)
	{
		timer2_flag = 1;
	}
}
void setTimer3(int duration)
{
	timer3_counter = duration;
	timer3_flag = 0;
}
void timer3Run()
{
	timer3_counter--;
	if(timer3_counter <= 0)
	{
		timer3_flag = 1;
	}
}
void setTimer4(int duration)
{
	timer4_counter = duration;
	timer4_flag = 0;
}
void timer4Run()
{
	timer4_counter--;
	if(timer4_counter <= 0)
	{
		timer4_flag = 1;
	}
}
void setTimer5(int duration)
{
	timer5_counter = duration;
	timer5_flag = 0;
}
void timer5Run()
{
	timer5_counter--;
	if(timer5_counter <= 0)
	{
		timer5_flag = 1;
	}
}

#endif /* SRC_SOFTWARE_TIMER_C_ */
