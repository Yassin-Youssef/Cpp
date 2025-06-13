/*
CH-230-A
a12_p1.cpp testshapes.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "Shapes.h"
using namespace std;
int main() {
    Hexagon hex1("hex1", 0.0, 0.0, 9.0, "yellow");/*what will be outputed for first hexagon*/
    Hexagon hex2("hex2", 0.0, 0.0, 15.0, "green");
    Hexagon hex3 = hex2;
    cout << "hexagon 1 (" << hex1.getColor() << "):" << endl;/*output colour*/
    cout << "side =  " << hex1.getSide() << endl;/*ouput side*/
    cout << "perimeter = " << hex1.computePerimeter() << endl;/*output perimeter*/
    cout << "area = " << hex1.computeArea() << endl << endl;/*output area*/
    /*repeat for next hexagons*/
    cout << "hexagon 2 (" << hex2.getColor() << "):" << endl;
    cout << "side =  " << hex2.getSide() << endl;
    cout << "perimeter =  " << hex2.computePerimeter() << endl;
    cout << "area =  " << hex2.computeArea() << endl << endl;
    cout << "hexagon 3 (Copy of Hexagon 2):" << endl;
    cout << "side = " << hex3.getSide() << endl;
    cout << "perimeter = " << hex3.computePerimeter() << endl;
    cout << "area = " << hex3.computeArea() << endl;
    return 0;
}

