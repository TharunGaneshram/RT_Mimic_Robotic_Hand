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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define STEPPER_C1_Pin GPIO_PIN_0
#define STEPPER_C1_GPIO_Port GPIOC
#define STEPPER_C2_Pin GPIO_PIN_1
#define STEPPER_C2_GPIO_Port GPIOC
#define STEPPER_C3_Pin GPIO_PIN_2
#define STEPPER_C3_GPIO_Port GPIOC
#define STEPPER_C4_Pin GPIO_PIN_3
#define STEPPER_C4_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define STEPPER_E1_Pin GPIO_PIN_12
#define STEPPER_E1_GPIO_Port GPIOB
#define STEPPER_E2_Pin GPIO_PIN_13
#define STEPPER_E2_GPIO_Port GPIOB
#define STEPPER_E3_Pin GPIO_PIN_14
#define STEPPER_E3_GPIO_Port GPIOB
#define STEPPER_E4_Pin GPIO_PIN_15
#define STEPPER_E4_GPIO_Port GPIOB
#define STEPPER_D1_Pin GPIO_PIN_6
#define STEPPER_D1_GPIO_Port GPIOC
#define STEPPER_D2_Pin GPIO_PIN_7
#define STEPPER_D2_GPIO_Port GPIOC
#define STEPPER_D3_Pin GPIO_PIN_8
#define STEPPER_D3_GPIO_Port GPIOC
#define STEPPER_D4_Pin GPIO_PIN_9
#define STEPPER_D4_GPIO_Port GPIOC
#define STEPPER_A1_Pin GPIO_PIN_8
#define STEPPER_A1_GPIO_Port GPIOA
#define STEPPER_A2_Pin GPIO_PIN_9
#define STEPPER_A2_GPIO_Port GPIOA
#define STEPPER_A3_Pin GPIO_PIN_10
#define STEPPER_A3_GPIO_Port GPIOA
#define STEPPER_A4_Pin GPIO_PIN_11
#define STEPPER_A4_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define STEPPER_B1_Pin GPIO_PIN_3
#define STEPPER_B1_GPIO_Port GPIOB
#define STEPPER_B2_Pin GPIO_PIN_4
#define STEPPER_B2_GPIO_Port GPIOB
#define STEPPER_B3_Pin GPIO_PIN_5
#define STEPPER_B3_GPIO_Port GPIOB
#define STEPPER_B4_Pin GPIO_PIN_6
#define STEPPER_B4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
