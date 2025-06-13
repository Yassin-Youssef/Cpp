/*
CH-230-A
a10_p2 critter.cpp
yassin youssed
yyoussef@constructor.university
*/
#include <iostream>
#include "Critter.h"

using namespace std;
void Critter::setName(string &newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}
void Critter::setAge(int newage) {//*setter critter age*/
    age = newage;
}
void Critter::setFood(string &newfood) {/*setter critter food*/
    food = newfood;
}
int Critter::getAge(){/*getter critter age*/
    return age;
}

string Critter::getFood() { /*getter critter food*/
    return food;
}
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ". I am " << age << " years old, and my favorite food is " 
         << food << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}
