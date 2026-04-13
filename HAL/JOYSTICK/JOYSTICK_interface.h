#ifndef JOYSTICK_INTERFACE_H_
#define JOYSTICK_INTERFACE_H_

#include "STD_TYPES.h"

/* Directions */
#define JOY_FORWARD   1
#define JOY_BACKWARD  2
#define JOY_LEFT      3
#define JOY_RIGHT     4
#define JOY_STOP      5

/* Function Prototypes */
void JOYSTICK_Init(void);
u8 JOYSTICK_GetDirection(void);

#endif /* JOYSTICK_INTERFACE_H_ */
