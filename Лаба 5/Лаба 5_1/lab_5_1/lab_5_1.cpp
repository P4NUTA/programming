#include <iostream>

using namespace std;

void random_num(int Arr[], int N) {
	int i;
	for (i = 0; i < N; i++) {
		Arr[i] = rand() % 15;
	}
}

void write_num(int Arr[], int N) {
	int i;
	for (i = 0; i < N; i++) {
		cout << "mas[" << i << "]= ";
		cin >> Arr[i];
	}
}
void show_array(const int Arr[], const int N)
{
	for (int i = 0; i < N; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}
int main()
{
	//1 point
	int n;
	cout << "Write elements of array: ";
	cin >> n;
	int* mas = new int[n];
	int i;
	cout << "1. Write \n2. Random" << endl;
	cin >> i;
	switch (i)
	{
	case 1: write_num(mas, n); break;
	case 2: random_num(mas, n); break;
	default: cout << "\rWrong";
	}
	show_array(mas, n);

	int s = 0, ns = 0, ps = 0, nechs = 0, chets = 0;
	int temp_max = -999, temp_min = 999, ind_max, ind_min;
	for (i = 0; i < n; i++)
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
	int min, max, proiz = 1;
	if (ind_max < ind_min) {
		min = ind_max;
		max = ind_min;
	}
	else {
		min = ind_min;
		max = ind_max;
	}
	for (i = min; i <= max; i++) {
		proiz *= mas[i];
	}
	cout << "s = " << s << "\tsr = " << s / n << endl;
	cout << "ns = " << ns << endl;
	cout << "ps = " << ps << endl;
	cout << "nechs = " << nechs << endl;
	cout << "chets = " << chets << endl;
	cout << "Max = " << temp_max << "\tindex = " << ind_max << endl;
	cout << "Min = " << temp_min << "\tindex = " << ind_min << endl;
	cout << "proiz = " << proiz << endl;
}
