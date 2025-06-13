#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    vector<int>v;/*declaring vetor*/
    for(int i = 0; i<=30;i++){
        v.push_back(i);/*adding the numbers from 1-30*/
    }
    v.push_back(5);/*pushing back 5*/
    reverse(v.begin(), v.end());/*reversing list*/
    for(vector<int> :: iterator it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";/*printing using iterator*/
    }
    cout<<endl;
    replace(v.begin(), v.end(), 5, 129);/*replacing 5 by 129*/
    for(vector<int> :: iterator it = v.begin(); it!= v.end(); it++){
        cout<<*it<<" ";/*printing list*/
    }
    cout<<endl;
    return 0;
}
