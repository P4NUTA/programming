#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Item
{
private:
	string title; // Название 
	double price; // Цена
public:
	/* Ввод данных
	@param string title - Название
	@param double price - цена
	*/
	virtual void getdata()
	{
		cout << "\nВведите заголовок : ";
		cin >> title;
		cout << "Введите цену : ";
		cin >> price;
	}
	/* Вывод данных
	*/
	virtual void putdata()
	{
		cout << "\nЗаголовок: " << title;
		cout << "\nЦена:" << price;
	}
};
class Paperbook : public Item
{
private:
	int pages; // Страницы
public:
	/*
	Ввод данных
	@rapam int pages - страницы
	*/
	void getdata()
	{
		Item::getdata();
		cout << "Введите число страниц : ";
		cin >> pages;
	}
	/*Вывод данных*/
	void putdata()
	{
		Item::putdata();
		cout << "\nСтраниц:" << pages;
	}
};
class AudioBook : public Item
{
private:
	double time; // Время
public:
	/*Ввод данных
	@param double time - время
	*/
	void getdata()
	{
		Item::getdata();
		cout << "Введите время звучания : ";
		cin >> time;
	}
	/*Вывод данных
	*/
	void putdata()
	{
		Item::putdata();
		cout << "\nВремя звучания : " << time;
	}
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Item* pubarr[100];
	int n = 0;
	char choice;
	do
	{
		cout << "\nВводить данные для книги или звукового файла(b / a) ? ";
		cin >> choice;
		if (choice == 'b')
			pubarr[n] = new Paperbook;
		else // Сильно
			pubarr[n] = new AudioBook;
		pubarr[n++/*Я этот постфикс ненавижу*/]->getdata();
		cout << "Продолжать((у / n) ? ";
		cin >> choice;
	} while (choice == 'y');
	for (int j = 0; j < n; j++) //цикл по всем объектам
		pubarr[j]->putdata(); //вывести данные о публикации
	cout << endl;
	return 0;
}
