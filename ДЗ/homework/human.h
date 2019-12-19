#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include<ctime>
using namespace std;
class Human {
public:
	/*Структура
	@param int day - день рождения
	@param int month - месяц рождения
	@param int year - год рождения
	@param string Name - имя
	@param string LastName - фамилия
	@param string SecondName - отчество
	*/
	Human(int day, int month, int year, string Name, string LastName, string SecondName) {
		this->day = day;
		this->month = month;
		this->year = year;
		this->Name = Name;
		this->LastName = LastName;
		this->SecondName = SecondName;
	}
	/*Структура
	@param string Name - имя
	@param string LastName - фамилия
	@param string SecondName - отчество
	*/
	Human(string Name, string LastName, string SecondName) {
		this->day = 0;
		this->month = 0;
		this->year = 0;
		this->Name = Name;
		this->LastName = LastName;
		this->SecondName = SecondName;
	}
	/*Вывод полного имени
	@return full_name - ФИО
	*/
	virtual string get_full_name() {
		ostringstream full_name;
		full_name << this->LastName << " " << this->Name << " " << this->SecondName;
		return full_name.str();
	}
	/*Вывод количества лет,месяцев,дней
	*/
	virtual void year_num() {
		if (year) {
			time_t now;
			struct tm timeinfo;
			time(&now);
			localtime_s(&timeinfo, &now);
			int nowyear = timeinfo.tm_year + 1900;
			int nowmonth = timeinfo.tm_mon;
			int nowday = timeinfo.tm_mday;

			int temp_day = nowday - day;
			int temp_month = nowmonth - month;
			int temp_year = nowyear - year;
			if (temp_day < 0) {
				temp_month--;
				temp_day += 30;
			}
			if (temp_month < 0) {
				temp_year--;
				temp_month += 12;
			}
			cout << "Лет: " << temp_year << endl;
			cout << "Месяцев: " << temp_month << endl;
			cout << "Дней: " << temp_day << endl;
		}
	}
private:
	int year;
	int month;
	int day;
	string Name;
	string LastName;
	string SecondName;
};

class Staff : public Human {
public:
	/*Структура
	@param int day - день рождения
	@param int month - месяц рождения
	@param int year - год рождения
	@param string Name - имя
	@param string LastName - фамилия
	@param string SecondName - отчество
	*/
	Staff(int day, int month, int year, string Name, string LastName, string SecondName) : Human(day, month, year, Name, LastName, SecondName) {}
	/*Структура
	@param string Name - имя
	@param string LastName - фамилия
	@param string SecondName - отчество
	*/
	Staff(string Name, string LastName, string SecondName) : Human(Name, LastName, SecondName) {}
	/*Структура
	@param int day - день рождения
	@param int month - месяц рождения
	@param int year - год рождения
	@param string Name - имя
	@param string LastName - фамилия
	@param string SecondName - отчество
	@param int Cash - зарплата
	@param string post - должность
	*/
	Staff(int day, int month, int year, string Name, string LastName, string SecondName, int Cash, string post) : Human(day, month, year, Name, LastName, SecondName) {
		this->Cash = Cash;
		this->post = post;
	}
	/*Добавление зарплаты*/
	void add_cash() {
		int temp;
		cout << "Введите зарплату для " << Human::get_full_name() << endl;
		cin >> temp;
		this->Cash = temp;
	}
	/*Добавление должности*/
	void add_post() {
		string temp;
		cout << "Введите должность для " << Human::get_full_name() << endl;
		cin >> temp;
		this->post = temp;
	}
	/*Вывод полной информации*/
	void get_full_info() {
		cout << Human::get_full_name() << " " << post << endl;
		cout << "Зарплата: " << Cash << endl;

		Human::year_num();
	}
private:
	int Cash;
	string post;
};