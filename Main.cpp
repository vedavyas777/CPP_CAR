#include <iostream>
#include "Fraction.h"

int main(){
	const Fraction half{1,2}, one{1};
	std::cout << (std::string)half << std::endl;
	Fraction golden = 1+ 1/(1 + 1/(1+one));
	std::cout << (std::string)golden << std::endl;
	std::cout << (one > half) << std::endl;
	std::cout << half << std::endl;

}
