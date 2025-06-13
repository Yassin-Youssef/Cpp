/*
CH-230-A
a10_p8.cpp complex.cpp
yassin youssef
yyoussef@constructor.university
*/
#include "Complex.h"
#include <iostream>
/*Default constructor initializes real and imaginary parts to 0*/
Complex::Complex() : real(0), imag(0) {}
/*Parameterized constructor initializes with specific real and imaginary values*/
Complex::Complex(double r, double i) : real(r), imag(i) {}
/*Copy constructor*/
Complex::Complex(const Complex &other) : real(other.real), imag(other.imag) {}
/*Destructor (empty, no dynamic memory allocation in this case)*/
Complex::~Complex() {}
/*Getter methods*/
double Complex::getReal() const {
    return real;
}
double Complex::getImag() const {
    return imag;
}
// Setter methods
void Complex::setReal(double r) {
    real = r;
}
void Complex::setImag(double i) {
    imag = i;
}
/*Method to print the complex number in the form "a + bi" or "a - bi"*/
void Complex::print() const {
    if (imag >= 0)
        std::cout << real << " + " << imag << "i" << std::endl;
    else
        std::cout << real << " - " << -imag << "i" << std::endl;
}
/*Method to return the conjugate of the complex number*/
Complex Complex::conjugate() const {
    return Complex(real, -imag);
}
/*Method to add two complex numbers*/
Complex Complex::add(const Complex &other) const {
    return Complex(real + other.real, imag + other.imag);
}
/*Method to subtract two complex numbers*/
Complex Complex::sub(const Complex &other) const {
    return Complex(real - other.real, imag - other.imag);
}
/*Method to multiply two complex numbers*/
Complex Complex::multiply(const Complex &other) const {
    double r = real * other.real - imag * other.imag;
    double i = imag * other.real + real * other.imag;
    return Complex(r, i);
}
