#ifndef JOYSTICK_INTERFACE_H
#define JOYSTICK_INTERFACE_H

#include "STD_TYPES.h"

#define JOYSTICK_STOP      0
#define JOYSTICK_FORWARD   1
#define JOYSTICK_BACKWARD  2
#define JOYSTICK_LEFT      3
#define JOYSTICK_RIGHT     4

void JOYSTICK_Init(void);
u8 JOYSTICK_GetDirection(void);

#endif
