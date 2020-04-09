/*	Author: sflei002
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
DDRA = 0x00;
PORTA = 0xFF;
DDRB = 0x00;
PORTB = 0xFF;
DDRC = 0xFF;
PORTC = 0x00;
unsigned char A_0 = 0x00;
unsigned char A_1 = 0x00;
unsigned char A_2 = 0x00;
unsigned char A_3 = 0x00;
unsigned char A_4 = 0x00;    
unsigned char A_5 = 0x00;
unsigned char A_6 = 0x00;
unsigned char A_7 = 0x00;
unsigned char B_0 = 0x00;
unsigned char B_1 = 0x00;
unsigned char B_2 = 0x00;
unsigned char B_3 = 0x00;
unsigned char B_4 = 0x00;
unsigned char B_5 = 0x00;
unsigned char B_6 = 0x00;
unsigned char B_7 = 0x00;
unsigned char cntA = 0x00;
unsigned char cntB = 0x00;

    while (1) {
	A_0 = PINA & 0x01;
	A_1 = PINA & 0x02;
	A_2 = PINA & 0x04;
	A_3 = PINA & 0x08;
	A_4 = PINA & 0x10;
	A_5 = PINA & 0x20;
	A_6 = PINA & 0x40;
	A_7 = PINA & 0x80;

	B_0 = PINB & 0x01;
        B_1 = PINB & 0x02;
        B_2 = PINB & 0x04;
        B_3 = PINB & 0x08;
        B_4 = PINB & 0x10;
        B_5 = PINB & 0x20;
        B_6 = PINB & 0x40;
        B_7 = PINB & 0x80;
	
	cntA = A_0 + (A_1 >> 1) + (A_2 >> 2) + (A_3 >> 3) + (A_4 >> 4) + (A_5 >> 5) + (A_6 >> 6) + (A_7 >> 7);
	cntB = B_0 + (B_1 >> 1) + (B_2 >> 2) + (B_3 >> 3) + (B_4 >> 4) + (B_5 >> 5) + (B_6 >> 6) + (B_7 >> 7);
	PORTC = cntA + cntB;
	
    }

}
