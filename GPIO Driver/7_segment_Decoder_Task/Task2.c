/*
 * Task2.c
 *
 *  Created on: Oct 20, 2023
 *      Author: SCH
 */

#include "stdio.h"
#include "avr/io.h" /* To use the IO Ports Registers */
#include "util/delay.h"

int main()
{
	unsigned char count = 0;

	Eta32mini_SevenSegment_SetPinDirection();

	/*//Set 7-segment as output bin 0 & 1 & 2 & 4 in PORTB//
	DDRB  |= (0x17);
	PORTB &= (~(0xE8));*/

	while(1)
	{
		if(count == 9)
		{
			count = 0;
		}
		else
		{
			for(count=0; count<=9; count++)
			{
				count++;
				Decoder_SevenSegment_Display(count);
				_delay_ms(1000);
			}
		}

	}
}

