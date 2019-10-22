#include <iostream>
#include <string>
#include <windows.h>
#include <math.h>
using namespace std;

void privet(string);

int main()
{
	////1.1 point
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "Введите свое имя" << endl;
	cin >> name;
	privet(name);

	//1.2 point
	int x1 = 0, y1 = 0;
	int x2 = 2, y2 = 2;
	int x3 = 5, y3 = 4;
	int x4 = 3, y4 = 2;
	int x5 = 2, y5 = 1;
	double a, b, c, d, e, f, S;
	double u;
	double p1, p2, p3;
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
	d = sqrt(pow(x4 - x5, 2) + pow(y4 - y5, 2));
	e = sqrt(pow(x5 - x1, 2) + pow(y5 - y1, 2));
	f = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
	u = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

	p1 = a + e + f;
	p2 = f + u + d;
	p3 = u + b + c;

	S = sqrt(p1 * (p1 - a) * (p1 - e) * (p1 - f)) + sqrt(p2 * (p2 - f) * (p2 - u) * (p2 - d)) + sqrt(p3 * (p3 - u) * (p3 - b) * (p3 - c));
	cout << "S = " << S << endl;

	return 0;
}

void privet(string name)
{
	cout << name << ", " << "здравствуйте!" << endl;
}
