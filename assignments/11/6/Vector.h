/*
CH-230-A
a11_p6.cpp Vector.h
Firstname Lastname
myemail@constructor.university
*/
#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;
class Vector {/*class vector*/
private:
    int n;/*size of vector*/
    double* components;/*components*/
public:
    Vector();/*default*/
    Vector(int n, double* values);
    Vector(const Vector& other);
    ~Vector();/*deconstructor*/
    void print() const;/*print*/
    double norm() const;
    Vector add(const Vector& other) const;/*adding*/
    Vector subtract(const Vector& other) const;/*subtract*/
    double scalarProduct(const Vector& other) const;/* scalar product*/
#endif
};
