/*
CH-230-A
a13_p1.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    cout << "enter file name"<<endl;
    string firstfile;
    cin >> firstfile;/*input filename*/
    string copyfile = firstfile.substr(0, firstfile.find_last_of('.')) + "_copy" + firstfile.substr(firstfile.find_last_of('.'));
    ifstream inputFile(firstfile, ios::binary);
    ofstream outputFile(copyfile, ios::binary);
    if (!inputFile || !outputFile) {/*if function for errors*/
        cerr << "error opening" << endl;
        return 1;
    }
    outputFile << inputFile.rdbuf();
    cout << copyfile << endl;/*outputting file name*/
    return 0;
}