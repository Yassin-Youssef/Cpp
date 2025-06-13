/*
CH-230-A
a9_p2.cpp
yassin yousseff
yyoussef@constructor.university
*/
#include <iostream>
int main(){
    int n;
    double x;/*declaring the int and double*/
    std::string s;/*declaring the string*/
    std::cout<<"enter integer\n";
    std::cin>>n;/*entering int*/
    std::cout<<"enter a double\n";
    std::cin>>x;/*entering double*/
    std::cout<<"enter a string\n";
    std::cin >> s;/*entering string*/
    for (int i = 0; i < n; ++i) {/*for loop output*/
        std::cout << s << ":" << x << std::endl;
    }
    return 0;
}