/*
CH-230-A
a13_p4.cpp   minheritance1.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
using namespace std;
class A
{
    int x;
    public:
        void setX(int i) {x = i;}
        void print() { cout << x; }
};
 
class B: virtual public A/*virtual inheritcance */
{
    public:
        B()  { setX(10); }
};
 
class C: virtual public A/*virtual inherticance*/
{
    public:
        C()  { setX(20); }
};

class D: public B, public C 
{};
 
int main()
{
    D d;
    d.print();
    return 0;
}
/*error was that virtual inheritance had to be added in class c and class b for class A
the error printned for function print saying it was ambigious */
