#include "Vehicle.h"
#include <iostream>

#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

//����� ����������
class Automobile : public Vehicle {
	std::string carcass;
	int tank_capacity;
public:
	Automobile() {
		name = "����������";
		wheels = 4;
		velocity = 150;
		carcass = "�������";
		tank_capacity = 45;
	}
	Automobile(int wheels, int velocity, std::string carcass, int tank_capacity) {
		name = "����������";
		this->wheels = wheels;
		this->velocity = velocity;
		this->carcass = carcass;
		this->tank_capacity = tank_capacity;
	}
	const void display() override {
		std::cout << "������������ ����������: " << this->name << std::endl;
		std::cout << "���-�� �����: " << this->wheels << std::endl;
		std::cout << "������������ ��������: " << this->velocity << std::endl;
		std::cout << "��� ������: " << this->carcass << std::endl;
		std::cout << "����������� ����: " << this->tank_capacity << std::endl;
	}
};

#endif