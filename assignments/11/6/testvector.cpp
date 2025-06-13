/*
CH-230-A
a11_p6.cpp 
yassin youssef testvector.cpp
yyoussef@constructor.university
*/
#include <iostream>
#include "Vector.h"
using namespace std;
int main() {
    double data1[] = {3.0, 1.0, 6.0};/*vector*/
    double data2[] = {2.5, 8.0, 13.0};/*vector*/
    Vector v1(3, data1);
    Vector v2(3, data2);
    cout << "v1 =  ";
    v1.print();
    cout << "v2 = ";
    v2.print();
    cout << "normal of v1 =  " << v1.norm() << endl;/*printing normal*/
    cout << "scalar product of v1 and v2 =  " << v1.scalarProduct(v2) << endl;/*scalar product*/
    Vector sum = v1.add(v2);/*sum*/
    cout << "Sum of v1 and v2 =  ";
    sum.print();
    Vector diff = v1.subtract(v2);
    cout << "Difference of v1 and v2 =  ";
    diff.print();
    return 0;
}
