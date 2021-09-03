#include "Vehicle.h"
#include <iostream>

#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

//класс автомобиля
class Automobile : public Vehicle {
	std::string carcass;
	int tank_capacity;
public:
	Automobile() {
		name = "Автомобиль";
		wheels = 4;
		velocity = 150;
		carcass = "Хэтчбэк";
		tank_capacity = 45;
	}
	Automobile(int wheels, int velocity, std::string carcass, int tank_capacity) {
		name = "Автомобиль";
		this->wheels = wheels;
		this->velocity = velocity;
		this->carcass = carcass;
		this->tank_capacity = tank_capacity;
	}
	const void display() override {
		std::cout << "Наименование транспорта: " << this->name << std::endl;
		std::cout << "Кол-во колес: " << this->wheels << std::endl;
		std::cout << "Максимальная скорость: " << this->velocity << std::endl;
		std::cout << "Тип кузова: " << this->carcass << std::endl;
		std::cout << "Вместимость бака: " << this->tank_capacity << std::endl;
	}
};

#endif