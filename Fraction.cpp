#include "Fraction.h"

Fraction::Fraction(int numerator,int denominator){
	this->numerator = numerator;
	this->denominator =  denominator;

}
Fraction operator + (const Fraction& left,const Fraction& right) {
	int new_num = (left.numerator*right.denominator)+(left.denominator*right.numerator);
	int new_den = (left.denominator*right.denominator);
	Fraction temp_fraction {new_num,new_den};
	return temp_fraction;
}
Fraction operator - (const Fraction& left,const Fraction& right) {
	int new_num = (left.numerator*right.denominator)-(left.denominator*right.numerator);
	int new_den = (left.denominator*right.denominator);
	Fraction temp_fraction {new_num,new_den};
	return temp_fraction;
}
Fraction operator * (const Fraction& left,const Fraction& right){
	int new_num = (left.numerator*right.numerator);
	int new_den = (left.denominator*right.denominator);
	Fraction temp_fraction {new_num,new_den};
	return temp_fraction;
}
Fraction operator / (const Fraction& left,const Fraction& right){
	int new_num = (left.numerator*right.denominator);
	int new_den = (left.denominator*right.numerator);
	Fraction temp_fraction {new_num,new_den};
	return temp_fraction;
}
bool operator > (const Fraction& left,const Fraction& right) {
	return ((left.numerator*right.denominator) > (right.numerator*left.denominator));
}
Fraction:: operator std::string() const{
	return std::to_string(numerator) + "/"+std::to_string(denominator);
}
std::ostream& operator << (std::ostream& stream, const Fraction & fract) {
	stream << std::to_string(fract.numerator) + "/"+std::to_string(fract.denominator);
	return stream;
}

