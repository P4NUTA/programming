
#include <iostream>
using namespace std;
int main()
{
	int a, b, temp, buf_a, buf_b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	temp = a;
	buf_a = a;
	buf_b = b;
	//while (temp != b)
	//{
	//	a = temp;
	//	if (a < b)
	//	{
	//		temp = a;
	//		a = b;
	//		b = temp;
	//	}
	//	temp = a - b;
	//	a = b;
	//}
	//cout << "НОД = " << b << endl;
	//a = buf_a;
	//b = buf_b;
	//temp = a;

	do
	{
		a = temp;
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
