#include <iostream>

class Inch{
	long double quantity;
public:
	constexpr Inch(long double i) : quantity{i}{};
};


class Meter{
	long double quantity;
public:	
	constexpr Meter(long double m) : quantity(m){};
	
};

constexpr Inch operator"" _in (long double i){
		Inch d{i};
		return d;
}

constexpr Meter operator"" _m (long double m){
		return Meter{m};
	}
int main(){
	Meter m = 3.1_m;
	Inch in = 2.4_in;

}