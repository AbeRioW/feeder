#ifndef _LED_H
#define _LED_H

#include "reg52.h"
//模块上的LED接口，低电平导通
#define LED P3^0

void led_on(void);
void led_off(void);
#endif

