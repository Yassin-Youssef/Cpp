#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<float>A;/*declaring deque*/
    float num;
    cin>>num;
    while(num!=0){
        if(num<0){
            A.push_front(num);/*pushing front for negative numbers*/
        }else{
            A.push_back(num);/*pushing back for postivie numbers*/
        }
        cin>>num;
    }
    for(const auto& num: A){
        cout<<num<<" ";/*printing with spaces*/
    }
    cout<<endl;
    auto it = A.begin();/*iterator*/
    while(it!=A.end()&& *it<0){
        it++;/*keeps moving forward until a negative number*/
    }
    A.insert(it, 0);/*inserting the 0 in the middle*/
    for (size_t i = 0; i < A.size();i++){
        cout<<A[i];
        if(i<A.size()-1){
            cout<<";";/*printing with a semi colon*/
        }
    }
    cout<<endl;
    return 0;
}