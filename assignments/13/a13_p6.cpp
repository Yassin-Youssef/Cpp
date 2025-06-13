/*
CH-230-A
a13_p6.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include <stdexcept>/*a library which includes out_of_range*/
#include <vector>
using namespace std;
int main () {
	vector <int> vector;/*intiazlizing vector*/
	for (int i = 0; i < 20; i++){
    	vector.push_back(8);/*keeps pushing 8 meaning adding 9=8 to vector*/
    }
	try {
		cout << vector.at(20) << endl; /*trys going more than 20*/
	}
	catch (const out_of_range& oor) {
    	cerr << "error occured " << oor.what() <<endl;/*description of error*/
	}
	return 0;
}