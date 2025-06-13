/*
CH-230-A
a12_p2.cpp TestMember.cpp
yassin youssef
yyoussef@constructor.university
*/
#include "TournmentMember.h"
using namespace std;
string TournamentMember::location = "default location";/*default location*/
TournamentMember::TournamentMember() 
    : firstName("none"), lastName("none"), DoB("00/00/0000"), role("none"), nationality("none") {
    cout << "default is called" << endl;/*default constructor*/
}
TournamentMember::TournamentMember(const string& fn, const string& ln, const string& dob, const string& r, const string& nat) 
    : firstName(fn), lastName(ln), DoB(dob), role(r), nationality(nat) {
    cout << "parameter called" << endl;
}/*paramterized constructor*/
TournamentMember::TournamentMember(const TournamentMember& tm)
    : firstName(tm.firstName), lastName(tm.lastName), DoB(tm.DoB), role(tm.role), nationality(tm.nationality) {
    cout << "copy is called" << endl;
}/*copy constructor*/
TournamentMember::~TournamentMember() {
    cout << "destructor called" << firstName << " " << lastName << "." << endl;
}/*destructor*/
void TournamentMember::printInfo() const {/*the outputss*/
    cout<< "first name is  " << firstName << endl;
    cout<< "last name is " << lastName << endl;
    cout<< "date of birth is " << DoB << endl;
    cout<< "role is " << role << endl;
    cout<< "nationality is " << nationality << endl;
    cout<< "location is " << location << endl;
}
void TournamentMember::changeLocation(const string& newLocation) {/*new locations*/
    location = newLocation;
    cout << "Location changed to " << location << endl;
}
