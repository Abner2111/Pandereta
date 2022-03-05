#include <stdio.h>
#include "tambourduine.h"
int main(int argc, char **argv)
{
    float tempo = atof(argv[0]);
    start(tempo);
    return 0;
}