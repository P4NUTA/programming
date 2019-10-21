#include <iostream>

using namespace std;

int main()
{

	// 1.1 point 
	int x, y;
	cout << "Write x and y: ";
	cin >> x >> y;

	if (x * x + y * y < 9 && y>0) {
		cout << "inside" << endl;
	}
	else if (x * x + y * y > 9 || y < 0) {
		cout << "Outside" << endl;
	}
	else {
		cout << "on side" << endl;
	}

	// 1.2 point
	int year;
	cout << "Write year: ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

}
