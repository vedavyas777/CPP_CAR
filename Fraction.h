#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction{
	int numerator;
	int denominator;

public:	
	Fraction(int=0,int =1);
	operator std::string() const;
	friend Fraction operator + (const Fraction& left,const Fraction& right);
	friend Fraction operator - (const Fraction& left,const Fraction& right);
	friend Fraction operator / (const Fraction& left,const Fraction& right);
	friend Fraction operator * (const Fraction& left,const Fraction& right);
	friend bool operator > (const Fraction& left,const Fraction& right);
	friend std::ostream& operator << (std::ostream& stream, const Fraction & fract); 
};
#endif