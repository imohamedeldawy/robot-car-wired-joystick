#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/ADC/ADC_interface.h"

#include "JOYSTICK_interface.h"
#include "JOYSTICK_private.h"
#include "JOYSTICK_config.h"

void JOYSTICK_Init(void)
{
    ADC_Init();
}

u8 JOYSTICK_GetDirection(void)
{
    u16 Local_u16X;
    u16 Local_u16Y;

    Local_u16X = ADC_ReadChannel(JOYSTICK_X_CHANNEL);
    Local_u16Y = ADC_ReadChannel(JOYSTICK_Y_CHANNEL);

    if(Local_u16Y > JOYSTICK_HIGH_LIMIT)
    {
        return JOYSTICK_FORWARD;
    }
    else if(Local_u16Y < JOYSTICK_LOW_LIMIT)
    {
        return JOYSTICK_BACKWARD;
    }
    else if(Local_u16X > JOYSTICK_HIGH_LIMIT)
    {
        return JOYSTICK_RIGHT;
    }
    else if(Local_u16X < JOYSTICK_LOW_LIMIT)
    {
        return JOYSTICK_LEFT;
    }
    else
    {
        return JOYSTICK_STOP;
    }
}
