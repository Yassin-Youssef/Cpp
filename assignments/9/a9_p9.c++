/*
CH-230-A
a9_p9.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string replacing(const string &word) {
    string newword = word;
    for (char &c : newword) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            c = '_';
        }
    }
    return newword;
}
int main() {
    srand(static_cast<unsigned>(time(0)));/*declaring the random funciton*/
    const string words[] = {
        "computer", "television", "keyboard", "laptop", "mouse",
        "phone", "ipad", "iphone", "tablet", "mousepad", "chair", 
        "desk", "macbook", "microsoft", "streaming", "shows",
        "programming"/*my choice of random words*/
    };
    const int count = sizeof(words) / sizeof(words[0]);/*counting amount of words to hav eprogram be able to randmly choose*/
    string again = "yes";/*playing again starts yes until otherwise*/
    while (again == "yes") {
        string randword = words[rand() % count];/*the choosing of random word*/
        string newword = replacing(randword);/*the chosen word changing the vowels to underscore*/
        cout << "guess this word\n" << newword << endl;/*guessing word*/
        string guess;/*declaring guess*/
        int tries = 0;
        while (1) {
            cout << "enter your guess or quit to end game\n";
            cin >> guess;/*entering guess*/
            if (guess == "quit") {/*if statement for quit or not*/
                cout << "goodbye" << endl;
                return 0;
            }
            if (guess == randword) {/*if function for if guess is right*/
                cout << "correct guess, the word is " << randword << endl;
                cout << "you got it in " << tries << " attempts\n" << endl;
                break;
            } else {
                cout << "incorrect, try again\n" << endl;
            }
            tries++;/*incrementing after guess*/
        }
        cout << "do you want to play again\n";
        cin >> again;/*entering choice of yes or no to play again*/
    }
    cout << "goodbye" << endl;
    return 0;
}
