// Application Libraries

// Arduino Libraries
#include <avr/io.h>


#define LED1 (1 << 5)

static void bit_set(volatile unsigned char *dst, uint8_t bit_mask);
static void bit_clear(volatile unsigned char *dst, uint8_t bit_mask);

void setup() 
{
  bit_set(&DDRB, LED1);
  bit_set(&PORTB, LED1);
}

void loop() 
{
//NOTHING HERE
}

// Local Functions
static void bit_set(volatile unsigned char *dst, uint8_t bit_mask)
{
  *dst |= bit_mask;
}

static void bit_clear(volatile unsigned char *dst, uint8_t bit_mask)
{
  *dst &= (~bit_mask);
}
