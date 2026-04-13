#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "MOTOR_interface.h"
#include "MOTOR_config.h"

void MOTOR_Init(void)
{
    /* Set all motor pins as output */

    DIO_SetPinDirection(MOTOR_A_IN1_PORT, MOTOR_A_IN1_PIN, PIN_OUTPUT);
    DIO_SetPinDirection(MOTOR_A_IN2_PORT, MOTOR_A_IN2_PIN, PIN_OUTPUT);

    DIO_SetPinDirection(MOTOR_B_IN3_PORT, MOTOR_B_IN3_PIN, PIN_OUTPUT);
    DIO_SetPinDirection(MOTOR_B_IN4_PORT, MOTOR_B_IN4_PIN, PIN_OUTPUT);
}

/* Forward */
void MOTOR_Forward(void)
{
    /* Motor A */
    DIO_SetPinValue(MOTOR_A_IN1_PORT, MOTOR_A_IN1_PIN, PIN_HIGH);
    DIO_SetPinValue(MOTOR_A_IN2_PORT, MOTOR_A_IN2_PIN, PIN_LOW);

    /* Motor B */
    DIO_SetPinValue(MOTOR_B_IN3_PORT, MOTOR_B_IN3_PIN, PIN_HIGH);
    DIO_SetPinValue(MOTOR_B_IN4_PORT, MOTOR_B_IN4_PIN, PIN_LOW);
}

/* Backward */
void MOTOR_Backward(void)
{
    /* Motor A */
    DIO_SetPinValue(MOTOR_A_IN1_PORT, MOTOR_A_IN1_PIN, PIN_LOW);
    DIO_SetPinValue(MOTOR_A_IN2_PORT, MOTOR_A_IN2_PIN, PIN_HIGH);

    /* Motor B */
    DIO_SetPinValue(MOTOR_B_IN3_PORT, MOTOR_B_IN3_PIN, PIN_LOW);
    DIO_SetPinValue(MOTOR_B_IN4_PORT, MOTOR_B_IN4_PIN, PIN_HIGH);
}

/* Right */
void MOTOR_Right(void)
{
    /* Left motor ON, right motor OFF */

    /* Motor A */
    DIO_SetPinValue(MOTOR_A_IN1_PORT, MOTOR_A_IN1_PIN, PIN_HIGH);
    DIO_SetPinValue(MOTOR_A_IN2_PORT, MOTOR_A_IN2_PIN, PIN_LOW);

    /* Motor B */
    DIO_SetPinValue(MOTOR_B_IN3_PORT, MOTOR_B_IN3_PIN, PIN_LOW);
    DIO_SetPinValue(MOTOR_B_IN4_PORT, MOTOR_B_IN4_PIN, PIN_LOW);
}

/* Left */
void MOTOR_Left(void)
{
    /* Right motor ON, left motor OFF */

    /* Motor A */
    DIO_SetPinValue(MOTOR_A_IN1_PORT, MOTOR_A_IN1_PIN, PIN_LOW);
    DIO_SetPinValue(MOTOR_A_IN2_PORT, MOTOR_A_IN2_PIN, PIN_LOW);

    /* Motor B */
    DIO_SetPinValue(MOTOR_B_IN3_PORT, MOTOR_B_IN3_PIN, PIN_HIGH);
    DIO_SetPinValue(MOTOR_B_IN4_PORT, MOTOR_B_IN4_PIN, PIN_LOW);
}

/* Stop */
void MOTOR_Stop(void)
{
    DIO_SetPinValue(MOTOR_A_IN1_PORT, MOTOR_A_IN1_PIN, PIN_LOW);
    DIO_SetPinValue(MOTOR_A_IN2_PORT, MOTOR_A_IN2_PIN, PIN_LOW);

    DIO_SetPinValue(MOTOR_B_IN3_PORT, MOTOR_B_IN3_PIN, PIN_LOW);
    DIO_SetPinValue(MOTOR_B_IN4_PORT, MOTOR_B_IN4_PIN, PIN_LOW);
}