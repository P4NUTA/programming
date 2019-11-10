#include <iostream>

using namespace std;

int main()
{

	// 1.1 point 
	int x, y; //объявление переменных 
	cout << "Write x and y: ";
	cin >> x >> y; // ввод с клавиатуры x и y
	// вычисление попадания в мишень
	if (x * x + y * y < 9 && y>0) { 
		// попали внутрь
		cout << "inside" << endl;
	}
	else if (x * x + y * y > 9 || y < 0) {
		// не попали
		cout << "Outside" << endl;
	}
	else {
		// попали на границу
		cout << "on side" << endl;
	}

	// 1.2 point
	int year; // объявление переменных
	cout << "Write year: ";
	cin >> year; // ввод с клавиатуры year
	// вычисление високосного года
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

}
