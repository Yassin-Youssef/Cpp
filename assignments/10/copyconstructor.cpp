/*
CH-230-A
a10_p7.cpp copyconstructor.cpp
yassin baher
yyoussef@constructor.university
*/
#include <iostream>
using namespace std;
class Object {
	private:
		int id;
		string name;
	public:
		Object() {
			cout<<"deafult constructor called"<<endl;
			id = 0;
			name = "test";
		}
		Object(const int newid, const string newname) {
			cout<<"parameter constructor called"<<endl;
			id = newid;
			name = newname;
		}
		// copy constructor
		Object(const Object & obj) {
			cout<<"copy constructor called"<<endl;
			id = obj.id;
			name = obj.name;
		}
		void setId(const int newid) {
			id = newid;
		}
		void print() {
			cout << "id=" << id << endl;
			cout << "name=" << name << endl;
		}
};
void funcByVal(Object obj) {
	cout<<"funcbyval called"<<endl;
	obj.setId(111);
	obj.print();
}
// needs to be implemented
void funcByRef(Object &obj) {/*the function by ref using the reference*/
	cout<<"funcbyref called"<<endl;
	obj.setId(999);
	obj.print();
}
int main(void) {
	Object obj1;/*calling object 1*/
	Object obj2(1234, "yassin");/*calling object 2*/
	Object obj3(obj2);/*calling object 3*/
	funcByVal(obj1);/*calling by function by val for object 1*/
	funcByVal(obj2);/*calling by func by vall for object 2*/
	funcByVal(obj3);/*function caalled for object 3 */
	funcByRef(obj1);/*funcion funcbyref called for object 1*/
	funcByRef(obj2);/*funcbyref called for object 2*/
	funcByRef(obj3);/*funcbyref called for object 3*/
    return 0;
}
