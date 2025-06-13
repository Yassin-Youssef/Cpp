/*
CH-230-A
a12_p3.cpp TestTournment.h
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
    TournamentMember();
    TournamentMember(const string&, const string&, const string&, const string&, const string&);
    TournamentMember(const TournamentMember&); 
    ~TournamentMember();
    void setFirstName(const string& fn) { firstName = fn; }
    void setLastName(const string& ln) { lastName = ln; }
    void setDoB(const string& dob) { DoB = dob; }
    void setRole(const string& r) { role = r; }
    void setNationality(const string& n) {nationality = n;}

    string getFirstName() const {return firstName;}
    string getLastName() const {return lastName;}
    string getDoB() const {return DoB;}
    string getRole() const {return role;}
    string getNationality() const {return nationality;}

    static void setLocation(const string& loc) {location = loc;}
    static string getLocation() {return location;}
    void printInfo() const;
    static void changeLocation(const string&);
};
/*the above was already added for a12_p2*/
class Player : public TournamentMember {/*player class*/
private:
    int num;
    string pos;
    int goals;
    string foot; 

public:
    Player();/*constructor default*/
    Player(const string&, const string&, const string&, const string&, const string&, int, const string&, const string&);/*parameterized player*/
    Player(const Player&);/*copy*/
    ~Player();/*destructor*/
/*setters*/
    void setNum(int n) { num = n; }
    void setPos(const string& p) { pos = p; }
    void setFoot(const string& f) { foot = f; }
/*getters*/
    int getNum() const { return num; }
    string getPos() const { return pos; }
    int getGoals() const { return goals; }
    string getFoot() const { return foot; }

    void incrementGoals() { ++goals; }/*the adding of goals*/
    void printPlayerInfo() const;
};