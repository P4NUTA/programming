#include <iostream>
#include <vector>
#include <Windows.h>
#include <string>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Оценки студента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	human* hmn = new human("Иванов", "Иван", "Иванович");
	hmn->get_full_info();
	// Добавление студента 
	student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	// Вывод информации о студенте
	stud->get_full_info();
	// Добавление учителя
	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	// Вывод информации об учителе
	tch->get_full_info();
	// Перевыполнение зло!
	delete stud;
	delete tch;
	delete hmn;
	return 0;
}