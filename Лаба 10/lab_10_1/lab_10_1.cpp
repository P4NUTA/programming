#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "student.h"
#include "IdCard.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Выделение памяти для объекта Student
	//Student* student02 = new Student;
	string name;
	string last_name;
	int IdStud;
	string StudCtgr;
	// Ввод имени с клавиатуры
	cout << "Name: ";
	getline(std::cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(std::cin, last_name);
	cout << "Student's Category: ";
	getline(std::cin, StudCtgr);
	cout << "Student's ID: ";
	cin >> IdStud;
	
	// Передача параметров конструктору
	IdCard idc(IdStud, StudCtgr);
	Student* student02 = new Student(name, last_name,&idc);
	// Оценки
	int scores[5];
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}
	// Сохранение имени и фамилии в объект класса Students
	student02->set_name(name);
	student02->set_last_name(last_name);
	// Сохраняем промежуточные оценки в объект класса Student
	try {
		student02->set_scores(scores);
	}
	catch (Student::ExScore ex)
	{
		cout << "\nОшибка инициализации " << ex.origin;
		cout << "\nВведенное значение оценки " << ex.iValue <<
			" является недопустимым\n";
	}

	// Считаем средний балл
	float average_score = sum / 5.0;
	// Сохраняем средний балл в объект класса Student
	student02->set_average_score(average_score);
	// Выводим данные по студенту
	cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
	cout << "Category: " << student02->getIdCard().getCategory() << endl;
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	delete student02;
	return 0;
}