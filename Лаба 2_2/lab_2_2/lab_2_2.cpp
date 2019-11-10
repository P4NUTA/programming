#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, x1, x2, y; //объявление переменных
	cout << "x1 = "; cin >> x1; // ввод с клавиатуры x1
	cout << "x2 = "; cin >> x2; // ввод с клавиатуры x2
	cout << "\tx\tsin(x)\n";
	x = x1; // сохранение x1 в x
	// начало цикла
	do
	{
		y = sin(x); // вычисление y 
		cout << "\t" << x << "\t" << y << endl; // вывод x и y
		x = x + 0.01; // прибавление к x 0.01 
	} while (x <= x2); // проверка на продолжение цикла
	return 0;
}
