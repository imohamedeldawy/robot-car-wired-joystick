#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "MOTOR_interface.h"
#include "MOTOR_private.h"
#include "MOTOR_config.h"

void MOTOR_Init(void)
{
    DIO_SetPinDirection(MOTOR_L_IN1_PORT, MOTOR_L_IN1_PIN, DIO_OUTPUT);
    DIO_SetPinDirection(MOTOR_L_IN2_PORT, MOTOR_L_IN2_PIN, DIO_OUTPUT);

    DIO_SetPinDirection(MOTOR_R_IN1_PORT, MOTOR_R_IN1_PIN, DIO_OUTPUT);
    DIO_SetPinDirection(MOTOR_R_IN2_PORT, MOTOR_R_IN2_PIN, DIO_OUTPUT);

    MOTOR_Stop();
}

void MOTOR_Forward(void)
{
    DIO_SetPinValue(MOTOR_L_IN1_PORT, MOTOR_L_IN1_PIN, DIO_HIGH);
    DIO_SetPinValue(MOTOR_L_IN2_PORT, MOTOR_L_IN2_PIN, DIO_LOW);

    DIO_SetPinValue(MOTOR_R_IN1_PORT, MOTOR_R_IN1_PIN, DIO_HIGH);
    DIO_SetPinValue(MOTOR_R_IN2_PORT, MOTOR_R_IN2_PIN, DIO_LOW);
}

void MOTOR_Backward(void)
{
    DIO_SetPinValue(MOTOR_L_IN1_PORT, MOTOR_L_IN1_PIN, DIO_LOW);
    DIO_SetPinValue(MOTOR_L_IN2_PORT, MOTOR_L_IN2_PIN, DIO_HIGH);

    DIO_SetPinValue(MOTOR_R_IN1_PORT, MOTOR_R_IN1_PIN, DIO_LOW);
    DIO_SetPinValue(MOTOR_R_IN2_PORT, MOTOR_R_IN2_PIN, DIO_HIGH);
}

void MOTOR_Left(void)
{
    DIO_SetPinValue(MOTOR_L_IN1_PORT, MOTOR_L_IN1_PIN, DIO_LOW);
    DIO_SetPinValue(MOTOR_L_IN2_PORT, MOTOR_L_IN2_PIN, DIO_LOW);

    DIO_SetPinValue(MOTOR_R_IN1_PORT, MOTOR_R_IN1_PIN, DIO_HIGH);
    DIO_SetPinValue(MOTOR_R_IN2_PORT, MOTOR_R_IN2_PIN, DIO_LOW);
}

void MOTOR_Right(void)
{
    DIO_SetPinValue(MOTOR_L_IN1_PORT, MOTOR_L_IN1_PIN, DIO_HIGH);
    DIO_SetPinValue(MOTOR_L_IN2_PORT, MOTOR_L_IN2_PIN, DIO_LOW);

    DIO_SetPinValue(MOTOR_R_IN1_PORT, MOTOR_R_IN1_PIN, DIO_LOW);
    DIO_SetPinValue(MOTOR_R_IN2_PORT, MOTOR_R_IN2_PIN, DIO_LOW);
}

void MOTOR_Stop(void)
{
    DIO_SetPinValue(MOTOR_L_IN1_PORT, MOTOR_L_IN1_PIN, DIO_LOW);
    DIO_SetPinValue(MOTOR_L_IN2_PORT, MOTOR_L_IN2_PIN, DIO_LOW);

    DIO_SetPinValue(MOTOR_R_IN1_PORT, MOTOR_R_IN1_PIN, DIO_LOW);
    DIO_SetPinValue(MOTOR_R_IN2_PORT, MOTOR_R_IN2_PIN, DIO_LOW);
}
