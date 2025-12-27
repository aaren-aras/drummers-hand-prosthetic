// emg.h
#ifndef EMG_H
#define EMG_H
int read_emg(void);
#endif

// emg.c
#include "emg.h"
#include "stm32_config.h"

int read_emg(void) {
    // TODO: HAL ADC read + filtering
    int value = 0;
    // HAL_ADC_Start, poll, get value
    return value;
}
