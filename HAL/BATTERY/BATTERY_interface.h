#ifndef BATTERY_INTERFACE_H_
#define BATTERY_INTERFACE_H_

#include "STD_TYPES.h"

/* Functions */
void BATTERY_Init(void);
u16 BATTERY_GetVoltage(void);
void BATTERY_Check(void);

#endif /* BATTERY_INTERFACE_H_ */