/*
 * global.h
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "timer.h"

// We aim to work with more than one buttons
#define N0_OF_BUTTONS 3
// Number of single led on 1 road
#define N0_OF_LED 3
// Number of road
#define N0_OF_ROAD 2
// Timer interrupt duration is 10ms
#define TICK 10
// Timer interrupt duration is 10ms, 1 second equal to 1000ms
#define DURATION_FOR_AUTO_INCREASING 1000

// Define single led status
#define INIT 0
#define AUTO_RED 1
#define AUTO_AMBER 2
#define AUTO_GREEN 3

// Define single led color
enum color{RED, AMBER, GREEN};

// Define index for using software_timer
#define SINGLE_LED 0

// Declare button's port and pin
extern GPIO_TypeDef *BUTTON_port[N0_OF_BUTTONS];
extern uint16_t BUTTON_pin[N0_OF_BUTTONS];

// Declare single led's port and pin
extern GPIO_TypeDef *LED_port[N0_OF_ROAD][N0_OF_LED];
extern uint16_t LED_pin[N0_OF_ROAD][N0_OF_LED];

// Declare variable to store mode and time display for each color
extern unsigned int mode;
extern unsigned int time_display[N0_OF_LED];

// Store status of single leds on each road
extern unsigned int status[2];

#endif /* INC_GLOBAL_H_ */
