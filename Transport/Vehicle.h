#include <string>

#ifndef VEHICLE_H
#define VEHICLE_H

//����������� ����� ����������
class Vehicle {
protected:
	std::string name; //������������ ����������
	int wheels; //���������� �����
	int velocity; //������������ ��������
public:
	virtual const void display() = 0; //����������� ���������� � ����������
	virtual ~Vehicle() {}
};

#endif