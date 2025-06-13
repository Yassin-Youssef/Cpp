/*
CH-230-A
a12_p2.cpp TestTournmentMember.cpp
yassin youssef
yyoussef@constructor.university
*/
#include "TournmentMember.h"
using namespace std;
int main() {
    /*the outputs*/
    TournamentMember member1;
    member1.printInfo();
    TournamentMember member2("yassin", "youssef", "15/05/2006", "player", "egypt");
    member2.printInfo();
    TournamentMember member3(member2);
    member3.setFirstName("newname");
    member3.printInfo();
    TournamentMember::changeLocation("egypt");
    member1.printInfo();
    member2.printInfo();
    return 0;
}
