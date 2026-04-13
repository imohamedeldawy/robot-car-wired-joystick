#include "STD_TYPES.h"

#include "JOYSTICK_interface.h"
#include "MOTOR_interface.h"
#include "BATTERY_interface.h"

#include "APP.h"

void APP_Init(void)
{
    /* Init modules */
    JOYSTICK_Init();
    MOTOR_Init();
    BATTERY_Init();
}

void APP_Run(void)
{
    u8 direction;

    /* Get direction from joystick */
    direction = JOYSTICK_GetDirection();

    /* Control motor based on direction */
    switch (direction)
    {
    case JOY_FORWARD:
        MOTOR_Forward();
        break;

    case JOY_BACKWARD:
        MOTOR_Backward();
        break;

    case JOY_LEFT:
        MOTOR_Left();
        break;

    case JOY_RIGHT:
        MOTOR_Right();
        break;

    default:
        MOTOR_Stop();
        break;
    }

    /* Check battery */
    BATTERY_Check();
}