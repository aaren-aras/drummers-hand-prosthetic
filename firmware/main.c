#include "stm32_config.h"
#include "emg.h"
#include "motor.h"

int main(void) {
    HAL_Init();           // Initialize HAL
    SystemClock_Config(); // Configure clocks
    MX_GPIO_Init();
    MX_ADC_Init();
    MX_TIM_PWM_Init();

    while(1) {
        int emg_value = read_emg();          // Raw or filtered EMG
        int angle = map_emg_to_angle(emg_value);
        set_motor_angle(FINGER_INDEX, angle);
        HAL_Delay(10);                       // ~100Hz loop
    }
}
