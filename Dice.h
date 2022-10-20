#ifndef _DICE_H_
#define _DICE_H_

class Dice{
    private:
        int sides;
        int value;
    public:
        Dice(int =6);//Smallest dice only has 6 sides
        void roll();
        int getSides();
        int getValue();
};

#endif