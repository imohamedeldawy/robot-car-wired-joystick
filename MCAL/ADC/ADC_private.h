#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H

#define ADMUX   *((volatile u8*)0x7C)
#define ADCSRA  *((volatile u8*)0x7A)
#define ADCSRB  *((volatile u8*)0x7B)
#define ADCL    *((volatile u8*)0x78)
#define ADCH    *((volatile u8*)0x79)
#define DIDR0   *((volatile u8*)0x7E)

#define ADC     *((volatile u16*)0x78)

/* ADMUX Bits */
#define REFS1   7
#define REFS0   6
#define ADLAR   5
#define MUX0    0
#define MUX1    1
#define MUX2    2
#define MUX3    3

/* ADCSRA Bits */
#define ADEN    7
#define ADSC    6
#define ADATE   5
#define ADIF    4
#define ADIE    3
#define ADPS2   2
#define ADPS1   1
#define ADPS0   0

#endif
