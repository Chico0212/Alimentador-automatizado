/*
 * buzzer.h
 *
 *  Created on: Dec 14, 2024
 *      Author: Lucas Guilherme
 */
#include "main.h"

#ifndef BUZZER_INC_BUZZER_H_
#define BUZZER_INC_BUZZER_H_

#define TIM_FREQ			90000000
#define COUNTER_PERIOD 		0xffff
#define DURACAO_NO_TOM		30

uint32_t PrescaleFrequencia(uint32_t Freqencia);
void PlayTone (uint32_t *tone, uint32_t *duration, int *pause, int size);
void NoTone(void);

#endif /* BUZZER_INC_BUZZER_H_ */
