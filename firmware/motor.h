// motor.h
#ifndef MOTOR_H
#define MOTOR_H
void set_motor_angle(int finger, int angle);
int map_emg_to_angle(int emg);
#endif

// motor.c
#include "motor.h"
#include "stm32_config.h"

void set_motor_angle(int finger, int angle) {
    // TODO: convert angle to PWM and set duty cycle
}

int map_emg_to_angle(int emg) {
    // Map EMG ADC value to servo angle
    return (emg * 180) / 4095;  // Example for 12-bit ADC
}
