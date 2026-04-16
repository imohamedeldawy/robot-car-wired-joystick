#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include "STD_TYPES.h"

#define DIO_PORTB   0
#define DIO_PORTC   1
#define DIO_PORTD   2

#define DIO_PIN0    0
#define DIO_PIN1    1
#define DIO_PIN2    2
#define DIO_PIN3    3
#define DIO_PIN4    4
#define DIO_PIN5    5
#define DIO_PIN6    6
#define DIO_PIN7    7

#define DIO_INPUT   0
#define DIO_OUTPUT  1

#define DIO_LOW     0
#define DIO_HIGH    1

void DIO_SetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction);
void DIO_SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);
u8   DIO_GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin);

#endif
