#include "STD_TYPES.h"

#include "ADC_interface.h"
#include "DIO_interface.h"

#include "BATTERY_interface.h"
#include "BATTERY_config.h"

void BATTERY_Init(void)
{
    /* Set LED pin as output */
    DIO_SetPinDirection(BATTERY_LED_PORT, BATTERY_LED_PIN, PIN_OUTPUT);
}

u16 BATTERY_GetVoltage(void)
{
    /* Read ADC value */
    return ADC_Read(BATTERY_CHANNEL);
}

void BATTERY_Check(void)
{
    u16 value = BATTERY_GetVoltage();

    if (value < BATTERY_LOW_THRESHOLD)
    {
        /* Turn ON LED */
        DIO_SetPinValue(BATTERY_LED_PORT, BATTERY_LED_PIN, PIN_HIGH);
    }
    else
    {
        /* Turn OFF LED */
        DIO_SetPinValue(BATTERY_LED_PORT, BATTERY_LED_PIN, PIN_LOW);
    }
}