/*
CH-230-A
a11_p4.cpp dyncreature.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "Creature.h"
using namespace std;
int main() {
    string input;
    while (1) {
        cout << "enter wizard, object1, obect2, or quit"<<endl;
        cin >> input;
        if (input == "quit"){/*if statement for the exit*/
            cout << "Exiting program." << endl;
            break;
        }
        if (input == "wizard") {
            Wizard* wizard = new Wizard();/*dynamic allocate of memory*/
            wizard->run();/*calling run*/
            wizard->hover();/*calling hover*/
            delete wizard;/*deallocating memory (delete)*/
            cout << "Wizard destroyed" << endl;
        }else if (input == "object1") {
            Spell* spell = new Spell();/*dynamically allocating spell*/
            spell->run();/*calling run*/
            spell->cast();/*calling cast*/
            delete spell; /*deallocating memroy (delete)*/
            cout << "spell destroyed" << endl;
        }else if (input == "object2") {
            Fight* fight = new Fight();/*dynamically allocating memory fight*/
            fight->run();/*calling run*/
            fight->fights();/*calling fight*/
            delete fight;/*deallocating memory(delete)*/
            cout << "fight destroyed" << endl;
        }else {
            cout << "invalid input entered" << endl;
        }
    }
    return 0;
}
