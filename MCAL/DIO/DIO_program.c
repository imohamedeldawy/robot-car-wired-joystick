#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"

void DIO_SetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction)
{
    switch(Copy_u8Port)
    {
        case DIO_PORTB:
            if(Copy_u8Direction == DIO_OUTPUT)
                SET_BIT(DDRB, Copy_u8Pin);
            else
                CLR_BIT(DDRB, Copy_u8Pin);
        break;

        case DIO_PORTC:
            if(Copy_u8Direction == DIO_OUTPUT)
                SET_BIT(DDRC, Copy_u8Pin);
            else
                CLR_BIT(DDRC, Copy_u8Pin);
        break;

        case DIO_PORTD:
            if(Copy_u8Direction == DIO_OUTPUT)
                SET_BIT(DDRD, Copy_u8Pin);
            else
                CLR_BIT(DDRD, Copy_u8Pin);
        break;
    }
}

void DIO_SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value)
{
    switch(Copy_u8Port)
    {
        case DIO_PORTB:
            if(Copy_u8Value == DIO_HIGH)
                SET_BIT(PORTB, Copy_u8Pin);
            else
                CLR_BIT(PORTB, Copy_u8Pin);
        break;

        case DIO_PORTC:
            if(Copy_u8Value == DIO_HIGH)
                SET_BIT(PORTC, Copy_u8Pin);
            else
                CLR_BIT(PORTC, Copy_u8Pin);
        break;

        case DIO_PORTD:
            if(Copy_u8Value == DIO_HIGH)
                SET_BIT(PORTD, Copy_u8Pin);
            else
                CLR_BIT(PORTD, Copy_u8Pin);
        break;
    }
}

u8 DIO_GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin)
{
    u8 Local_u8Value = 0;

    switch(Copy_u8Port)
    {
        case DIO_PORTB:
            Local_u8Value = GET_BIT(PINB, Copy_u8Pin);
        break;

        case DIO_PORTC:
            Local_u8Value = GET_BIT(PINC, Copy_u8Pin);
        break;

        case DIO_PORTD:
            Local_u8Value = GET_BIT(PIND, Copy_u8Pin);
        break;
    }

    return Local_u8Value;
}
