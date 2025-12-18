/*
 * gpio.h
 *
 *  Created on: Dec 18, 2025
 *      Author: Shreyash
 */

 #ifndef GPIO_H
#define GPIO_H

#include "stm32f4xx.h"  // Device header

// Function prototypes
void GPIO_Init(void);
uint8_t Read_Switch(void);
void LED_On(uint16_t pin);
void LED_Off(uint16_t pin);

#endif // GPIO_H
