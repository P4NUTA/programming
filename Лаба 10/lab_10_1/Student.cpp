/* student.cpp */
#include <string>
#include <fstream>
#include "student.h"

/* Конструктор Student

@param string name - student's name
@param string last_name - student's lastname
@return none
*/
Student::Student(string name, string last_name, IdCard* id)
{
	Student::set_name(name);
	Student::set_last_name(last_name);
	Student::setIdCard(id);
}
void Student::setIdCard(IdCard* c)
{
	iCard = c;
}
IdCard Student::getIdCard()
{
	return *iCard;
}

/*
Установка имени студента

@param string student_name - student's name
@return none
*/
void Student::set_name(std::string student_name)
{
	Student::name = student_name;
}
/*
Получение имени студента

@return string name - student's name
*/
std::string Student::get_name()
{
	return Student::name;
}
/*
Установка фамилии студента

@param string student_last_name - student's lastname
@return none
*/
void Student::set_last_name(std::string student_last_name)
{
	Student::last_name = student_last_name;
}
/*
Получение фамилии студента

@return string last_name - student's last name
*/
std::string Student::get_last_name()
{
	return Student::last_name;
}
/*
Установка промежуточных оценок

@param int[] student_scores - student's scores
@return none
*/
void Student::set_scores(int scores[])
{
	for (int i = 0; i < 5; ++i) {
		if (scores[i] > 5)
			throw Student::ExScore("в функции set_scores()", scores[i]);
		Student::scores[i] = scores[i];
	}
}

/*
Установка среднего балла

@param double ball
@return none
*/
void Student::set_average_score(double ball)
{
	Student::average_score = ball;
}
/*
Получение среднего балла

@return double average_score - student's average score
*/
double Student::get_average_score()
{
	return Student::average_score;
}
/*
Запись данных о студенте в файл

@return none
*/
void Student::save()
{
	ofstream fout("students.txt", ios::app);
	fout << Student::get_name() << " "
		<< Student::get_last_name() << " ";
	for (int i = 0; i < 5; ++i) {
		fout << Student::scores[i] << " ";
	}
	fout << endl;
	fout.close();
}
/*
Деструктор класса Student

@return none
*/
Student::~Student()
{
	Student::save();
}
Student::ExScore::ExScore(string Or, int sc)
{
	Student::ExScore::origin = Or; //строка с именем виновника ошибки
	Student::ExScore::iValue = sc; //сохраненное неправильное значение
};
