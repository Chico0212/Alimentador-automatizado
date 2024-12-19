/*
 * button.c
 *
 *  Created on: Dec 17, 2024
 *      Author: Lucas Guilherme
 */


#include "button.h"

extern int count;

void PrecionaBotao(void){
	if(HAL_GPIO_ReadPin(BOTAO2_GPIO_Port, BOTAO2_Pin)){
		while(HAL_GPIO_ReadPin(BOTAO2_GPIO_Port, BOTAO2_Pin) == GPIO_PIN_SET);
		HAL_GPIO_TogglePin(LED_VERDE_GPIO_Port, LED_VERDE_Pin);
		count++;
	}
}
