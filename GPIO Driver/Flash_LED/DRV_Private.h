/********************************************************************************************************
 * File Name : DRV_Private.h
 *
 * Data : 8 / 6 / 2023
 *
 * Description: Initialization of Registers in AVR
 *
 * Author : Yassmin Yasser El-Araby
 ********************************************************************************************************/

#ifndef DRV_PRIVATE_H_
#define DRV_PRIVATE_H_

/* Start Address of PORTRA Register & direction & PIN */
#define PORTA      (*(volatile uint8* (0x3B)))
#define DDRA       (*(volatile uint8* (0x3A)))
#define PINA       (*(volatile uint8* (0x39)))

/* Start Address of PORTRB Register & direction & PIN */
#define PORTB      (*(volatile uint8* (0x38)))
#define DDRB       (*(volatile uint8* (0x37)))
#define PINB       (*(volatile uint8* (0x36)))

/* Start Address of PORTRC Register & direction & PIN */
#define PORTC      (*(volatile uint8* (0x35)))
#define DDRC       (*(volatile uint8* (0x34)))
#define PINC       (*(volatile uint8* (0x33)))

/* Start Address of PORTRD Register & direction & PIN */
#define PORTD      (*(volatile uint8* (0x32)))
#define DDRD       (*(volatile uint8* (0x31)))
#define PIND       (*(volatile uint8* (0x30)))

#endif /* DRV_PRIVATE_H_ */
