#include "Motorcycle.h"
#include "KickScooter.h"
#include "Automobile.h"
#include "Bus.h"
#include <vector>

#ifndef VEHICLE_FACTORY_H
#define VEHICLE_FACTORY_H

//������� ���� ���������� ������������� ���� �����, MAX_VALUE - ���������� ���������
enum Vehicles { MOTORCYCLE, KICK_SCOOTER, AUTOMOBILE, BUS, MAX_VALUE };

//����� ������� �� �������� ����������
class Factory {
public:
	//�������� ����������
	virtual Vehicle* create_transport(int number) {
		Vehicle *transport;
		switch (number) {
		case MOTORCYCLE:
			transport = new Motorcycle();
			break;
		case KICK_SCOOTER:
			transport = new KickScooter();
			break;
		case AUTOMOBILE:
			transport = new Automobile();
			break;
		case BUS:
			transport = new Bus();
			break;
		}
		return transport;
	}
	virtual ~Factory() {}
};

#endif