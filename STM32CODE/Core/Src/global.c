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

// Define 7 segment led anode's port
GPIO_TypeDef *ANODE7SEG_port[N0_OF_7SEG] = {
		LED0_GPIO_Port, LED1_GPIO_Port, LED2_GPIO_Port, LED3_GPIO_Port
};
// Define 7 segment led anode's pin
uint16_t ANODE7SEG_pin[N0_OF_7SEG] = {
		LED0_Pin, LED1_Pin, LED2_Pin, LED3_Pin
};

// Array store time display for each color
unsigned int time_display[N0_OF_LED];
// Variable store increment for each color
int increment = 0;

// Define array to store status of LEDs on 2 road
unsigned int status[N0_OF_ROAD];
// Define variable to store status manual
unsigned int status_man = MAN_NOTHING;

// Define led buffer for scanning
unsigned int index_led = 0;
unsigned int led_buffer[N0_OF_7SEG] = {1, 2, 3, 4};
