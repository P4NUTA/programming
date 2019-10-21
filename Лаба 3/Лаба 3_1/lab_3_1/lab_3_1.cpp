#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void privet(string);

int main()
{
	//1.1 point
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "Введите свое имя" << endl;
	cin >> name;
	privet(name);

	//1.2 point
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int x4, y4;
	int x5, y5;


	return 0;
}

void privet(string name)
{
	cout << name << ", " << "здравствуйте!" << endl;
}
