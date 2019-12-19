#include <iostream>
#include <ctime>
#include "human.h"
#include "Client.h"
#include <Windows.h>
#pragma warning(disable: 4996)
using namespace std;
int main()
{
	// Русский язык
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Объявление классов
	Human person1(4, 10, 2001, "Павел", "Ефимов", "Леонидович");
	Staff person2(26, 10, 2001, "Алексей", "Малышев", "Андреевич");
	person2.add_cash();
	person2.add_post();
	Client person3("Владимир", "Гололобов", "Владимирович");
	// Добавление контрактов клиента
	person3.add_contact("Покупка",100);
	person3.add_contact("Продажа",250);
	person3.add_contact("Аренда",10);
	person3.add_contact("Задача",50);
	// Вывод информации
	cout << person1.get_full_name() << endl;
	person1.year_num();
	person2.get_full_info();
	person3.get_full_info();
	return 0;
}