/*
 * input_reading.c
 *
 *  Created on: Nov 1, 2023
 *      Author: Duyen
 */

#include "input_reading.h"

#define BUTTON_IS_PRESSED GPIO_PIN_RESET
#define BUTTON_IS_RELEASED GPIO_PIN_SET
// The buffer that the final result is stored after debouncing
static GPIO_PinState buttonBuffer[N0_OF_BUTTONS];
// We define two buffers for debouncing
static GPIO_PinState debounceButtonBuffer1[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[N0_OF_BUTTONS];
// We define a array of flag for button pressed
static uint8_t flagForButtonPress[N0_OF_BUTTONS];
// The timer counters count down from DURATION_FOR_AUTO_INCREASING to 0
static uint8_t timerButtonPress[N0_OF_BUTTONS];

void subKeyProcess(uint8_t index)
{
	flagForButtonPress[index] = 1;
}

void button_reading(void)
{
	for (unsigned int i = 0; i < N0_OF_BUTTONS; i++)
	{
		debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
		debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(BUTTON_port[i], BUTTON_pin[i]);
		if (debounceButtonBuffer1[i] == debounceButtonBuffer2[i])
		{
			if (buttonBuffer[i] != debounceButtonBuffer1[i])
			{
				buttonBuffer[i] = debounceButtonBuffer1[i];
				if (buttonBuffer[i] == BUTTON_IS_PRESSED)
				{
					subKeyProcess(i);
					timerButtonPress[i] = DURATION_FOR_AUTO_INCREASING/TICK;
				}
			}
			else
			{
				timerButtonPress[i]--;
				if(timerButtonPress[i] <= 0)
				{
					buttonBuffer[i] = BUTTON_IS_RELEASED;
				}
			}
		}
	}
}

unsigned char is_button_pressed(uint8_t index)
{
	if (index >= N0_OF_BUTTONS)
	{
		return 0;
	}
	if (flagForButtonPress[index] == 1)
	{
		flagForButtonPress[index] = 0;
		return 1;
	}
	return 0;
}
