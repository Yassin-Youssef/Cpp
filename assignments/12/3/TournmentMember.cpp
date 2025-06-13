/*
CH-230-A
a12_p3.cpp TestMember.cpp
yassin youssef
yyoussef@constructor.university
*/
#include "TournmentMember.h"
using namespace std;
string TournamentMember::location = "default location";
TournamentMember::TournamentMember() 
    : firstName("none"), lastName("none"), DoB("0000-00-00"), role("none"), nationality("none") {
    cout << "default is called" << endl;
}
TournamentMember::TournamentMember(const string& fn, const string& ln, const string& dob, const string& r, const string& n) 
    : firstName(fn), lastName(ln), DoB(dob), role(r), nationality(n) {
    cout << "parameter called" << endl;
}
TournamentMember::TournamentMember(const TournamentMember& tm)
    : firstName(tm.firstName), lastName(tm.lastName), DoB(tm.DoB), role(tm.role), nationality(tm.nationality) {
    cout << "copy is called" << endl;
}
TournamentMember::~TournamentMember() {
    cout << "destructor called" << endl;
}
void TournamentMember::printInfo() const {
    cout<< "first name is  " << firstName << endl;
    cout<< "last name is " << lastName << endl;
    cout<< "date of birth is " << DoB << endl;
    cout<< "role is " << role << endl;
    cout<< "nationality is " << nationality << endl;
    cout<< "location is " << location << endl;
}
void TournamentMember::changeLocation(const string& newLocation) {
    location = newLocation;
    cout << "Location changed to " << location << endl;
}
/*all above was done for a12_p2*/
Player::Player() : TournamentMember(), num(0), pos("none"), goals(0), foot("Right") {/*default*/
    cout << "default player constructor called" << endl;
}

Player::Player(const string& fn, const string& ln, const string& dob, const string& r, const string& n, int number, const string& position, const string& f) 
    : TournamentMember(fn, ln, dob, r, n), num(number), pos(position), goals(0), foot(f) {/*parameterized*/
    cout << "parametrized constructor called" << endl;
}

Player::Player(const Player& p) : TournamentMember(p), num(p.num), pos(p.pos), goals(p.goals), foot(p.foot) {/*copy*/
    cout << "copy player constructor called" << endl;
}

Player::~Player() {/*destructor*/
    cout << "Player destructor called " << endl;
}

void Player::printPlayerInfo() const {/*player info print*/
    printInfo();
    cout << "Number is " << num << endl;
    cout << "Position is " << pos << endl;
    cout << "Goals =  " << goals << endl;
    cout << "prefered foot is " << foot << endl;
}