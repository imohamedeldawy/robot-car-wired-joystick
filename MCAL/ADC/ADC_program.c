#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"

void ADC_Init(void)
{
    /* Select AVCC as reference */
    SET_BIT(ADMUX, REFS0);
    CLR_BIT(ADMUX, REFS1);

    /* Right Adjust Result */
    CLR_BIT(ADMUX, ADLAR);

    /* Prescaler = 128 */
    SET_BIT(ADCSRA, ADPS0);
    SET_BIT(ADCSRA, ADPS1);
    SET_BIT(ADCSRA, ADPS2);

    /* Enable ADC */
    SET_BIT(ADCSRA, ADEN);
}

u16 ADC_ReadChannel(u8 Copy_u8Channel)
{
    u16 Local_u16Result;

    /* Clear old channel selection */
    ADMUX &= 0xF0;

    /* Select channel */
    ADMUX |= Copy_u8Channel;

    /* Start Conversion */
    SET_BIT(ADCSRA, ADSC);

    /* Wait until conversion complete */
    while (GET_BIT(ADCSRA, ADIF) == 0);

    /* Clear flag by writing 1 */
    SET_BIT(ADCSRA, ADIF);

    /* Read result */
    Local_u16Result = ADC;

    return Local_u16Result;
}
