#include <iostream>

using namespace std;

int main()
{
	//1 point
	const int n = 10;
	int mas[n];
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}
	int s = 0, ns = 0, ps = 0, nechs = 0, chets = 0;
	int temp_max = -999, temp_min = 999, ind_max, ind_min;
	for (int i = 0; i < n; i++)
	{
		if (temp_max < mas[i]) {
			temp_max = mas[i];
			ind_max = i;
		}
		if (temp_min > mas[i]) {
			temp_min = mas[i];
			ind_min = i;
		}
		s += mas[i];
		if (mas[i] >= 0) {
			ps += mas[i];
		}
		else if (mas[i] < 0) {
			ns += mas[i];
		}
		if (i % 2 == 1) {
			nechs += mas[i];
		}
		else if (i % 2 == 0) {
			chets += mas[i];
		}
	}

	cout << "s = " << s << "\tsr = " << s / n << endl;
	cout << "ns = " << ns << endl;
	cout << "ps = " << ps << endl;
	cout << "nechs = " << nechs << endl;
	cout << "chets = " << chets << endl;
	cout << "Max = " << temp_max << "\tindex = " << ind_max << endl;
	cout << "Min = " << temp_min << "\tindex = " << ind_min << endl;
}
