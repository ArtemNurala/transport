#include "Vehicle.h"
#include <iostream>

#ifndef SCOOTER_H
#define SCOOTER_H

//класс скутера
class KickScooter : public Vehicle {
	std::string kind;
	int wheel_diameter;
public:
	KickScooter() {
		name = "Самокат";
		wheels = 2;
		velocity = 50;
		kind = "Трюковой";
		wheel_diameter = 150;
	}
	KickScooter(int wheels, int velocity, std::string kind, int wheel_diameter) {
		name = "Самокат";
		this->wheels = wheels;
		this->velocity = velocity;
		this->kind = kind;
		this->wheel_diameter = wheel_diameter;
	}
	const void display() override {
		std::cout << "Наименование транспорта: " << this->name << std::endl;
		std::cout << "Кол-во колес: " << this->wheels << std::endl;
		std::cout << "Максимальная скорость: " << this->velocity << std::endl;
		std::cout << "Разновидность: " << this->kind << std::endl;
		std::cout << "Диаметр колес (в мм): " << this->wheel_diameter << std::endl;
	}
};

#endif