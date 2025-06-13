/*
CH-230-A
a10_p6.cpp  critter.h
yassin youssef
yyoussef@constructor.university
*/
#include <string>
using namespace std;
class Critter {
private:
    string name;
    double hunger;
    int boredom;
    int height;
    double thirst;
    double inttodouble(int h);/*new for integer to double then under double to integer*/
    int doubletoint(double h); 
public:
    Critter();
    Critter(const string& name);
    Critter(const string& name, int hunger, int boredom, int height);
    Critter(const string& name, int hunger, int boredom, int height, double thirst);/*5th available critter with all parameters*/
    void setHunger(int hunger);
    void setThirst(double thirst);/*setter for the new thirst*/
    void print() const; 
};
