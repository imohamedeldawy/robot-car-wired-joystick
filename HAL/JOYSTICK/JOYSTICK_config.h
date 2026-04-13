#ifndef JOYSTICK_CONFIG_H_
#define JOYSTICK_CONFIG_H_

/* ADC Channels */
#define JOY_X_CHANNEL   Channel_A0
#define JOY_Y_CHANNEL   Channel_A1

/* Thresholds (ADC range: 0 → 1023) */

/* Center Zone */
#define JOY_CENTER_MIN  400
#define JOY_CENTER_MAX  600

/* Directions */
#define JOY_UP_THRESHOLD     700
#define JOY_DOWN_THRESHOLD   300

#define JOY_RIGHT_THRESHOLD  700
#define JOY_LEFT_THRESHOLD   300

#endif /* JOYSTICK_CONFIG_H_ */
