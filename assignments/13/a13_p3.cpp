/*
CH-230-A
a13_p3.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Enter number of files: ";
    cin >> n;/*entering number of files*/
    string* fn = new string[n];/*dynamically allocate memory*/
    cout << "enter file names\n";
    for (int i = 0; i < n; ++i) {
        cin >> fn[i];/*entering the file names*/
    }
    ofstream outputFile("concatn.txt", ios::binary);/*opening file output*/
    if (!outputFile.is_open()) {/*checking if open or not*/
        cerr << "error opening output file\n";/*displaying this if fail to open*/
        delete[] fn;/*free memory*/
        return 1;
    }
    for (int i = 0; i < n; ++i){/*loop for n files*/
        ifstream inputFile(fn[i], ios::binary);/*opening the files*/
        if (!inputFile.is_open()){/*checking if opens*/
            cerr << "Error opening input files";
            delete[] fn;
            return 1;
        }
        outputFile << inputFile.rdbuf();/*reading input file and writing in output*/
        outputFile << '\n';/*adding the new line character*/
        inputFile.close();/*close file*/
    }
    outputFile.close();
    cout << "successfully concatenated into concatn.txt\n";
    delete[] fn;/*deallocating memory*/
    return 0;
}

