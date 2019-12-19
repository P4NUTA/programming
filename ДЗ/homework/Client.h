#pragma once
#include "human.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class Client : public Human {
public:
	/*Структура
	@param string Name - имя
	@param string LastName - фамилия
	@param string SecondName - отчество
	*/
	Client(string Name, string LastName, string SecondName) : Human(Name, LastName, SecondName) {}
	/*Вывод полной информации*/
	void get_full_info() {
		cout << Human::get_full_name() << endl;
		show_contracts();
	}
	/*Добавление контракта
	@param string c_name - название контракта
	*/
	void add_contact(string c_name, int c_price) {
		this->contract_name[contracts] = c_name;
		this->contract_price[contracts] = c_price;
		contracts++;
	}
	/*Вывод контрактов на экран*/
	void show_contracts() {
		for (int i = 0; i < contracts; i++) {
			cout << "№" << i << "\t" << this->contract_name[i] << "\t" << contract_price[i] << endl;
		}
	}
private:
	int contracts = 0;
	string contract_name[50];
	int contract_price[50];
};