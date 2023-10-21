/*
 * 7_segment_Decoder.c
 *
 *  Created on: Oct 20, 2023
 *      Author:Yassmin Yasser El-Araby
 *
 */
#include "DRV_Interface.h"
#include "DRV_Config.h"
#include "se_segment_Decoder.h"

/*
 * Description :
 * Setup the direction of the Decoder and 7-segment pins input/output.
 */
void Eta32mini_SevenSegment_SetPinDirection(void)
{
	/*Set up the direction of the 7-segment pins as output*/
	GPIO_SetupPinDirection(PORTB_ID,PIN6_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTB_ID,PIN5_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTA_ID,PIN2_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTA_ID,PIN3_ID,PIN_OUTPUT);

	/*Set up the direction of the Decoder pins as output*/
	GPIO_SetupPinDirection(PORTB_ID,PIN0_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTB_ID,PIN1_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTB_ID,PIN2_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTB_ID,PIN4_ID,PIN_OUTPUT);
}

/*
 * Description :
 * Setup the Value you need to display to the Decoder.
 */
void Eta32mini_SevenSegment_Display(uint8 value)
{
	switch(value)
	{
	case 1:
		GPIO_SetupPinValue(PORTB_ID,PIN6_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN5_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		break;

	case 2:
		GPIO_SetupPinValue(PORTB_ID,PIN6_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN5_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		break;

	case 3:
		GPIO_SetupPinValue(PORTB_ID,PIN6_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN5_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTA_ID,PIN2_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTA_ID,PIN3_ID,LOGIC_HIGH);
		break;

	case 4:
		GPIO_SetupPinValue(PORTB_ID,PIN6_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN5_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTA_ID,PIN2_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTA_ID,PIN3_ID,LOGIC_LOW);
		break;
	}
}

/*
 * Description :
 * Setup the Value you need to display to the Decoder.
 */
void Decoder_SevenSegment_Display(uint8 number, uint8 value)
{
	Eta32mini_SevenSegment_Display(value);

	switch(number)
	{
	case 0:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 1:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 2:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 3:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 4:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 5:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 6:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 7:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 8:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_LOW);
		break;

	case 9:
		GPIO_SetupPinValue(PORTB_ID,PIN0_ID,LOGIC_HIGH);
		GPIO_SetupPinValue(PORTB_ID,PIN1_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN2_ID,LOGIC_LOW);
		GPIO_SetupPinValue(PORTB_ID,PIN4_ID,LOGIC_HIGH);
		break;
	}
}


