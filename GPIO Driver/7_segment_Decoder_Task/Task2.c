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

	/*Set 7-segment as output bin 0 & 1 & 2 & 4 in PORTB*/
	DDRB  |= (0x17);
	PORTB &= (~(0xE8));

	while(1)
	{
		if((PORTB & 0xE8) == 9)
		{
			count = 0;
		}
		else
		{
			count++;
		}
		PORTB = (PORTB & 0xE8) | (count & 0x17);
	}
}

