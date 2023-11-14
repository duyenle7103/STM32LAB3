/*
 * global.h
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "led_display.h"
#include "segment_display.h"
#include "software_timer.h"
#include "timer.h"

// We aim to work with more than one buttons
#define N0_OF_BUTTONS 3
// Define button index
enum button_index{BUTTON0, BUTTON1, BUTTON2};
// Declare button's port and pin
extern GPIO_TypeDef *BUTTON_port[N0_OF_BUTTONS];
extern uint16_t BUTTON_pin[N0_OF_BUTTONS];

// Number of single led on 1 road
#define N0_OF_LED 3
// Number of road
#define N0_OF_ROAD 2
// Define single led color
enum color{RED, AMBER, GREEN};
// Declare single led's port and pin
extern GPIO_TypeDef *LED_port[N0_OF_ROAD][N0_OF_LED];
extern uint16_t LED_pin[N0_OF_ROAD][N0_OF_LED];

// Number of 7 segment led
#define N0_OF_7SEG 4
// Define 7 segment led anode's port and pin
extern GPIO_TypeDef *ANODE7SEG_port[N0_OF_7SEG];
extern uint16_t ANODE7SEG_pin[N0_OF_7SEG];
// Declare led buffer for scanning
extern unsigned int index_led;
extern unsigned int led_buffer[N0_OF_7SEG];

// Timer interrupt duration is 10ms
#define TICK 10
// Timer interrupt duration is 10ms, 1 second equal to 1000ms
#define DURATION_FOR_AUTO_INCREASING 1000
// Time duration for blink an LED in 2 Hz
#define DURATION_FOR_BLINKING 250
// Time duration for scan 7 segment led
#define DURATION_FOR_SCAN 250
// Define index for using software_timer
enum single_index{SINGLE_LED1, SINGLE_LED2, BLINKING_LED, ANODE7SEG_LED};

// Define manual led status
#define MAN_NOTHING 0
#define MAN_RED 1
#define MAN_AMBER 2
#define MAN_GREEN 3
// Define normal led status
#define AUTO_NOTHING 9
#define INIT 10
#define AUTO_RED 11
#define AUTO_AMBER 12
#define AUTO_GREEN 13
// Store status of single led on each road
extern unsigned int status[N0_OF_ROAD];
extern unsigned int status_man;

// Declare variable to store mode and time display for each color
extern unsigned int time_display[N0_OF_LED];

#endif /* INC_GLOBAL_H_ */
