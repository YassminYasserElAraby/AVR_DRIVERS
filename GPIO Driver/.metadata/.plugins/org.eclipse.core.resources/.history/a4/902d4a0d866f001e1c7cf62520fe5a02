/*
 * task3.c
 *
 *  Created on: Oct 20, 2023
 *      Author: SCH
 */

#include "stdio.h"
#include "avr/io.h" /* To use the IO Ports Registers */
#include "util/delay.h"
#include "Led.h"

int main(void)
{
	/*Configure the pins of Led as output pins*/
	Setup_LedDirection();

	/*Turn off the 4-leds at the beginning by clear the bit 7 in PORTB and bit 4,5,6 in PORTA*/
	Init_Led(PORTB_ID,PIN7_ID);

		while(1)
		{
		  /*Turn on the Red(first) led only*/
			Setup_LED_ON(PORTB_ID,PIN7_ID);
			_delay_ms(1000);
			Setup_LED_OFF(PORTB_ID,PIN7_ID);
			_delay_ms(1000);

		  /*Turn on the Green(Second) led only*/
			Setup_LED_ON(PORTA_ID,PIN4_ID);
			_delay_ms(1000);
			Setup_LED_OFF(PORTA_ID,PIN4_ID);
			_delay_ms(1000);

		  /*Turn on the Blue(Third) led only*/
			Setup_LED_ON(PORTA_ID,PIN5_ID);
			_delay_ms(1000);
			Setup_LED_OFF(PORTA_ID,PIN5_ID);
			_delay_ms(1000);

		  /*Turn on the Yellow(Fourth) led only*/
			Setup_LED_ON(PORTA_ID,PIN6_ID);
			_delay_ms(1000);
			Setup_LED_OFF(PORTA_ID,PIN6_ID);
			_delay_ms(1000);
		}
}

