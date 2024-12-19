/*
 * button.h
 *
 *  Created on: Dec 17, 2024
 *      Author: Lucas Guilherme
 */

#ifndef BUTTON_INC_BUTTON_H_
#define BUTTON_INC_BUTTON_H_

#include "stm32f4xx_hal.h"
#include "main.h"

#define DEBOUCE_TIME		100
#define BOTAO1_Pin GPIO_PIN_1
#define BOTAO1_GPIO_Port GPIOA
#define BOTAO2_Pin GPIO_PIN_4
#define BOTAO2_GPIO_Port GPIOA

void PrecionaBotao(void);
#endif /* BUTTON_INC_BUTTON_H_ */
