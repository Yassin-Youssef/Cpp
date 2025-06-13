/*
CH-230-A
a9_p7.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
using namespace std;
void swapping(int &a, int &b){/*swaps integers*/
    int n = a;/*a temporary store for a*/
    a = b;/*a now is b*/
    b = n;/*b is now the temporary which was a*/
}
void swapping(float &x, float &y){/*swaps floats*/
    float n = x;/*temporary n for x*/
    x = y;/*x is now y*/
    y = n;/*y is temp which was x so now y is x*/
}
void swapping(const char *&str1, const char *&str2){/*swaps pointers*/
    const char *n = str1;/*temporary store for pointer str1*/
    str1 = str2;/*str1 is now str2*/
    str2 = n;/*str2 is now the temporary pointer n which was str1 so now str2 is str2*/
}
/*everything from here was copied from code in the assingment as it was a continuation*/
int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}

