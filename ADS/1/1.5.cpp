#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> words;
    string in;
    cout<<"enter the words you want and to end enter 'END'"<<endl;
    while (true) {
        getline(cin, in); 
        if (in == "END") break;
        words.push_back(in);
    }
    if (words.size() >= 5) {
        swap(words[1], words[4]);
    } else {
        cout <<"no swap, not enough elements"<< endl;
    }
    if (!words.empty()){
        words.back()="???";
    }
    cout<<"outputting seperated by commas "<<endl;
    for(size_t i = 0;i<words.size(); i++){
        if (i > 0){
            cout << ", ";
        }
        cout<<words[i];
    }
    cout<<endl;
    cout << "outputting seperated by semi colon " << endl;
    if (!words.empty()) {
        auto it = words.begin();
        cout << *it;
        it++;
        for (; it != words.end(); ++it) {
            cout << "; " << *it;
        }
    }
    cout << endl;
    cout << "reverse output" << endl;
    for (auto it = words.rbegin(); it != words.rend(); ++it) {
        if (it != words.rbegin()){
            cout << " ";
        }
        cout << *it;
    }
    cout << endl;
    return 0;
}