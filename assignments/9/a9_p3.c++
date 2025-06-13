/*
CH-230-A
a9_p3.cpp
yassin yousseff
yyoussef@constructor.university
*/
#include <iostream>
float abs(float n){/*the function for finding absolute value*/
    if(n<0){
        return -n;/*since n<0 it is negative and if it is returned negative then negatives cancel out*/
    }else{
        return n;/*returns normal since it is the absolute value*/
    }
}
int main(){
    float n;
    std::cout<<"enter a float\n";
    std::cin>>n;/*entering float*/
    float absn = abs(n);
    std::cout<<"the absolute value is "<<absn<<std::endl;/*showing abosolute value by calling function*/
    return 0;
}