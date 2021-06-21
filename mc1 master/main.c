/*
 * projj.c
 *
 * Created: 6/16/2021 1:29:57 PM
 * Author : omar.sayed
 */ 

#define F_CPU 16000000
#include <util/delay.h>

#include "UART.h"
#include "LCD.h"
#include "SPI.h"

int main(void)
{
	UART_Init();
	LCD_Init();
	
SPI_Master_Init();

SPI_Master_InitTrans();

_delay_ms(1000);
	
	while (1)
	{
		UART_SENDING();
		SPI_SENDING();
	}
}



