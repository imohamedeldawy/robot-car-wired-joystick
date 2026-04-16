#ifndef BATTERY_CONFIG_H
#define BATTERY_CONFIG_H

/* Battery sense connected to ADC channel */
#define BATTERY_ADC_CHANNEL     2

/* Low battery threshold (ADC reading) */
#define BATTERY_LOW_THRESHOLD   600

/* Warning LED */
#define BATTERY_LED_PORT        DIO_PORTB
#define BATTERY_LED_PIN         DIO_PIN0

#endif
