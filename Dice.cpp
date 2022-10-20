#include<iostream>
#include<ctime>
#include"Dice.h"
using namespace std;
Dice:: Dice(int numSide){
    unsigned seed= time(0);
    srand(seed);
    sides= numSide;
    roll();
}
void Dice::roll(){
    const int MIN_VALUE =1;
    value = (rand()%(sides-MIN_VALUE+1))+MIN_VALUE;
}
int Dice::getSides(){
    return sides;
}

int Dice::getValue(){
    return value;
}
