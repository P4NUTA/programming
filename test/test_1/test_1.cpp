#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
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
	void filewrite(ofstream& lout) {
		lout << "ID: " << ID << " Value: " << value << endl;
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
	employee em1;
	employee em2(1,20);
	// Объявление переменных
	int a, b;
	cout << "Введите данные о сотрудниках" << endl;
	cout << "третий: ";
	cin >> a >> b;
	employee em3(a, b);
	// Открыть файл для записи данных сотрудников
	// Открытие файла
	ofstream file_("text.txt");
	if (!file_) {
		cout << "error" << endl;
	}
	em1.filewrite(file_);
	em2.filewrite(file_);
	em3.filewrite(file_);
	file_.close();

	return 0;
}
