/*
 * software_timer.h
 *
 *  Created on: Nov 1, 2023
 *      Author: Duyen
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "global.h"

// Number of timer flag be used
#define N0_OF_FLAG 4

extern int timer_flag[N0_OF_FLAG];

void setTimer(int duration, int index);
void timerRun(int index);

#endif /* INC_SOFTWARE_TIMER_H_ */
