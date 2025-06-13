/*
CH-230-A
a10_p8.cpp complex.h
yassin youssef
yyoussef@constructor.university
*/
#define COMPLEX_H
class Complex {
private:
    double real;
    double imag;
public:
    /*constructor and destructor */
    Complex();/*default*/
    Complex(double r, double i);/*parameter constructor*/
    Complex(const Complex &other);/*copy constructor*/
    ~Complex();/*destructor*/
/*getters*/
    double getReal() const;
    double getImag() const;
/*setters*/
    void setReal(double r);
    void setImag(double i);
/*to print*/
    void print() const;
/*Method to get the conjugate of a complex number*/
    Complex conjugate() const;
    /*Operations for adding subtracting multiplying*/
    Complex add(const Complex &other) const;
    Complex sub(const Complex &other) const;
    Complex multiply(const Complex &other) const;
};