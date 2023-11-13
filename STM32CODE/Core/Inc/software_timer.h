/*
 * software_timer.h
 *
 *  Created on: Nov 1, 2023
 *      Author: Duyen
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer5_flag;

void setTimer1(int duration);
void timer1Run();
void setTimer2(int duration);
void timer2Run();
void setTimer3(int duration);
void timer3Run();
void setTimer4(int duration);
void timer4Run();
void setTimer5(int duration);
void timer5Run();

#endif /* INC_SOFTWARE_TIMER_H_ */
