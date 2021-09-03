#include "Vehicle.h"
#include <iostream>

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

//����� ���������
class Motorcycle : public Vehicle {
	std::string manufacturer;
	bool sidecar;
public:
	Motorcycle() {
		name = "��������";
		wheels = 2;
		velocity = 200;
		manufacturer = "������";
		sidecar = false;
	}
	Motorcycle(int wheels, int velocity, std::string manufacturer, bool sidecar) {
		name = "��������";
		this->wheels = wheels;
		this->velocity = velocity;
		this->manufacturer = manufacturer;
		this->sidecar = sidecar;
	}
	const void display() override {
		std::cout << "������������ ����������: " << this->name << std::endl;
		std::cout << "���-�� �����: " << this->wheels << std::endl;
		std::cout << "������������ ��������: " << this->velocity << std::endl;
		std::cout << "������-������������: " << this->manufacturer << std::endl;
		std::cout << "������� �������: ";
		if (this->sidecar)
			std::cout << "��";
		else
			std::cout << "���";
		std::cout << std::endl;
	}
};

#endif