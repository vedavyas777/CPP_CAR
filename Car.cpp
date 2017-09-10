#include<iostream>

#include "Car.h"

Car::Car(Engine* engine, Wheel* wheels, Rack rack) {
	this->engine = engine;
	this->wheels = wheels;
	this->rack = rack;
	this->engine->updateCar(this);
}

void Car::addRack(Rack rack){
	if(rack==NULL){
		this->rack = rack;
	}
}
void Car::replaceWheel(Wheel oldOne, Wheel newOne){
	for(int i=0;i<4;i++){
		if(wheels[i]==oldOne)
		{
			wheels[i] =  newOne;
		}
	}
}
Car::~Car(){
	delete engine;
}

