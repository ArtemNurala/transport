#include <string>

#ifndef VEHICLE_H
#define VEHICLE_H

//абстрактный класс транспорта
class Vehicle {
protected:
	std::string name; //наименование транспорта
	int wheels; //количество колес
	int velocity; //максимальная скорость
public:
	virtual const void display() = 0; //отображение информации о транспорте
	virtual ~Vehicle() {}
};

#endif