/*
 * servo.c
 *
 *  Created on: Dec 18, 2024
 *      Author: Lucas Guilherme
 */

#include "servo.h"

extern TIM_HandleTypeDef htim1;

void SERVO_Init(void){
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
}

//  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
//  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 250); // Euivalente a zero graus
//  HAL_Delay(DELAY_PADRAO);
//  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 750); // Equivalente a 90 graus
//  HAL_Delay(DELAY_PADRAO);
//  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 1250); // Equivalente a 180 graus
//  HAL_Delay(DELAY_PADRAO);

void ComportaOnOff(void){
//	  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
	  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 250); // Euivalente a zero graus
//	  HAL_Delay(DELAY_PADRAO);
	  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 1250); // Equivalente a 90 graus
	  HAL_Delay(DELAY_PADRAO);
	  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 250); // Equivalente a 180 graus
//	  HAL_Delay(DELAY_PADRAO);
}
