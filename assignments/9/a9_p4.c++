/*
CH-230-A
a9_p4.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
using namespace std;
int mycount(int a, int b) {/*function to return the second integers subracted by first a-b*/
    return b - a;
}
int mycount(char c, const string& str) {/*function to count the character from string*/
    int n = 0;
     for(char ch : str){/*for loop for each character in string*/
        if(ch == c){/*if function for if the character chosen is found */
            n++;/*incrementing the count*/
        }
    }
    return n;
}
int main() {
    int a, b;
    char c;
    string str;
    /*initianalizing the values to be entered*/
    cout << "enter 2 integers\n";
    cin >> a >> b;/*entering the integers*/
    cout << "enter a character\n";
    cin >> c;/*entering the character*/
    cin.ignore();/*removing the newline character*/
    cout << "enter string\n";
    getline(cin, str);/*entering the string */
    cout << "difference between the integers is " << mycount(a, b) << endl;
    cout << "chosen character is found " << mycount(c, str) << " times\n"<< endl;
    /*outputing the results and outputs*/
    return 0;
}
