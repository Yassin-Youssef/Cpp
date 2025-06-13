/*
CH-230-A
a10_p3.cpp  city.h
yassin youssef
yyoussef@constructor.university
*/
#include <string>
using namespace std;
class City {
private:/*private so user cant change these variables*/
    string name;/*declaring the name of city*/
    int inhabitants;/*declaring inhabitants*/
    string mayor;/*declaring name of mayor*/
    double area;/*declaring area*/
public:/*public so can access and write user wants*/
    City(const string& name, int inhabitants, const string& mayor, double area);/*declaring what is in class*/
    string getName() const;/*get name means to read it*/
    void setName(const string& name);/*setting allows to write too*/
    int getInhabitants() const;
    void setInhabitants(int inhabitants);
    string getMayor() const;
    void setMayor(const string& mayor);
    double getArea() const;
    void setArea(double area);
    /*repeating the setters and getters for each variable*/
    void display() const;/*to display the output*/
};
