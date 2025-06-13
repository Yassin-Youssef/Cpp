/*
CH-230-A
a12_p5.cpp fraction.cpp 
yassin youssef
yyoussef@constructor.university
*/
#include <iostream>
#include "fraction.h"
using namespace std;
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

/*operator function for output*/
ostream& operator <<(ostream& out, const Fraction& fr){
    out<<fr.num<<"/"<<fr.den<<endl;/*the output to be outputed seperating the num and den*/
    return out;
}
/*operator functions for input*/
istream& operator >>(istream& in, Fraction& fr){
    cout<<"enter the numerator"<<endl;
    in>>fr.num;
    cout<<"enter the denomenator"<<endl;
    in>>fr.den;
    return in;
}
/*operator function for multiplication*/
Fraction Fraction :: operator*(const Fraction& fr){
    return Fraction(num*fr.num, den*fr.den);
}
/*operator function for division*/
Fraction Fraction :: operator/(const Fraction& fr){
    return Fraction(num*fr.den, den*fr.num);/*this is the way of dividing fractions*/
}
/*above was for p4*/
Fraction Fraction::operator+(const Fraction& fr){
    int common_lcm = lcm(den, fr.den);
    int new_num = num*(common_lcm/den)+fr.num*(common_lcm / fr.den);
    return Fraction(new_num, common_lcm);
}
/*subtraction operator*/
Fraction Fraction::operator-(const Fraction& fr){
    int common_lcm = lcm(den, fr.den);
    int new_num = num*(common_lcm / den)-fr.num * (common_lcm / fr.den);
    return Fraction(new_num, common_lcm);
}
/*= operator*/
Fraction& Fraction::operator=(const Fraction& fr) {
    num = fr.num;
    den = fr.den;
    return *this;
}
/*<operator*/
void Fraction::operator<(const Fraction& fr) const {
    if (num*fr.den<fr.num*den){
        cout << "first smaller than second" << endl;
    } else {
        cout << "first larger than second" << endl;
    }
}
/*> operator*/
void Fraction::operator>(const Fraction& fr) const {
    if (num*fr.den>fr.num*den) {
        cout << "first larger than second" << endl;
    } else {
        cout << "first smaller than second" << endl;
    }
}