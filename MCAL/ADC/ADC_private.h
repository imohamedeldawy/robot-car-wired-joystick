#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#define ADC_FREQUENCY_MIN   50000UL
#define ADC_FREQUENCY_MAX   200000UL

#if F_CPU/2 <= ADC_FREQUENCY_MAX && F_CPU/2 >= ADC_FREQUENCY_MIN
    #define ADPS0_VALUE 0
    #define ADPS1_VALUE 0
    #define ADPS2_VALUE 0

#elif F_CPU/4 <= ADC_FREQUENCY_MAX && F_CPU/4 >= ADC_FREQUENCY_MIN
    #define ADPS0_VALUE 0
    #define ADPS1_VALUE 1
    #define ADPS2_VALUE 0

#elif F_CPU/8 <= ADC_FREQUENCY_MAX && F_CPU/8 >= ADC_FREQUENCY_MIN
    #define ADPS0_VALUE 1
    #define ADPS1_VALUE 1
    #define ADPS2_VALUE 0

#elif F_CPU/16 <= ADC_FREQUENCY_MAX && F_CPU/16 >= ADC_FREQUENCY_MIN
    #define ADPS0_VALUE 0
    #define ADPS1_VALUE 0
    #define ADPS2_VALUE 1

#elif F_CPU/32 <= ADC_FREQUENCY_MAX && F_CPU/32 >= ADC_FREQUENCY_MIN
    #define ADPS0_VALUE 1
    #define ADPS1_VALUE 0
    #define ADPS2_VALUE 1

#elif F_CPU/64 <= ADC_FREQUENCY_MAX && F_CPU/64 >= ADC_FREQUENCY_MIN
    #define ADPS0_VALUE 0
    #define ADPS1_VALUE 1
    #define ADPS2_VALUE 1

#else
    #define ADPS0_VALUE 1
    #define ADPS1_VALUE 1
    #define ADPS2_VALUE 1
#endif

#endif
