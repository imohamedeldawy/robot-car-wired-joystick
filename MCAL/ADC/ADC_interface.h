#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

#include <stdint.h>
#include <stddef.h>

#define ADC_TOP     1023.0

void ADC_Init(void);

uint16_t ADC_Get(uint8_t channel);

double ADC_GetScaled(uint8_t channel);

void ADC_GetAll(uint16_t *channels);

void ADC_GetAllScaled(double *channels);

#endif
