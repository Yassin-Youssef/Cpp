/*
CH-230-A
a12_p5.cpp testfraction.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	// create fractions
	Fraction a, b;
	/*final outputs and inputs*/
	cout << "Enter first fraction\n";
    cin >> a;
    cout << "Enter second fraction\n";
    cin >> b;
    Fraction product = a*b;
    Fraction division = a/b;
    cout << "product = "<<product<<endl;
    cout << "division = "<<division<<endl;
    Fraction add = a + b;
    Fraction sub = a - b;
    cout<<"sum = "<<add<<endl;
    cout<<"difference =  "<<sub<<endl;
    cout << "comparing = " << endl;
    a < b;
    a > b; 
    return 0;
}

