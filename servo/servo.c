#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "hardware/clocks.h"

float clockDiv = 64;
float wrap = 39062;

void set_ms(int pin, float ms)
{
    pwm_set_gpio_level(pin, (ms/20000.f)*wrap);
}

void init_servo(int pin)
{
    gpio_set_function(pin, GPIO_FUNC_PWM);
    uint slice_num = pwm_gpio_to_slice_num(pin);

    pwm_config config = pwm_get_default_config();
    
    uint64_t clockspeed = clock_get_hz(5);
    clockDiv = 64;
    wrap = 39062;

    while (clockspeed/clockDiv/50 > 65535 && clockDiv < 256) clockDiv += 64; 
    wrap = clockspeed/clockDiv/50;

    pwm_config_set_clkdiv(&config, clockDiv);
    pwm_config_set_wrap(&config, wrap);

    pwm_init(slice_num, &config, true);

    set_ms(pin, 400);
}