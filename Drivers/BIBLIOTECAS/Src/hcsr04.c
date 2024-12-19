/*
 * hcsr04.c
 *
 *  Created on: Dec 18, 2024
 *      Author: PC
 */

#include "hcsr04.h"


void HCSR04_Read(void)
{
	HAL_GPIO_WritePin(TRIGER_GPIO_Port, TRIGER_Pin, GPIO_PIN_SET);  // pull the TRIG pin HIGH
	delay(10);  // wait for 10 us
	HAL_GPIO_WritePin(TRIGER_GPIO_Port, TRIGER_Pin, GPIO_PIN_RESET);  // pull the TRIG pin low

	__HAL_TIM_ENABLE_IT(&htim3, TIM_IT_CC2);
}


void delay(uint16_t time)
{
	__HAL_TIM_SET_COUNTER(&htim3, 0);
	while(__HAL_TIM_GET_COUNTER(&htim3) < time);
}
