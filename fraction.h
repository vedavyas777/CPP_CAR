#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
	int num;
	int den;

public:
	Fraction(int n=0, int d=1) : num{n}, den{d} {}
	operator string () const;
	friend ostream& operator<< (ostream& out, const Fraction& f);
	friend istream& operator>> (istream& in, Fraction& f);
	friend Fraction operator+ (const Fraction& left, const Fraction& right);
	friend Fraction operator- (const Fraction& left, const Fraction& right);
	friend Fraction operator* (const Fraction& left, const Fraction& right);
	friend Fraction operator/ (const Fraction& left, const Fraction& right);
	friend bool operator< (const Fraction& left, const Fraction& right);
	friend bool operator> (const Fraction& left, const Fraction& right);
	friend bool operator== (const Fraction& left, const Fraction& right);
	friend bool operator!= (const Fraction& left, const Fraction& right);
};

#endif