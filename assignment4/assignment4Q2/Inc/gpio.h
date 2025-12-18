/*
 * gpio.h
 *
 *  Created on: Dec 18, 2025
 *      Author: Shreyash
 */

/*
 * gpio.h
 *
 *  Created on: Dec 18, 2025
 *      Author: Shreyas
 */

#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>
#include "stm32f407xx.h"

#define BV(n) (1 << (n))

// LED control
void led_init(void);
void led_on(void);
void led_off(void);

// Switch control
void switch_init(void);
int switch_pressed(void);

#endif /* GPIO_H */
