#include "dot.h"
#include <math.h>
#include <iostream>
#include <Windows.h>
using namespace std;

class Triangle
{
public:
	Triangle(Dot a, Dot b, Dot c) {
		d1 = a;
		d2 = b;
		d3 = c;
		//Perimetr = d1.distanceTo(d2) + d1.distanceTo(d3) + d2.distanceTo(d3);

	}
	double Perimeter() {
		Perimetr = d1.distanceTo(d2) + d1.distanceTo(d3) + d2.distanceTo(d3);
		return Perimetr;
	}
	double Squar() {
		double halfper = Perimetr/2;
		Square = halfper * (halfper - d1.distanceTo(d2)) * ((halfper - d1.distanceTo(d3)) * (halfper - d2.distanceTo(d3)));
			return Square;
	}
private:
	double Perimetr;
	double Square;
	Dot d1;
	Dot d2;
	Dot d3;

};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Dot a(3, 2);
	Dot b(5, 6);
	Dot c(7, 1);
	Triangle trg(a, b, c);
	double perim = trg.Perimeter();
	double sqr = trg.Squar();
	cout << "Периметр треугольника: " << perim << endl;
	cout << "Площадь треугольника: " << sqr << endl;
	return 0;
};