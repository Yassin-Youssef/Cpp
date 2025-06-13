/*
CH-230-A
a10_p4.cpp  critter.h
yassin youssef
yyoussef@constructor.university
*/
#include <string>
#include <iostream>
using namespace std;
class Critter {/*declaring the class*/
private:/*variables are in private as they will not be edited or changed*/
    string name;
    int hunger;
    int boredom;
    int height;
public:/*public as these will be changed in the int main()*/
    Critter();
    Critter(const string& name);
    Critter(const string& name, int hunger, int boredom, int height);
    void setHunger(int hunger);
    void print() const;
};
