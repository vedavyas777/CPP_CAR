#include "Engine.h"

Engine::Engine() {
	this->car = nullptr;
}

Engine::~Engine() {
	//delete car;
}

void Engine::updateCar(Car* car) {
	this->car = car;
}