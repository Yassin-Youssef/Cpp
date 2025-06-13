/*
CH-230-A
a13_p8.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
using namespace std;
class Motor{/*class motor defining motor*/
    public:
        Motor() {
            throw "This motor has problems";/*throw string*/
        }
};
class Car{/*class car defining car*/
    public:
        Car(){
            try {
                Motor mot;
            }
            catch (const char* err){
                cerr << err << endl;
                throw "The car in this garage has problems with the motor";
            }
        }
};
class Garage {/*class garage*/
    public:
        Garage() {
            try {
                Car car;
            }
            catch (const char* err) {
                throw err;
            }
        }
};
int main() {    
    try {
        Garage gar;/*calling garage*/
    }
    catch (const char* err) {
        cerr << err << endl;/*if error*/
    }
    return 0;
}