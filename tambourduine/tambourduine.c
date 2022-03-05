#include <stdio.h>
#include "servo.h"
#include "pico/stdlib.h"

init_servo(0);
init_servo(1);
init_servo(2);
void routine(float state)
{
    set_ms(0,state);
    set_ms(1,state);
    set_ms(2,state);
   

}
void start(float tempo)
{
    while(true)
    {
        routine(1400);
        sleep_ms(tempo);
        routine(400);
        sleep_ms(tempo);
    }
}