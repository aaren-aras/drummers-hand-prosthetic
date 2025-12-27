#ifndef STM32_CONFIG_H
#define STM32_CONFIG_H

#include "stm32f1xx_hal.h"

// Example pin for EMG sensor
#define EMG_ADC_CHANNEL ADC_CHANNEL_1

// Example motor PWM pin / timer
#define MOTOR_PWM_TIMER htim2
#define MOTOR_PWM_CHANNEL TIM_CHANNEL_1

// Fingers
#define FINGER_INDEX 0  // Thumb as example

#endif
