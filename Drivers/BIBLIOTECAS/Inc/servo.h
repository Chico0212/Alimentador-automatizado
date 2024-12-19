/*
 * servo.h
 *
 *  Created on: Dec 18, 2024
 *      Author: Lucas Guilherme
 */

#ifndef SERVO_MOTOR_INC_SERVO_H_
#define SERVO_MOTOR_INC_SERVO_H_

#include "stm32f4xx_hal.h"
#include "main.h"

#define DELAY_PADRAO 5000

void SERVO_Init(void);
void ComportaOnOff(void);

#endif /* SERVO_MOTOR_INC_SERVO_H_ */
