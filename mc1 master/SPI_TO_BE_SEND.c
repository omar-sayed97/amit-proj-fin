/*
 * SPI_TO_BE_SEND.c
 *
 * Created: 6/16/2021 2:16:17 PM
 *  Author: omar.sayed
 */ 
#include "SPI.h"
#define F_CPU  16000000
#include <util/delay.h>
#include "SPI_TO_BE_SEND.h"

uint8 tx_data = 1;
uint8 rx_data = 0;


void SPI_SENDING(void){
	
	rx_data = SPI_TranSiver(tx_data);
	
	if(rx_data == 2)
	{
		rx_data = 0;
	}
	
	_delay_ms(1000);
}
	