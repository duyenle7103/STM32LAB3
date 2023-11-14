/*
 * global.h
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

// We aim to work with more than one buttons
#define N0_OF_BUTTONS 3
// Timer interrupt duration is 10ms
#define TICK 10

#define INIT 1
#define AUTO_RED 2
#define AUTO_YELLOW 3
#define AUTO_GREEN 4

#define MAN_RED 12
#define MAN_YELLOW 13
#define MAN_GREEN 14

extern int status;

#endif /* INC_GLOBAL_H_ */
