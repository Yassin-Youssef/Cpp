/*
CH-230-A
a10_p8.cpp testcomplex.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "Complex.h"
int main() {
    double real1, imag1, real2, imag2;
    /*Read the first complex number*/
    std::cout << "enter real and imginary of first complex";
    std::cin >> real1 >> imag1;
    Complex c1(real1, imag1);
    /*Read the second complex number*/
    std::cout << "enter real and imaginary of second complex number: ";
    std::cin >> real2 >> imag2;
    Complex c2(real2, imag2);
    /*Print the conjugate of the first complex number*/
    Complex c1_conjugate = c1.conjugate();
    std::cout << "conjugate first complex = ";
    c1_conjugate.print();
    /*Sum of the two complex numbers*/
    Complex c3 = c1.add(c2);
    std::cout << "sum of the two complex numbers=  ";
    c3.print();
    /*Difference between the second and first complex numbers*/
    Complex c4 = c2.sub(c1);
    std::cout << "difference between second and first complex numbers = ";
    c4.print();
    /*Multiplication of the two complex numbers*/
    Complex c5 = c1.multiply(c2);
    std::cout << "multiplication of the two complex numbers =";
    c5.print();
    return 0;
}
