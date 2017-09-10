#include <iostream>

#include "Car.h"

int main() {
	Engine* engine = new Engine();
	Rack rack;
	Wheel wheels[4];
	Car* car = new Car(engine, wheels, rack);

	delete car;
}