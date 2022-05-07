/*
 * File: arduino_baremetal.ino
 * 
 * Version: 0.0.0
 * Author: Keegan Ritchie
 * Date: May 7 2022
 */

/*
 * Architecture: AVR
 * Microcontroller: ATmega328
 * Clock Speed: 16 MHz
 */

// Application Libraries
#include "/Users/kritchie0/Developer/Foundation/gpio.h"

// Arduino Libraries
#include <avr/io.h>

#define LED1 (1 << 5)

//static void bit_set(volatile unsigned char *dst, uint8_t bit_mask);
//static void bit_clear(volatile unsigned char *dst, uint8_t bit_mask);

void setup() 
{
  bit_set(&DDRB, LED1);
  bit_set(&PORTB, LED1);
}

void loop() 
{
//NOTHING HERE
}
#if 0
// Local Functions
static void bit_set(volatile unsigned char *dst, uint8_t bit_mask)
{
  *dst |= bit_mask;
}

static void bit_clear(volatile unsigned char *dst, uint8_t bit_mask)
{
  *dst &= (~bit_mask);
}
#endif