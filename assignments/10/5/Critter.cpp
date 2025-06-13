/*
CH-230-A
a10_p5.cpp  critter.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "Critter.h"
using namespace std;
Critter::Critter() : name("default_critter"), hunger(0.2), boredom(0), height(5){/*first critter that isnt supplied with anything
and has the default inputs*/
    cout << "1 = default is called" << endl;
}
Critter::Critter(const string& name) : name(name), hunger(0.2), boredom(0), height(5) {/*the critter with only name parameter 
edited in the int main()*/
    cout << "2 = name parameter is called" << endl;
}
Critter::Critter(const string& name, int hunger, int boredom, int height) 
    : name(name), hunger(hunger), boredom(boredom), height(height) {/*the critter with all parameters edited in intmain()*/
    cout << "3 and 4 = all parameters are called" << endl; 
}
void Critter::setHunger(int h) {/*when setting critter hunger to 2 as requested*/
    hunger = inttodouble(h);
}
double Critter::inttodouble(int h) {/*int to double function critter*/
    return h / 10.0; 
}
int Critter::doubletoint(double h) {/*double to int function critter*/
    return static_cast<int>(h * 10);
}
void Critter::print() const {/*the output fucntion to print*/
    cout << "name = " << name << "\nhunger = " << hunger << "\nboredom = " << boredom << "\nheight = " << height << endl;
}