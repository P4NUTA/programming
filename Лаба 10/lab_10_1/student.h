/* student.h */
#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <fstream>
#include "IdCard.h"


using namespace std;

class Student
{
public:
	/* Конструктор Student

	@param string name - student's name
	@param string last_name - student's lastname
	@return none
	*/
	Student(string name, string last_name, IdCard* id);
	/*
	Установка имени студента

	@param string student_name - student's name
	@return none
	*/
	void set_name(string);
	/*
	Получение имени студента

	@return string name - student's name
	*/
	string get_name();
	/*
	Установка фамилии студента

	@param string student_last_name - student's lastname
	@return none
	*/
	void set_last_name(string);
	/*
	Получение фамилии студента

	@return string last_name - student's last name
	*/
	string get_last_name();
	/*
	Установка промежуточных оценок

	@param int[] student_scores - student's scores
	@return none
	*/
	void set_scores(int[]);
	/*
	Установка среднего балла

	@param double ball
	@return none
	*/
	void set_average_score(double);
	/*
	Получение среднего балла

	@return double average_score - student's average score
	*/
	double get_average_score();
	/*
	 Запись данных о студенте в файл

	 @return none
	*/
	void save();
	/*
	 Деструктор класса Student

	 @return none
	*/
	~Student();
	class ExScore //класс исключений
	{
	public:
		string origin; //для имени функции
		int iValue; //для хранения ошибочного значения
		ExScore(string Or, int sc);
	};
	void setIdCard(IdCard* c);
	IdCard getIdCard();

private:
	// Промежуточные оценки
	int scores[5];
	// Средний балл
	double average_score;
	// Имя
	string name;
	// Фамилия
	string last_name;
	IdCard* iCard;

};