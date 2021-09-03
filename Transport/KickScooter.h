#include "Vehicle.h"
#include <iostream>

#ifndef SCOOTER_H
#define SCOOTER_H

//����� �������
class KickScooter : public Vehicle {
	std::string kind;
	int wheel_diameter;
public:
	KickScooter() {
		name = "�������";
		wheels = 2;
		velocity = 50;
		kind = "��������";
		wheel_diameter = 150;
	}
	KickScooter(int wheels, int velocity, std::string kind, int wheel_diameter) {
		name = "�������";
		this->wheels = wheels;
		this->velocity = velocity;
		this->kind = kind;
		this->wheel_diameter = wheel_diameter;
	}
	const void display() override {
		std::cout << "������������ ����������: " << this->name << std::endl;
		std::cout << "���-�� �����: " << this->wheels << std::endl;
		std::cout << "������������ ��������: " << this->velocity << std::endl;
		std::cout << "�������������: " << this->kind << std::endl;
		std::cout << "������� ����� (� ��): " << this->wheel_diameter << std::endl;
	}
};

#endif