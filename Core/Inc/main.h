/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BOTAO1_Pin GPIO_PIN_1
#define BOTAO1_GPIO_Port GPIOA
#define BOTAO1_EXTI_IRQn EXTI1_IRQn
#define BOTAO2_Pin GPIO_PIN_4
#define BOTAO2_GPIO_Port GPIOA
#define BOTAO2_EXTI_IRQn EXTI4_IRQn
#define LED_VERDE_Pin GPIO_PIN_5
#define LED_VERDE_GPIO_Port GPIOA
#define TRIGER_Pin GPIO_PIN_6
#define TRIGER_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

#define TRIGER_Pin GPIO_PIN_6
#define TRIGER_GPIO_Port GPIOA

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
