/*
CH-230-A
a12_p2.cpp TestTournment.h
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include <string>
using namespace std;
class TournamentMember {
private:
    string firstName;
    string lastName;
    string DoB;
    static string location;
    string role;
    string nationality;
public:
    TournamentMember();/*deafult*/
    TournamentMember(const string&, const string&, const string&, const string&, const string&);/*parameterizee*/
    TournamentMember(const TournamentMember&); /*copy*/
    ~TournamentMember();/*destructor*/
    /*the setters*/
    void setFirstName(const string& fn) { firstName = fn; }
    void setLastName(const string& ln) { lastName = ln; }
    void setDoB(const string& dob) { DoB = dob; }
    void setRole(const string& r) { role = r; }
    void setNationality(const string& nat) { nationality = nat; }
    /*the getters*/
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getDoB() const { return DoB; }
    string getRole() const { return role; }
    string getNationality() const { return nationality; }
    /*static*/
    static void setLocation(const string& loc) { location = loc; }
    static string getLocation() { return location; }
    void printInfo() const;
    static void changeLocation(const string&);
};