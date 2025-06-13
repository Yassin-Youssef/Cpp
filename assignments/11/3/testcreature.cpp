/*
CH-230-A
a11_p3.cpp testcreature.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "Creature.h"
using namespace std;
int main() {
    cout << "Creating a Creature." << endl;
    Creature c(25);
    c.run();
    cout << "Creating a Wizard." << endl;
    Wizard w;
    w.run();
    w.hover();
    /*above considered already doe since first int main*/
    cout << "Creating a Spell." << endl;
    Spell s;/*default spell called*/
    s.run();
    s.cast();
    cout << "Creating a custom Spell with different power." << endl;
    Spell s2("teleport");/*parameterized spell called*/
    s2.run();
    s2.cast();
    cout << "Creating a Fight." << endl;
    Fight f;/*default fight called*/
    f.run();
    f.fights();
    cout << "Creating a custom Fight with different number of fights." << endl;
    Fight f2(4);/*parameterized fight called*/
    f2.run();
    f2.fights();
    return 0;
}