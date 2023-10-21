/*
 * Task1.c
 *
 *  Created on: Oct 20, 2023
 *      Author: SCH
 */


#include "stdio.h"
#include "avr/io.h" /* To use the IO Ports Registers */
#include "util/delay.h"

void Eta32mini_SevenSegment_Display(unsigned char value)
{
	switch(value)
	{
	case 0:
		PORTB |= (1<<1);
		PORTB |= (1<<2);
		PORTB |= (1<<3);
		PORTB |= (1<<4);
		PORTB |= (1<<5);
		PORTB |= (1<<6);
		PORTB &= ~(1<<7);
		break;
	case 1:
		PORTB &= ~(1<<1);
		PORTB |= (1<<2);
		PORTB |= (1<<3);
		PORTB &= ~(1<<4);
		PORTB &= ~(1<<5);
		PORTB &= ~(1<<6);
		PORTB &= ~(1<<7);
		break;
	case 2:
		PORTB |= (1<<1);
		PORTB |= (1<<2);
		PORTB &= ~(1<<3);
		PORTB |= (1<<4);
		PORTB |= (1<<5);
		PORTB &= ~(1<<6);
		PORTB |= (1<<7);
		break;
	case 3:
		PORTB |= (1<<1);
		PORTB |= (1<<2);
		PORTB |= (1<<3);
		PORTB |= (1<<4);
		PORTB &= ~(1<<5);
		PORTB &= ~(1<<6);
		PORTB |= (1<<7);
		break;
	case 4:
		PORTB &= ~(1<<1);
		PORTB |= (1<<2);
		PORTB |= (1<<3);
		PORTB &= ~(1<<4);
		PORTB &= ~(1<<5);
		PORTB |= (1<<6);
		PORTB |= (1<<7);
		break;
	case 5:
		PORTB |= (1<<1);
		PORTB &= ~(1<<2);
		PORTB |= (1<<3);
		PORTB |= (1<<4);
		PORTB &= ~(1<<5);
		PORTB |= (1<<6);
		PORTB |= (1<<7);
		break;
	case 6:
		PORTB |= (1<<1);
		PORTB &= ~(1<<2);
		PORTB |= (1<<3);
		PORTB |= (1<<4);
		PORTB |= (1<<5);
		PORTB |= (1<<6);
		PORTB |= (1<<7);
		break;
	case 7:
		PORTB |= (1<<1);
		PORTB |= (1<<2);
		PORTB |= (1<<3);
		PORTB &= ~(1<<4);
		PORTB &= ~(1<<5);
		PORTB &= ~(1<<6);
		PORTB &= ~(1<<7);
		break;
	case 8:
		PORTB |= (1<<1);
		PORTB |= (1<<2);
		PORTB |= (1<<3);
		PORTB |= (1<<4);
		PORTB |= (1<<5);
		PORTB |= (1<<6);
		PORTB |= (1<<7);
		break;
	case 9:
		PORTB |= (1<<1);
		PORTB |= (1<<2);
		PORTB |= (1<<3);
		PORTB &= ~(1<<4);
		PORTB &= ~(1<<5);
		PORTB |= (1<<6);
		PORTB |= (1<<7);
		break;
	}
}

int main()
{
	unsigned char i = 0;

	/*Set 7-segment as output bin 0 & 1 & 2 & 4 in PORTB*/
	/*DDRB |= (0x17);
	PORTB &= (~(0xE8));*/

	while(1)
	{
		for(i=0; i<=9; i++)
		{
			Eta32mini_SevenSegment_Display(i);
			_delay_ms(1000);
		}
	}



	/*unsigned char count = 0;

		DDRD &= ~(1<<2);         // Set Bush bottom as input in PORTD in bin 2
		DDRD &= ~(1<<3);         // Set Bush bottom as input in PORTD in bin 3

		DDRC  |= (1<<6);
		PORTC |= (1<<6);

		DDRA  |= 0xFE;

		Eta32mini_SevenSegment_Display(count); // Display ZERO value on the 7-segment at the beginning

		while(1)
		{
			if( !(PIND & (1<<PD2)) ) // check if the push button at PD5 is pressed or not
			{
				_delay_ms(30);
				if( !(PIND & (1<<PD2)) ) //second check due to switch bouncing
				{
					if(count != 9)
					{
						count++;
					}
					Eta32mini_SevenSegment_Display(count); // Display the digit on the 7-segment
				}
				while( !(PIND & (1<<PD2)) ){} // wait until switch is released
			}
		}*/
}

