/*
 * global.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Duyen
 */

#include "global.h"

// Define BUTTON's port
GPIO_TypeDef *BUTTON_port[N0_OF_BUTTONS] = {
		BUTTON0_GPIO_Port, BUTTON1_GPIO_Port, BUTTON2_GPIO_Port
};
// Define BUTTON's pin
uint16_t BUTTON_pin[N0_OF_BUTTONS] = {
		BUTTON0_Pin, BUTTON1_Pin, BUTTON2_Pin
};

// Define single LED's port
GPIO_TypeDef *LED_port[N0_OF_ROAD][N0_OF_LED] = {
		{RED1_GPIO_Port, AMBER1_GPIO_Port, GREEN1_GPIO_Port},
		{RED2_GPIO_Port, AMBER2_GPIO_Port, GREEN2_GPIO_Port}
};
// Define single LED's pin
uint16_t LED_pin[N0_OF_ROAD][N0_OF_LED] = {
		{RED1_Pin, AMBER1_Pin, GREEN1_Pin},
		{RED2_Pin, AMBER2_Pin, GREEN2_Pin}
};

// Variable for store mode
unsigned int mode = 0;
// Array store time display for each color
unsigned int time_display[N0_OF_LED];

// Define array to store status of LEDs on 2 road
unsigned int status[2];
