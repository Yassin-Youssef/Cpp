/*
CH-230-A
a10_p5.cpp  critter.h
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
    double inttodouble(int h);/*new for integer to double then under double to integer*/
    int doubletoint(double h); 
public:
    Critter();
    Critter(const string& name);
    Critter(const string& name, int hunger, int boredom, int height);
    void setHunger(int hunger);
    void print() const; 
};
