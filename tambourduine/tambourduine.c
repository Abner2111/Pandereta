#include <stdio.h>
#include "servo.h"
#include "pico/stdlib.h"

const int pin_0 = 0;
const int pin_1 = 1;
const int pin_2 = 2;
int N;
int tempo;

void routine(float state0, float state1, float state2)
{
    set_ms(0,state0);
    set_ms(1,state1);
    set_ms(2,state2);
   

}
void vibrato()
{
    int n =N;
    while(n>0)
    { 
        set_ms(1,1560);
        sleep_ms(200);
        set_ms(1,1240);
        sleep_ms(200);
        n=n-1;
    }
}
void fan(char* x)
{
    int n = N;
    while(n>0)
    {
        if(x=="A")
        {
             routine(2033,1400,1000);
             sleep_ms(tempo);
             routine(1770,1400,1000);
             sleep_ms(tempo);
        }
        if(x=="B")
        {
             routine(1506,1400,1000);
             sleep_ms(tempo);
             routine(1770,1400,1000);
             sleep_ms(tempo);
        }
        n=n-1;
    }
}
void vertical(char* x)
{
     int n = N;
    while(n>0)
    {
        if(x=="D")
        {
             routine(1788,1773,1000);
             sleep_ms(tempo);
             routine(1788,1400,1000);
             sleep_ms(tempo);
        }
        if(x=="I")
        {
             routine(1788,1067,1000);
             sleep_ms(tempo);
             routine(1788,1400,1000);
             sleep_ms(tempo);
        }
        n=n-1;
    }
}
void percussion(char* x)
{
    int n = N;
     while(n>0)
    {
        if(x=="D")
        {
             routine(1788,1773,1611);
             sleep_ms(tempo);
             routine(1788,1400,1000);
             sleep_ms(tempo);
        }
        if(x=="I")
        {
             routine(1788,1067,1611);
             sleep_ms(tempo);
             routine(1788,1400,1000);
             sleep_ms(tempo);
        }

        if(x=="A")
        {
             routine(2033,1400,1611);
             sleep_ms(tempo);
             routine(1788,1400,1000);
             sleep_ms(tempo);
        }
        if(x=="B")
        {
             routine(1506,1400,1400);
             sleep_ms(tempo);
             routine(1770,1400,1000);
             sleep_ms(tempo);
        }

        if(x=="AB")
        {
             routine(2033,1400,1611);
             sleep_ms(tempo);
             routine(2033,1400,1000);
             sleep_ms(tempo);
             routine(1506,1400,1400);
             sleep_ms(tempo);
             routine(1506,1400,1000);
             sleep_ms(tempo);
          
        }
        if(x=="DI")
        {
             routine(1788,1773,1611);
             sleep_ms(tempo);
             routine(1788,1773,1000);
             sleep_ms(tempo);
             routine(1788,1067,1611);
             sleep_ms(tempo);
             routine(1788,1067,1000);
             sleep_ms(tempo);
        }
        n=n-1;
    }
}

void hit()
{
    int n =N;
    while(n>0)
    {
         routine(1788,1400,1511);
         sleep_ms(tempo);
         routine(1788,1400,1000);
         sleep_ms(tempo);
         n=n-1;
    }
}
void start(float temp,int cycles)
{
    tempo = temp;
    N = cycles;
    init_servo(pin_0);
    init_servo(pin_1);
    init_servo(pin_2); 
    routine(1788, 1400, 1000);
}