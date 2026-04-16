#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/atomic.h>

#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"

static volatile uint8_t adc_current = 0;
static volatile uint8_t adc_next = 0;

static volatile uint16_t adc_channels[ADC_N] = {0};

void ADC_Init(void)
{
    ADMUX |= (1 << REFS0);

    ADCSRA |= (1 << ADEN)
           |  (1 << ADSC)
           |  (1 << ADATE)
           |  (1 << ADIE)
           |  (ADPS2_VALUE << ADPS2)
           |  (ADPS1_VALUE << ADPS1)
           |  (ADPS0_VALUE << ADPS0);
}

uint16_t ADC_Get(uint8_t channel)
{
    uint16_t value;

    ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
    {
        value = adc_channels[channel];
    }

    return value;
}

double ADC_GetScaled(uint8_t channel)
{
    return (double)ADC_Get(channel) / ADC_TOP;
}

void ADC_GetAll(uint16_t *channels)
{
    uint8_t i;

    for(i = 0; i < ADC_N; i++)
    {
        channels[i] = ADC_Get(i);
    }
}

void ADC_GetAllScaled(double *channels)
{
    uint8_t i;

    for(i = 0; i < ADC_N; i++)
    {
        channels[i] = ADC_GetScaled(i);
    }
}

ISR(ADC_vect)
{
    adc_channels[adc_current] = ADC;

    adc_current = adc_next;

    adc_next++;

    if(adc_next >= ADC_N)
        adc_next = 0;

    ADMUX = (ADMUX & 0xE0) | adc_next;
}
