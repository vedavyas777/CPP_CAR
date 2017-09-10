#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include "Rack.h"

class Car {
	Engine* engine;
	Wheel wheels[4];
	Rack rack;

public:
	Car(Engine*, Wheel*, Rack);
	~Car();
	void addRack(Rack);
	void replaceWheel(Wheel, Wheel);
};

#endif
