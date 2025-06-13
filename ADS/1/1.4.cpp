#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> words;
    string in;
    cout<<"enter the words you want and to end enter 'END'"<<endl;
    cin>>in;
    while(in!="END"){
        words.push_back(in);
        cin>>in;
    }
    cout<<"outputting with space "<<endl;
    for(size_t i=0; i < words.size(); i++){
        cout << words[i] << " ";
    }
    cout<<endl;
    cout << "outputting with commas " << endl;
    if (!words.empty()) {
        for (auto it = words.begin(); it != words.end(); it++) {
            if (it != words.begin()) cout << ", ";
            cout << *it;
        }
    }
    cout << endl;
    return 0;
}
