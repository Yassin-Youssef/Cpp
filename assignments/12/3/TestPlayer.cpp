/*
CH-230-A
a12_p3.cpp TestPlayer.cpp
yassin youssef
yyoussef@constructor.university
*/
#include "TournmentMember.h"
using namespace std;
int main() {
    /*outputs and my choices*/
    Player player1("yassin", "youssef", "2006-05-15", "Player", "egypt", 11, "forward", "left");
    Player player2("lionel", "messi", "1987-06-24", "Player", "argentina", 10, "winger", "Left");
    Player player3("luca", "modric", "1985-09-09", "Player", "croatia", 3, "midfield", "right");
    cout << "player 1 info" << endl;
    player1.printPlayerInfo();
    cout << "player 2 Info" << endl;
    player2.printPlayerInfo();
    cout << "player 3 info " << endl;
    player3.printPlayerInfo();
    TournamentMember::changeLocation("Hamburg");
    cout << "after the change to hamburg" << endl;
    player1.printPlayerInfo();
    player2.printPlayerInfo();
    player3.printPlayerInfo();
    player1.incrementGoals();
    player1.incrementGoals();
    player1.incrementGoals();
    player1.incrementGoals();
    player2.incrementGoals();
    player2.incrementGoals();
    player2.incrementGoals();
    player3.incrementGoals();
    cout << "after updated goals" << endl;
    player1.printPlayerInfo();
    player2.printPlayerInfo();
    player3.printPlayerInfo();

    return 0;
}
