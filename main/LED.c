/*
 * LED.c
 *
 *  Created on: Nov 9, 2023
 *      Author: user
 */

#ifndef MAIN_LED_C_
#define MAIN_LED_C_



#endif /* MAIN_LED_C_ */
#include "driver/gpio.h"    // for gpio function
extern gpio_num_t LED1;     // LED1 in gpio function parameter
void LED_Init()
{
	gpio_set_direction(LED1, GPIO_MODE_OUTPUT);
}

void LED_On()
{
	gpio_set_level(LED1, 1);
}

void LED_Off()
{
	gpio_set_level(LED1, 0);
}
