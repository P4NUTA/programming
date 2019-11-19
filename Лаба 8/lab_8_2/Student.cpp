/* student.cpp */
#include <string>
#include "student.h"
// Установка имени студента
void Student::set_name(std::string student_name)
{
	Student::name = student_name;
}
// Получение имени студента
std::string Student::get_name()
{
	return Student::name;
}
// Установка фамилии студента
void Student::set_last_name(std::string student_last_name)
{
	Student::last_name = student_last_name;
}
// Получение фамилии студента
std::string Student::get_last_name()
{
	return Student::last_name;
}
// Установкапромежуточныхоценок
void Student::set_scores(int scores[])
{
	for (int i = 0; i < 5; ++i) {
		Student::scores[i] = scores[i];
	}
}
// Установка среднего балла
void Student::set_average_score(double ball)
{
	Student::average_score = ball;
}
// Получение среднего балла
double Student::get_average_score()
{
	return Student::average_score;
}