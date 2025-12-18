/*
 * gpio.c
 *
 *  Created on: Dec 18, 2025
 *      Author: Shreyash
 */

#include "gpio.h"

void GPIO_Init(void) {
    RCC->AHB1ENR |= (1 << 0);
    RCC->AHB1ENR |= (1 << 3);

    GPIOA->MODER &= ~(0x3 << 0);

    GPIOA->PUPDR &= ~(0x3 << 0);
    GPIOD->MODER &= ~(0x3 << (12 * 2));
    GPIOD->MODER |=  (0x1 << (12 * 2));
    GPIOD->MODER &= ~(0x3 << (15 * 2));
    GPIOD->MODER |=  (0x1 << (15 * 2));
}

uint8_t Read_Switch(void) {
    return (GPIOA->IDR & (1 << 0)) ? 1 : 0;
}

void LED_On(uint16_t pin) {
    GPIOD->ODR |= (1 << pin);
}

void LED_Off(uint16_t pin) {
    GPIOD->ODR &= ~(1 << pin);
}

