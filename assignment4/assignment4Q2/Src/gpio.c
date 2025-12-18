/*
 * gpio.c
 *
 *  Created on: Dec 18, 2025
 *      Author: Shreyash
 */


#include <stdint.h>
#include <stdio.h>

#include"stm32f407xx.h"
#include"gpio.h"

void led_init(void) {
    RCC->AHB1ENR |= ~(BV(3));
    GPIOD->MODER &= ~(BV(29) | BV(28));
    GPIOD->MODER |= BV(28);

    GPIOD->OTYPER &= ~BV(14);
    GPIOD->OSPEEDR &= ~(BV(29) | BV(28));
    GPIOD->PUPDR &= ~(BV(29) | BV(28));
}

void switch_init(void) {

    RCC->AHB1ENR |= BV(0);


    GPIOA->MODER &= ~(BV(1) | BV(0));


    GPIOA->PUPDR &= ~(BV(1) | BV(0));
}

void led_on(void) {
    GPIOD->ODR |= BV(14);
}

void led_off(void) {
    GPIOD->ODR &= ~BV(14);
}

int switch_pressed(void) {
    return (GPIOA->IDR & BV(0)) != 0;
}
