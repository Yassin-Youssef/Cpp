/*
CH-230-A
a10_p5.cpp  testcritter.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "Critter.h"
using namespace std;
int main() {
    Critter critter1;/*frist critter that has no supplies so has constant already written values*/
    Critter critter2("yassin");/*critter with only name parameter needed*/
    Critter critter3("youssef", 5, 3, 7);/*critters that need all parameters*/
    Critter critter4("woooo", 5, 1, 5);
    /*setting the hunger level to 2*/
    critter1.setHunger(2);
    critter2.setHunger(2);
    critter3.setHunger(2);
    critter4.setHunger(2);
    /*outputing all critters*/
    cout << "\n1:" << endl;
    critter1.print();
    cout << "\n2:" << endl;
    critter2.print();
    cout << "\n3:" << endl;
    critter3.print();
    cout << "\n4:" << endl;
    critter4.print();
    return 0;
}
