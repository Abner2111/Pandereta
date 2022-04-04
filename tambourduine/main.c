#include <stdio.h>
#include "tambourduine.h"
#include "pico/stdlib.h"
int main()
{
    stdio_init_all();
    float tempo;
    int N;
    char routine;
    while(1)
    {   
        printf("Tempo: ");
        scanf("%f",&tempo);
        printf("Cycles: ");
        scanf("%d", &N);
        start(tempo,N); 
        printf("Routine: ");
        routine = getchar();
        switch(routine)
        {
            case '1':
                fan("A");
                break;
            case '2': 
                fan("B");  
                break; 
            case '3':
                vertical("D");
                break;
            case '4':
                vertical("I"); 
                break;
            case '5':
                percussion("D");
                break;
            case '6':
                percussion("I"); 
                break;
            case '7':
                percussion("DI");
                break; 
            case '8':
                percussion("A");
                break;
            case '9':
                percussion("B");
                break;
            case 'A':
                percussion("AB");
                break;
            case 'B':
                hit();
                break;
            case 'C':
                vibrato(); 
                break;  
            default:
                printf("ERROR!");
                break;

        }
    }
    
    return 0;
}