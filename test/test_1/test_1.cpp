/* Создать структуру employee

	int ID;
	int Value;
	ввести данные и вывести
*/
#include <iostream>
#include <Windows.h>
using namespace std;

struct employee {
public:
	/*
	Конструктор

	@param int a - employee's ID
	@param int b - employee's value
	*/
	employee(int a, int b) {
		ID = a;
		value = b;
	}
	/*
	Конструктор для заполнения значений нулями
	*/
	employee() {
		ID = 0;
		value = 0;
	}
	/*
	Деструктор
	Выводит значения переменных
	*/
	~employee() {
		show();
	}
	/*
	Вывод данных о сотруднике

	@return none
	*/
	void show() {
		cout << "ID: " << ID << " Value: " << value << endl;
	}
private:
	int ID; // employee's ID
	float value; // employee's value
};
int main()
{
	// Для русских символов
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Объявление структур
	employee em1(1, 20);
	employee em2;
	// Объявление переменных
	int a, b;
	cout << "Введите данные о сотрудниках" << endl;
	cout << "третий: ";
	cin >> a >> b;
	employee em3(a, b);
	return 0;
}
