#include "Vehicle.h"
#include <iostream>

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

//класс мотоцикла
class Motorcycle : public Vehicle {
	std::string manufacturer;
	bool sidecar;
public:
	Motorcycle() {
		name = "Мотоцикл";
		wheels = 2;
		velocity = 200;
		manufacturer = "Россия";
		sidecar = false;
	}
	Motorcycle(int wheels, int velocity, std::string manufacturer, bool sidecar) {
		name = "Мотоцикл";
		this->wheels = wheels;
		this->velocity = velocity;
		this->manufacturer = manufacturer;
		this->sidecar = sidecar;
	}
	const void display() override {
		std::cout << "Наименование транспорта: " << this->name << std::endl;
		std::cout << "Кол-во колес: " << this->wheels << std::endl;
		std::cout << "Максимальная скорость: " << this->velocity << std::endl;
		std::cout << "Страна-изготовитель: " << this->manufacturer << std::endl;
		std::cout << "Наличие коляски: ";
		if (this->sidecar)
			std::cout << "да";
		else
			std::cout << "нет";
		std::cout << std::endl;
	}
};

#endif