#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;
int main(){
    map <string, string> bdays;/*creating the map and the keys*/
    ifstream inputFile("data.txt");/*opening file*/
    if(!inputFile){
        cerr<<"error"<<endl;/*error for if the file fails to open*/
        return 1;
    }
    string fn, ln, bday;
    while(inputFile>>fn>>ln>>bday){/*to read the strings*/
        string name = fn + " " + ln;
        bdays[name] = bday;/*establishing the name with birthday*/
    }
    string qname;/*the name to find in file*/
    getline(cin, qname);
    if(bdays.find(qname) != bdays.end()){
        cout << qname << " birthday is " << bdays[qname] << endl;/*printing the corresponding birthday*/
    }else{
        cout<<"name not found"<<endl;
    }
    inputFile.close();
    return 0;
}