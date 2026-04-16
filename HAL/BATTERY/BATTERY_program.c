#include "STD_TYPES.h"

#include "DIO_interface.h"
#include "ADC_interface.h"

#include "BATTERY_interface.h"
#include "BATTERY_private.h"
#include "BATTERY_config.h"

void BATTERY_Init(void)
{
    DIO_SetPinDirection(BATTERY_LED_PORT, BATTERY_LED_PIN, DIO_OUTPUT);
    DIO_SetPinValue(BATTERY_LED_PORT, BATTERY_LED_PIN, DIO_LOW);
}

u16 BATTERY_ReadVoltage(void)
{
    return ADC_ReadChannel(BATTERY_ADC_CHANNEL);
}

void BATTERY_CheckStatus(void)
{
    u16 Local_u16Value;

    Local_u16Value = BATTERY_ReadVoltage();

    if(Local_u16Value < BATTERY_LOW_THRESHOLD)
    {
        DIO_SetPinValue(BATTERY_LED_PORT, BATTERY_LED_PIN, DIO_HIGH);
    }
    else
    {
        DIO_SetPinValue(BATTERY_LED_PORT, BATTERY_LED_PIN, DIO_LOW);
    }
}
