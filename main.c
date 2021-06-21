/*
 * spi slaveeeeee.c
 *
 * Created: 6/16/2021 12:56:08 PM
 * Author : omar.sayed
 */ 

#include "SPI.h"
#define F_CPU  16000000
#include <util/delay.h>


int main(void)
{
	
	
	DIO_SetPortDir(DIO_PORTD,DIO_PORT_OUTPUT);
	SPI_Master_Init();
	
	SPI_Slave_Init();
	
	
	while (1)
	{
		SPI_SLAVE_OUTPUT();
	}
}
