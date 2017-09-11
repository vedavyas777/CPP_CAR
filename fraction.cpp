#include "fraction.h"

Fraction::operator string () const {
	return (to_string(num) + "/" + to_string(den));
}

ostream& operator<< (ostream& out, const Fraction& f) {
	out << f.num << "/" << f.den << endl;
	return out;
}

istream& operator>> (istream& in, Fraction& f) {
	cout << "Enter Numerator: ";
    in >> f.num;
    cout << "Enter Denominator: ";
    in >> f.den;
    return in;
}

Fraction operator+ (const Fraction& left, const Fraction& right) {
	int n = left.num*right.den + left.den*right.num;
	int d = left.den*right.den;
	Fraction f (n, d);
	return f;
}

Fraction operator- (const Fraction& left, const Fraction& right) {
	int n = left.num*right.den - left.den*right.num;
	int d = left.den*right.den;
	Fraction f (n, d);
	return f;
}

Fraction operator* (const Fraction& left, const Fraction& right) {
	int n = left.num*right.num;
	int d = left.den*right.den;
	Fraction f (n, d);
	return f;
}

Fraction operator/ (const Fraction& left, const Fraction& right) {
	int n = left.num*right.den;
	int d = left.den*right.num;
	Fraction f (n, d);
	return f;
}

bool operator< (const Fraction& left, const Fraction& right) {
	int l = left.num*right.den;
	int r = right.num*left.den;
	return (l<r);
}

bool operator> (const Fraction& left, const Fraction& right) {
	int l = left.num*right.den;
	int r = right.num*left.den;
	return (l>r);
}

bool operator== (const Fraction& left, const Fraction& right) {
	int l = left.num*right.den;
	int r = right.num*left.den;
	return (l==r);
}

bool operator!= (const Fraction& left, const Fraction& right) {
	int l = left.num*right.den;
	int r = right.num*left.den;
	return (l!=r);
}

