#include <iostream>
#include <math.h>

using namespace std;
/*
Прибавление значения k к переменным x y

@param double k
@param double x
@param double y
@return none
*/
void fum_value(double k, double x, double y)
{
	x = x + k;
	y = y + k;
}
/*
Прибавление значения k к переменным x y

@param double k
@param double* x
@param double* y
@return none
*/
void fum_ptr(double k, double* x, double* y)
{
	*x = *x + k;
	*y = *y + k;
}
/*
Прибавление значения k к переменным x y

@param double k
@param double& x
@param double& y
@return none
*/
void fum_ref(double k, double& x, double& y)
{
	x = x + k;
	y = y + k;
}
/*
Вывод переменных 

@param double x
@param double y
@return none
*/
void print(double x, double y)
{
	cout << "x = " << x << "; y = " << y << endl;
}
/*
Нахождение корней квадратного уравнения

@param double a - number
@param double b - number
@param double c - number
@param double& x1 - root 
@param double& x2 - root
@return 
*/
int Myroot(double a, double b, double c, double& x1, double& x2) {
	//ax ^ 2 + bx + c;
	double D;
	D = b * b + 4 * a * c;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / 2 * a;
		x2 = (-b - sqrt(D)) / 2 * a;
		cout << "1" << endl;
		return 1;
	}
	else if (D == 0) {
		x1 = (-b) / 2 * a;
		x2 = x1;
		cout << "0" << endl;
		return 0;
	}
	else {
		cout << "-1" << endl;
		return -1;
	}
}

int main()
{
	//1.1 point
	// Объявление переменных
	double k = 2.5;
	double xv = 10;
	double yv = 10;
	// Вызов функций
	print(xv, yv);
	fum_value(k, xv, yv); // Передача в функцию обычного параметра
	print(xv, yv);
	fum_ptr(k, &xv, &yv); // Передача в функцию параметра указателя
	print(xv, yv);
	fum_ref(k, xv, yv); // Передача в функцию параметра ссылки
	print(xv, yv);

	//1.2 point
	// Объявление переменных
	double a, b, c;
	double x1 = 0, x2 = 0;
	cout << "Write a, b, c : ";
	cin >> a >> b >> c; // ввод значений 
	Myroot(a, b, c, x1, x2);
	cout << "x1 = " << x1 << "\tx2 = " << x2 << endl;

	return 0;
}
