/*
CH-230-A
a10_p3.cpp  city.cpp
yassin youssef
yyoussef@constructor.university
*/
#include "city.h"
#include <iostream>
using namespace std;
City::City(const string& name, int inhabitants, const string& mayor, double area)
	: name(name), inhabitants(inhabitants), mayor(mayor), area(area) {}/*defining the construcotr*/
string City::getName() const {/*'getting' the name meaning itll be able to be read*/
	return name;
}
void City::setName(const string& name){/*setting name in constructor*/
	this->name = name;/*process setting the name*/
}
int City::getInhabitants() const {
	return inhabitants;
}
void City::setInhabitants(int inhabitants) {
	this->inhabitants = inhabitants;
}
string City::getMayor() const {
	return mayor;
}
void City::setMayor(const string& mayor) {
	this->mayor = mayor;
}
double City::getArea() const {
	return area;
}
void City::setArea(double area) {
	this->area = area;
}
/*the setting and getting fucntions are repeated for each variable in same way*/
void City::display() const {/*the function to display the info*/
	cout << "city = " << name << endl;
	cout << "inhabitants = " << inhabitants << endl;
	cout << "mayor = " << mayor << endl;
	cout << "area = " << area << " km^2\n" << endl;
}