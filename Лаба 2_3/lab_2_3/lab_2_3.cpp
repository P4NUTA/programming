
#include <iostream>
using namespace std;
int main()
{
	int a, b, temp, buf_a, buf_b; // объявление переменных
	cout << "a = "; cin >> a; // ввод с клавиатуры значения a
	cout << "b = "; cin >> b; // ввод с клавиатуры значения b
	temp = a; // сохранение значения a в переменную temp
	buf_a = a; // сохранение значения a в переменную buf_a
	buf_b = b; //сохранение значения b в переменную buf_b
	while (temp != b) // начало цикла 
	{
		a = temp; // сохранение значения temp в переменную a
		if (a < b) // проверка a меньше b
		{
			temp = a; // сохранение значения a в переменную temp
			a = b; // сохранение значения b в переменную a
			b = temp; // сохранение значения temp в переменную b
		}
		temp = a - b; // temp равен разности a и b 
		a = b; // сохранение значения b в переменную a
	}
	cout << "НОД = " << b << endl; // вывод значения b
	a = buf_a; // сохранение значения buf_a в переменную a 
	b = buf_b; // сохранение значения buf_b в переменную b
	temp = a; // сохранение значения a в переменную temp

	do // начало цикла
	{
		a = temp; // сохранение значения a в переменную temp
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		temp = a - b;
		a = b;
	} while (temp != b);
	cout << "НОД = " << b << endl;

	double x, x1, x2, y;
	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "\tx\tsin(x)\n";
	x = x1;
	while (x <= x2)
	{
		y = sin(x);
		cout << "\t" << x << "\t" << y << endl;
		x = x + 0.01;
	}
}
