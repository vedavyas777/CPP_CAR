#include <iostream>
#include <string>
#include "fraction.h"

using namespace std;

int main() {
	const Fraction half{1,2}, one{1};
	cout << (string) half << endl;

	Fraction golden = 1 + 1/(1 + 1/(1 + one));
	cout << (string) golden << endl;

	if (golden > 2 * half) {
		cout << "correct!" << endl;
	}

	if (golden != 2 * half) {
		cout << "yay :)" << endl;
	} 
	if (1 == 2 * half) {
		cout << "correct :)" << endl;
	}

	Fraction f;
	cin >> f;
	cout << "The fraction is: ";
	cout << f;
	
	return 0;
}
