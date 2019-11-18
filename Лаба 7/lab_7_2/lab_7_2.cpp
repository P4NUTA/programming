#include <iostream>
#include <windows.h>
using namespace std;
struct Distance
{
	int feet;
	double inches;

};
/*
Складывает величины структур

@param struct Distance d1 - First struct
@param struct Distance d2 - Second struct
@return struct Distance d
*/
Distance AddDist(const Distance& d1, const Distance& d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}
/*
Устанавливает значения для структуры

@param none
@return struct Distance d
*/
Distance InputDist()
{
	Distance d;
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "Введите число дюймов: ";
	cin >> d.inches;
	return d;
}
/*
	Выводит значения на экран

	@param none
	@return none
	*/
void ShowDist(const Distance& d)
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}
int main()
{
	// Установка русского языка
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// Объявление структур
	Distance d1 = InputDist();
	Distance d2 = { 1, 6.25 };
	Distance d3 = AddDist(d1, d2);
	// Вывод структур
	ShowDist(d1);
	ShowDist(d2);
	ShowDist(d3);

	return 0;
};
