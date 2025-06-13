/*
CH-230-A
a12_p1.cpp Shapes.cpp
yassin youssef
yyoussef@constructor.university
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
using namespace std; 

Shape::Shape(const string &n) : name(n) {
	cout << "Constructor Shape"<< endl;

}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n) {
	x = nx;
	y = ny;
cout << "Constructor CS"<< endl;
}

RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) :
	CenteredShape(n, nx, ny) {
	EdgesNumber = nl;
cout << "Constructor RP"<< endl;
}

Circle::Circle(const string &n, double nx, double ny, double r) : 
	CenteredShape(n, nx, ny) {
	Radius = r;
	cout << "Constructor Circle"<< endl;
}
/*above already added*/
Hexagon::Hexagon(const string &n, double nx, double ny, double s, const string &col) :
    RegularPolygon(n, nx, ny, 6), side(s), color(col) {/*constructor called*/
    cout << "constructor hexagon" << endl;
}

Hexagon::Hexagon(const Hexagon &other)
: RegularPolygon(other), side(other.side), color(other.color) {/*copy construcor*/
    cout << "copy constructor hexagon" << endl;
}

Hexagon::~Hexagon() {/*destructor*/
    cout << "destructor hexagon" << endl;
}

double Hexagon::getSide() const {/*getting sidde*/
    return side;
}

void Hexagon::setSide(double s) {/*setting side*/
    side = s;
}

string Hexagon::getColor() const {/*gettin colour*/
    return color;
}

void Hexagon::setColor(const string &col) {/*setting colour*/
    color = col;
}

double Hexagon::computePerimeter() const {
    return 6 * side;  /*perimeter of a hexagon is 6 times the side length*/
}

double Hexagon::computeArea() const {
    return(3*sqrt(3)/2)*side*side;
}
