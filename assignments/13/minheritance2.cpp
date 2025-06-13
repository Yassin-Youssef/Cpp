/*
CH-230-A
a13_5.cpp   miniheritance2.cpp
yassin youssef
yyoussef@constructor.university
*/
#include<iostream>
using namespace std;
 
class A
{
	int x;
	public:
		A(int i) { x = i; }
		void print() { cout << x; }
};
 
class B: virtual public A
{
	public:
		B():A(10) {  }
};
 
class C:  virtual public A 
{
	public:
		C():A(10) {  }
};
 
class D: public B, public C {
	public:
		D(): A(10), B(), C() { } /*calling for functions A and B and C so there is a connectionnn*/
};
 
int main()
{
    D d; 
    d.print();
    return 0;
}
/*the error that was displayed saying no matching function to call A:: A()
so therefore the part i added allowed me to call and declare inheritance B and C from A
which resulted in calling the inheritance in D without it there will be no connetion */