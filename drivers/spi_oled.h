#ifndef _SPI_H
#define _SPI_H

#include "reg52.h"

#define  u8 unsigned char 
#define  u16 unsigned short
#define  u32 unsigned int

#define OLED_CMD  0	//write cmd
#define OLED_DATA 1	//write data

sbit OLED_SCL=P1^0;//SCL
sbit OLED_SDA=P1^1;//SDA
sbit OLED_RES =P1^6;//RES
sbit OLED_DC =P1^7;//DC
sbit OLED_CS=P3^2; //CS


#define OLED_SCL_Clr() OLED_SCL=0
#define OLED_SCL_Set() OLED_SCL=1

#define OLED_SDA_Clr() OLED_SDA=0
#define OLED_SDA_Set() OLED_SDA=1

#define OLED_RES_Clr() OLED_RES=0
#define OLED_RES_Set() OLED_RES=1

#define OLED_DC_Clr() OLED_DC=0
#define OLED_DC_Set() OLED_DC=1

#define OLED_CS_Clr()  OLED_CS=0
#define OLED_CS_Set()  OLED_CS=1

void delay_ms(u32 ms);
void OLED_WR_Byte(u8 dat,u8 cmd);
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Clear(void);
void OLED_Init(void);


#endif

