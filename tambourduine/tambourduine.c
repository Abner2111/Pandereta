#include <stdio.h>
#include "servo.h"
#include "pico/stdlib.h"

const int pin_0 = 0;
const int pin_1 = 1;
const int pin_2 = 2;

void routine(float state0, float state1, float state2)
{
    set_ms(0,state0);
    set_ms(1,state1);
    set_ms(2,state2);
   

}
void vibrato()
{

    while(true)
    {
     
        
     
        sleep_ms(50);
        set_ms(1,1560);
        sleep_ms(50);
        set_ms(1,1240);
    }
}
void play(const float tempo)
{
    while(true)
    {
        routine(2033,1733,1400); 
        sleep_ms(tempo);
        routine(1506,1067,1000);
        sleep_ms(tempo);
    }
}
void start()
{

    init_servo(pin_0);
    init_servo(pin_1);
    init_servo(pin_2); //perc.
    set_ms(0,1770);
    set_ms(1,1400);
    set_ms(2,1000);
}