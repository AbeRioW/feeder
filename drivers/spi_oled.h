#ifndef _SPI_H
#define _SPI_H

#include "reg52.h"

#define  u8 unsigned char 
#define  u16 unsigned short
#define  u32 unsigned int

struct OLED
{
     int x;
	 int y;
	 void (*init)(void);
	 void (*on)(void);
	 void (*off)(void);
};


extern struct OLED spi_oled;
//void delay_ms(u32 ms);
//void OLED_WR_Byte(u8 dat,u8 cmd);
//void OLED_Display_On(void);
//void OLED_Display_Off(void);
//void OLED_Clear(void);
//void OLED_Init(void);


#endif

