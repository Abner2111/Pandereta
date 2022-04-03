#ifndef tambourduine_h
#define tambourduine_h
extern float tempo;
extern int N;
void routine(float state0, float state1, float state2);
void play();
void vibrato();
void fan(char* x);
void vertical(char* x);
void percussion(char* x);
void hit();
void start(float tempo,int cycles);

#endif