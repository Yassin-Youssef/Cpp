/*
CH-230-A
a10_p3.cpp  testcity.cpp
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "city.h"
using namespace std;
int main() {
    City bremen("Bremen", 575071, "Andreas Bovenschulte", 326.7);/*info for bremen*/
    City paris("Paris", 2102650, "Anne Hidalgo", 105);/*info for paris*/
    City london("London", 8866180, "Sadiq Khan", 1572);/*infor for london*/
    cout << "city info\n\n";
    bremen.display();/*calling the function display with name to bremen*/
    paris.display();/*calling the function display with name to paris*/
    london.display();/*calling the function display with name to london*/
    return 0;
}
