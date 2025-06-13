#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(static_cast <unsigned int> (time(0)));/*initializing the random number generator*/
    set<int>lotnums;/*declaring and creating the set*/
    while(lotnums.size()<6){
        int num = rand()%49+1;/*the number generator*/
        lotnums.insert(num);/*inserting the random numbers*/
    }
    for(set<int> :: iterator it = lotnums.begin(); it != lotnums.end(); it++){
        cout<<*it<<" ";/*printing the list with space*/
    }
    cout<<endl;
    return 0;
}