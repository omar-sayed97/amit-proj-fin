/*
 * slave_outout.c
 *
 * Created: 6/17/2021 12:03:26 AM
 *  Author: omar.sayed
 */ 
#include "salve_output.h"
#define F_CPU  16000000
#include <util/delay.h>

void SPI_SLAVE_OUTPUT(void){
	uint8 tx_data = 2;
	uint8 rx_data = 0;
	rx_data = SPI_TranSiver(tx_data);
	
	if(rx_data == 1)
	{
		DIO_SetPinValue(DIO_PORTD,DIO_PIN0,DIO_PIN_HIGH);
		DIO_TogglePin(DIO_PORTD , DIO_PIN1);
		DIO_TogglePin(DIO_PORTD , DIO_PIN2);
		DIO_SetPinValue(DIO_PORTD,DIO_PIN3,DIO_PIN_HIGH);
		DIO_TogglePin(DIO_PORTD , DIO_PIN4);
		DIO_TogglePin(DIO_PORTD,DIO_PIN6);
		rx_data = 0;
	}
	
	_delay_ms(1000);
}