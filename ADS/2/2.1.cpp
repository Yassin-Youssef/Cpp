#include <iostream>
#include <list>
#include <fstream>
using namespace std;
int main(){
    list<int> A, B;
    int num;
    while(true){
        cin>>num;
        if(num<=0){
            break;
        }
        A.push_front(num);/*pushing the number to the back for list A*/
        B.push_back(num);/*pushing the number to back*/
    }
    for(int val : A){
        cout<<num<<" ";/*printing list A*/
    }
    cout<<endl;
    ofstream outFile("listB.txt");/*open the file*/
    for(int val : B){
        outFile<<val<<" ";/*printing list B*/
    }
    outFile.close();
    if(!A.empty()){
        A.push_back(A.front());
        A.pop_front();
    }
    if(!B.empty()){
        B.push_back(B.front());
        B.pop_front();
    }
    for (auto it = A.begin(); it != A.end(); ++it) {
        if (it != A.begin()){ 
            cout << ", ";
        }
        cout << *it;
    }
    cout << endl;
    for (auto it = B.begin(); it != B.end(); ++it) {
        if (it != B.begin()){
            cout << ", ";
        }
        cout << *it;
    }
    cout << endl;
    A.merge(B);
    A.sort();
    for (int val : A) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}