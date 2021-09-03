// Transport.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Vehicle_Factory.h"
#include <sstream>

int main() {
	setlocale(LC_ALL, "Russian"); //����������� �������� ����� � �������
	std::cout << "�������� ���� ����������:" << std::endl;
	std::cout << "0 - ��������" << std::endl;
	std::cout << "1 - �������" << std::endl;
	std::cout << "2 - ����������" << std::endl;
	std::cout << "3 - �������" << std::endl;
	std::cout << std::endl;
	std::vector<int> transport_types; //������ ��� �������� ��������� ����� ����������
	std::string input; //������ ��� �������� ��������� �����
	//���������� ������ �� �������� ������
	while (input.find_first_not_of(' ') == input.npos) {
		getline(std::cin, input);
		if (input.find_first_not_of(' ') == input.npos)
			std::cout << "���������� ������� ���� �� 1 ��� ����������" << std::endl;
	}
	std::istringstream iss(input); //������ ������ � ��������� ����� �����
	int temp; //��������� ���������� ��� ������ ����� �� ������ � ������
	//���� � ������ ���� ����� (��� ������� ��������������� ��������� ���������� �����������)
	while (iss >> temp)
		transport_types.push_back(temp); //��������� ��� � ������
	Factory* transport_creator = new Factory(); //�������� ������ ������� �� ������������ ����������
	std::vector<Vehicle*> result_vehicles; //������ ��� �������� �������� ����������
	std::cout << std::endl;
	for (int n : transport_types) {
		if (n >= 0 && n < Vehicles::MAX_VALUE) {
			//����� �������� ���������� ������� ���� ��������� ��� � ������
			result_vehicles.push_back(transport_creator->create_transport(n));
			result_vehicles.back()->display(); //���������� ���������� � ����������
		}
		else
			//���� ��� ����������, ������ ��������������
			std::cout << "����������� ��� ����������!" << std::endl;
		std::cout << std::endl;
	}
	//�������� �������� �� ���������� ������ ���������
	for (Vehicle* n : result_vehicles)
		delete n;
}