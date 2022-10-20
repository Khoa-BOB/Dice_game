#include<iostream>
#include"Dice.h"
using namespace std;

int main(){
    const int D1_SIDES =6;
    const int D2_SIDES =12;
    const int ROLL_MAX=5;
    Dice d1(D1_SIDES);
    Dice d2(D2_SIDES);
    cout<<"Current side of both dice:\n";
    cout<<d1.getValue()<<"\t"<<d2.getValue();
    for(int i=1;i<=ROLL_MAX;i++){
        cout<<"Turn "<<i<<":\n";
        d1.roll();
        d2.roll();
        cout<<d1.getValue()<<"\t"<<d2.getValue()<<"\n";
    }
    return 0;
}