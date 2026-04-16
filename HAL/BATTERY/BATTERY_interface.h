#ifndef BATTERY_INTERFACE_H
#define BATTERY_INTERFACE_H

#include "STD_TYPES.h"

void BATTERY_Init(void);
u16 BATTERY_ReadVoltage(void);
void BATTERY_CheckStatus(void);

#endif
