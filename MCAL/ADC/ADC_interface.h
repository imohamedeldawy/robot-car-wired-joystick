#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

#include "STD_TYPES.h"

void ADC_Init(void);
u16 ADC_ReadChannel(u8 Copy_u8Channel);

#endif
