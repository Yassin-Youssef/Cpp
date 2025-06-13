/*
CH-230-A
a9_p5.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    string name;
    int randnum;
    int guess ;
    int tries = 0;
    /*declaring all variables to be entered*/
    srand(static_cast<unsigned int>(time(0)));/*declaring the random function*/
    randnum = (rand() % 100) + 1;/*when the program will choose a random number between 1-100 and the +1 is to make it 100 not 99*/
    cout << "enter name\n";
    getline(cin, name);/*entering of name*/
    cout<<"enter first guess\n";
    cin>>guess;/*entering first guess*/
    tries++;/*incremetning first guess*/
    while(guess != randnum){/*while function until guess is correct*/
        if(guess>randnum){
            cout<<"too high, guess again\n";
        }
        if(guess<randnum){
            cout<<"too low, guess again\n";
        }/*if function for checking if guess is larger or lower than the actual random number and showing user*/
        cin>>guess;/*entering another guess*/
        tries++;/*incrementing guess*/
    }
    cout<<name<<" your guess ("<<guess<<") is correct after "<<tries<<" attempts";
    /*output to show user they got the guess right after how many tries*/
    return 0;
}