/*
CH-230-A
a10_p2 testcritter.cpp
yassin youssed
yyoussef@constructor.university
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(void)
{
	Critter c;

	string inputname;
	int hunger;
	int age;
	string inputfood;
 
	cout << "Please enter data: ";
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, inputname);
	c.setName(inputname);
	cin.ignore();
	//c.name = "fdafa";
	//c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	cout << "Age: ";
    cin >> age;
    c.setAge(age);
	cout << "Favorite food: ";
    getline(cin, inputfood);
    c.setFood(inputfood);
	cin.ignore();
	cout << "You have created:" << endl;
	c.print();
    return 0;
}
