/*
CH-230-A
a12_p5.cpp fraction.h
yassin youssef
yyoussef@constructor.university
*/
#ifndef FRACTION_H_
#define FRACTION_H_
using namespace std;
class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	friend ostream& operator<<(ostream&, const Fraction&); /*operator for output*/
	friend istream& operator>>(istream&, Fraction&); /*operator for input*/
	Fraction operator*(const Fraction&); /*operator for multpilication*/
	Fraction operator/(const Fraction&);/*operator for division*/
	/*new for a12_p5*/
	Fraction operator+(const Fraction&);/*operator function for addition*/
	Fraction operator-(const Fraction&);/*operator function for subtraction*/
	void operator=(const Fraction&);/*assigning*/
	void operator<(const Fraction&);/*operator function for less than*/
	void operator> (const Fraction&);/*operator function for larger than*/
};
#endif /* FRACTION_H_ */
