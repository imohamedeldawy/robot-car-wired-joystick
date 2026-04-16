#include "STD_TYPES.h"

#include "MOTOR_interface.h"
#include "JOYSTICK_interface.h"
#include "BATTERY_interface.h"

int main(void)
{
    u8 Local_u8Direction;

    MOTOR_Init();
    JOYSTICK_Init();
    BATTERY_Init();

    while(1)
    {
        Local_u8Direction = JOYSTICK_GetDirection();

        switch(Local_u8Direction)
        {
            case JOYSTICK_FORWARD:
                MOTOR_Forward();
            break;

            case JOYSTICK_BACKWARD:
                MOTOR_Backward();
            break;

            case JOYSTICK_LEFT:
                MOTOR_Left();
            break;

            case JOYSTICK_RIGHT:
                MOTOR_Right();
            break;

            default:
                MOTOR_Stop();
            break;
        }

        BATTERY_CheckStatus();
    }

    return 0;
}
