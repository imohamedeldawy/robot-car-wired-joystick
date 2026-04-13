#include "STD_TYPES.h"

#include "ADC_interface.h"

#include "JOYSTICK_interface.h"
#include "JOYSTICK_config.h"

/* Optional init */
void JOYSTICK_Init(void)
{
    /* لو عايز تخلي ADC init هنا بدل main */
    ADC_Init();
}

/* Get Direction */
u8 JOYSTICK_GetDirection(void)
{
    u16 x = ADC_Read(JOY_X_CHANNEL);
    u16 y = ADC_Read(JOY_Y_CHANNEL);

    /* Check Y axis first (Forward / Backward) */
    if (y > JOY_UP_THRESHOLD)
    {
        return JOY_FORWARD;
    }
    else if (y < JOY_DOWN_THRESHOLD)
    {
        return JOY_BACKWARD;
    }

    /* Check X axis (Left / Right) */
    if (x > JOY_RIGHT_THRESHOLD)
    {
        return JOY_RIGHT;
    }
    else if (x < JOY_LEFT_THRESHOLD)
    {
        return JOY_LEFT;
    }

    /* Otherwise stop */
    return JOY_STOP;
}