#include <stdio.h>
#include "tambourduine.h"
int main()
{
    const float tempo = 500;
    start(tempo,5);
    fan("A");
    fan("B");
    vertical("D");
    vertical("I");
    percussion("D");
    percussion("I");
    percussion("DI");
    percussion("A");
    percussion("B");
    percussion("AB");
    hit();
    vibrato();
    routine(1788,1400,1000);
    
    return 0;
}