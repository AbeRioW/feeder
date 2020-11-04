#include "led.h"
sbit led = LED;

void led_on(void)
{
	  led = 0;
}

void led_off(void)
{
	  led = 1;
}
