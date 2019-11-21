#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>

using namespace std;

class Triangle
{
public:
	/*
	Конструктор класса

	@param int side1 - first side of triangle
	@param int side2 - second side of triangle
	@param int side3 - third side of triangle
	@return none
	*/
	Triangle(int side1, int side2, int side3)
	{
		// Провера ошибки
		if (side1 > side2 + side3 || side2 > side1 + side3 || side3 > side1 + side2)
			throw ExScore(" Triangle ", side1, side2, side3);

		s1 = side1;
		s2 = side2;
		s3 = side3;
	}
	/*
	Вычисление площади треугольника

	@return S - triangle's square
	*/
	double Square()
	{
		double summ = s1 / 1.0 + s2 / 1.0 + s3 / 1.0;
		double p = summ / 2.0;
		double S = sqrt(p * (p - s1) * (p - s2) * (p - s3));

		return S;
	}
	// Класс исключений
	class ExScore
	{
	public:
		string origin; // Имя ошибки
		int s1, s2, s3; // Ошибочные значения
		/*
		Конструктор класса ExScore

		@param string Or - name's error
		@param int side1 - first side of triangle
		@param int side2 - second side of triangle
		@param int side3 - third side of triangle
		*/
		ExScore(string Or, int side1, int side2, int side3)
		{
			origin = Or;
			s1 = side1;
			s2 = side2;
			s3 = side3;
		}
	};

private:
	/*
	Стороны треугольника
	*/
	int s1;
	int s2;
	int s3;
};

int main(void)
{
	// Установка русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Объявление переменных и ввод значений
	int a, b, c;
	cout << "Введите значения сторон треугольника" << endl;
	cin >> a >> b >> c;
	// Создание треугольника
	try
	{
		Triangle trg(a, b, c);
		cout << "Площадь треугольника: " << trg.Square();
	}
	catch (Triangle::ExScore ex)
	{
		cout << "Ошибка в" << ex.origin << endl;
		cout << "Неверные значения " << ex.s1 <<
			", " << ex.s2 << ", " << ex.s3 << endl;
	}

	return 0;
}