#include <iostream>
#include <vector>
#include <Windows.h>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Оценкистудента
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
	// Добавление студента 
	student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	// Вывод информации о студенте
	cout << stud->get_full_name() << endl;
	cout << "Средний балл : " << stud->get_average_score() << endl;
	// Добавление учителя
	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич",
		teacher_work_time);
	// Вывод информации об учителе
	cout << tch->get_full_name() << endl;
	cout << "Количество часов: " << tch->get_work_time() << endl;
	return 0;
}