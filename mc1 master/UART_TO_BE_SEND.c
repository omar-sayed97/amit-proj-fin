/*
 * UART_TO_BE_SEND.c
 *
 * Created: 6/16/2021 1:45:36 PM
 *  Author: omar.sayed
 */ 
#define F_CPU 16000000
#include <util/delay.h>
#include "UART_TO_BE_SEND.h"
#include "UART.h"
#include "LCD.h"
uint8 data =0;
void UART_SENDING(void){
	
	
	data= UART_Rx();
	if (data)
	{
		LCD_WriteChar(data);
		data=0;
		
	}
	if(data==0){
		_delay_ms(1000);
		LCD_WriteString(" UART IS ON ");
		_delay_ms(4000);
		LCD_Clear();
		LCD_WriteString(" START SPI ");
		_delay_ms(4000);
		LCD_Clear();
		//break;
	}
}