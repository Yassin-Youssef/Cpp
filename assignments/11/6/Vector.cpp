/*
CH-230-A
a11_p6.cpp Vector.cpp
yassin youssef
yyoussef@constructor.university
*/
#include "Vector.h"
#include <iostream>
using namespace std;
Vector::Vector() : n(0), components(nullptr) {}/*default*/
Vector::Vector(int n, double* values) : n(n) {
    components = new double[n];
    for (int i = 0; i < n; ++i) {
        components[i] = values[i];
    }
}
Vector::Vector(const Vector& other) : n(other.n) {
    components = new double[n];
    for (int i = 0; i < n; ++i) {
        components[i] = other.components[i];
    }
}
Vector::~Vector() {/*deconstructor*/
    delete[] components;
}
void Vector::print() const {
    for (int i = 0; i < n; ++i) {
        cout << components[i] << " ";
    }
    cout << endl;
}
double Vector::norm() const {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += components[i] * components[i];
    }
    return sum;
}
Vector Vector::add(const Vector& other) const {/*adding the vector*/
    Vector result(n, components);
    for (int i = 0; i < n; ++i) {
        result.components[i] = this->components[i] + other.components[i];
    }
    return result;
}
Vector Vector::subtract(const Vector& other) const {/*subtracting the cevtors*/
    Vector result(n, components);
    for (int i = 0; i < n; ++i) {
        result.components[i] = this->components[i] - other.components[i];
    }
    return result;
}
double Vector::scalarProduct(const Vector& other) const {/*scalar prodcuct*/
    double result = 0;
    for (int i = 0; i < n; ++i) {
        result += this->components[i] * other.components[i];
    }
    return result;
}
