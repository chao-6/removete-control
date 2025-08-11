/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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

extern uint8_t Mode;
extern uint8_t Transmit_Flag;
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
extern uint8_t BAT_Percent;//手柄电量占比
extern uint8_t BAT_Plane_Percent;//飞控电量占比
extern double MPU6050_Value;
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ROLL_ADC_Pin GPIO_PIN_1
#define ROLL_ADC_GPIO_Port GPIOA
#define PITCH_ADC_Pin GPIO_PIN_2
#define PITCH_ADC_GPIO_Port GPIOA
#define ACC_ADC_Pin GPIO_PIN_3
#define ACC_ADC_GPIO_Port GPIOA
#define BAT_ADC_Pin GPIO_PIN_4
#define BAT_ADC_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_5
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_6
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_7
#define LED3_GPIO_Port GPIOA
#define Key1_Pin GPIO_PIN_1
#define Key1_GPIO_Port GPIOB
#define Key2_Pin GPIO_PIN_11
#define Key2_GPIO_Port GPIOB
#define Key10_Pin GPIO_PIN_8
#define Key10_GPIO_Port GPIOA
#define Key3_Pin GPIO_PIN_3
#define Key3_GPIO_Port GPIOB
#define Key6_Pin GPIO_PIN_4
#define Key6_GPIO_Port GPIOB
#define Key5_Pin GPIO_PIN_5
#define Key5_GPIO_Port GPIOB
#define Key8_Pin GPIO_PIN_6
#define Key8_GPIO_Port GPIOB
#define Key9_Pin GPIO_PIN_7
#define Key9_GPIO_Port GPIOB
#define Key7_Pin GPIO_PIN_8
#define Key7_GPIO_Port GPIOB
#define Key4_Pin GPIO_PIN_9
#define Key4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
