#include <iostream>
#include "Box.h"
using namespace std;
int main(){
    int n;/*n for number of boxes*/
    cout<<"enter number of boxes to be entered"<<endl;
    cin>>n;
    box* boxn = new box[2*n];/*dynamic memory*/
    for (int i = 0; i < n; ++i) {
    double height, width, depth;
    std::cout << "enter depth,width,height for box " << i + 1<<endl;
    cin>>depth>>width>>height;
    boxn[i].setDepth(depth);/*setting the heights according to input*/
    boxn[i].setWidth(width);
    boxn[i].setHeight(height);
    }
    for (int i = 0; i < n; i++) {
        boxn[n + i] = boxn[i];/*for the copying the output*/
    }
     for (int i = 0; i < 2 * n; ++i) {
         cout<<"Volume of box "<<i+1<<" is "<<boxn[i].volume()<<endl;/*outputs*/
    }
    delete[] boxn;/*deleting the dynamic memory*/
    return 0;
}