#include "Vehicle.h"
#include <iostream>

#ifndef BUS_H
#define BUS_H

//класс автобуса
class Bus : public Vehicle {
	int max_passengers;
	int year_of_issue;
public:
	Bus() {
		name = "Автобус";
		wheels = 4;
		velocity = 100;
		max_passengers = 50;
		year_of_issue = 2005;
	}
	Bus(int wheels, int velocity, int max_passengers, int year_of_issue) {
		name = "Автобус";
		this->wheels = wheels;
		this->velocity = velocity;
		this->max_passengers = max_passengers;
		this->year_of_issue = year_of_issue;
	}
	const void display() override {
		std::cout << "Наименование транспорта: " << this->name << std::endl;
		std::cout << "Кол-во колес: " << this->wheels << std::endl;
		std::cout << "Максимальная скорость: " << this->velocity << std::endl;
		std::cout << "Максимальное кол-во мест: " << this->max_passengers << std::endl;
		std::cout << "Год выпуска: " << this->year_of_issue << std::endl;
	}
};

#endif