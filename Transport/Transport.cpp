// Transport.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "Vehicle_Factory.h"
#include <sstream>

int main() {
	setlocale(LC_ALL, "Russian"); //подключение русского €зыка к консоли
	std::cout << "¬ыберите типы транспорта:" << std::endl;
	std::cout << "0 - мотоцикл" << std::endl;
	std::cout << "1 - самокат" << std::endl;
	std::cout << "2 - автомобиль" << std::endl;
	std::cout << "3 - автобус" << std::endl;
	std::cout << std::endl;
	std::vector<int> transport_types; //вектор дл€ хранени€ выбранных типов транспорта
	std::string input; //строка дл€ хранени€ введенных чисел
	//считывание строки из входного потока
	while (input.find_first_not_of(' ') == input.npos) {
		getline(std::cin, input);
		if (input.find_first_not_of(' ') == input.npos)
			std::cout << "Ќеобходимо указать хот€ бы 1 тип транспорта" << std::endl;
	}
	std::istringstream iss(input); //запись строки в строковый поток ввода
	int temp; //временна€ переменна€ дл€ записи чисел из строки в вектор
	//пока в потоке есть число (при встрече нецелочисленной константы считывание прекратитс€)
	while (iss >> temp)
		transport_types.push_back(temp); //добавл€ем его в вектор
	Factory* transport_creator = new Factory(); //создание класса фабрики по производству транспорта
	std::vector<Vehicle*> result_vehicles; //вектор дл€ хранени€ объектов транспорта
	std::cout << std::endl;
	for (int n : transport_types) {
		if (n >= 0 && n < Vehicles::MAX_VALUE) {
			//после создани€ транспорта нужного типа добавл€ем его в вектор
			result_vehicles.push_back(transport_creator->create_transport(n));
			result_vehicles.back()->display(); //отображаем информацию о транспорте
		}
		else
			//если тип неизвестен, выдаем предупреждение
			std::cout << "Ќеизвестный тип транспорта!" << std::endl;
		std::cout << std::endl;
	}
	//удаление объектов по завершению работы программы
	for (Vehicle* n : result_vehicles)
		delete n;
}