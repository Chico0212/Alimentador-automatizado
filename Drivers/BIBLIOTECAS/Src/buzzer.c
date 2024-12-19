/*
 * buzzer.c
 *
 *  Created on: Dec 14, 2024
 *      Author: Lucas Guilherme
 */

#include "buzzer.h"

extern TIM_HandleTypeDef htim3;

uint32_t PrescaleFrequencia(uint32_t Freqencia)
{
	if(Freqencia == 0)
		return 0;
	else
		return((TIM_FREQ/(COUNTER_PERIOD*Freqencia)) - 1);
}

void NoTone(void)
{
	__HAL_TIM_SET_PRESCALER(&htim3, 0);
}

void PlayTone (uint32_t *tone, uint32_t *duration, int *pause, int size)
{
//	__HAL_TIM_SET_PRESCALER(&htim3, 300);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_3);
	HAL_Delay(2000); // Atraso para a duração do tom
    HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_3);
//    __HAL_TIM_SET_PRESCALER(&htim3, 0xffff - 1);
}

