#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

class employee {
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
	/*
	Запись данных сотрудников в файл

	@param ofstream& lout - file to write
	@return none
	*/
	void filewrite(ofstream& lout) {
		lout << "ID: " << ID << " Value: " << value << endl;
	}
	/*
	Изменение данных сотрудника
	
	@param none
	@return none
	*/
	void change() {
		int a;
		float b;
		int mychoose;
		cout << "1. Изменить ID" << endl;
		cout << "2. Изменить зарплату" << endl;
		cout << "3. Изменить все данные" << endl;
		cin >> mychoose;
		switch (mychoose) {
		case 1:
			cout << "ID: ";
			cin >> a;
			ID = a;
			break;
		case 2:
			cout << "Value: ";
			cin >> b;
			value = b;
			break;
		case 3:
			cout << "ID: ";
			cin >> a;
			cout << "Value: ";
			cin >> b;
			ID = a;
			value = b;
			break;
		default:
			cout << "Ошибка" << endl;
		}

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
	employee em1(0, 10);
	employee em2(1, 20);
	// Объявление переменных
	int a;
	float b;
	// Ввод данных сотрудника при создании
	cout << "Введите данные о сотрудниках" << endl;
	cout << "третий: " << endl;
	cout << "ID: ";
	cin >> a;
	cout << "Value: ";
	cin >> b;
	employee em3(a, b);
	// Ввод данных сотрудника при изменении
	em1.change();
	// Открыть файл для записи данных сотрудников
	// Открытие файла
	ofstream file_("text.txt");
	// Проверка открылся ли файл
	if (!file_) {
		cout << "error" << endl;
	}
	// Запись файлов
	em1.filewrite(file_);
	em2.filewrite(file_);
	em3.filewrite(file_);
	file_.close();

	return 0;
}
