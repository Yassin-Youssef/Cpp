/*
CH-230-A
a11_p3.cpp Creature.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "Creature.h"
using namespace std;
Creature::Creature() : distance(10) {
    cout << "Creature constructor called" << endl;
}
Creature::Creature(int x) : distance(x) {
    cout << "Creature constructor" << endl;
}
void Creature::run() const {
    cout << "running " << distance << " meters!\n";
}
/*above are all outputs and function for the creature class*/
Wizard::Wizard() : Creature(10), distFactor(3) {
    cout << "Wizard constructor called" << endl;
}
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
/*above is for the wizard class*/
Spell::Spell() : Creature(10), power("transform") {
    cout << "Spell default constructor called" << endl;
}
Spell::Spell(string p) : Creature(10), power(p) {
    cout << "Spell parameterized constructor called" << endl;
}
void Spell::cast() const {
    cout << "Casting spell with power: " << power << endl;
}
/*above for the spell class*/
Fight::Fight() : Creature(10), fight(2) {
    cout << "Fight default constructor called" << endl;
}
Fight::Fight(int f) : Creature(10), fight(f) {
    cout << "Fight parameterized constructor called" << endl;
}
void Fight::fights() const {
    cout << "Will fight " << fight << " times!" << endl;
}
/*above for the fight class*/