#ifndef _LED_H
#define _LED_H

#include "reg52.h"
//led pin
#define LED P3^0

void led_on(void);
void led_off(void);
#endif

