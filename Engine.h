#ifndef ENGINE_H
#define ENGINE_H

class Car;

class Engine {
	Car* car;

public:
	Engine();
	~Engine();
	void updateCar(Car*);
};

#endif