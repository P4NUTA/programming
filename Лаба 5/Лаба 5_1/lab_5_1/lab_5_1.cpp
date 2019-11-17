#include <iostream>

using namespace std;
/*
Присвоение рандомных значений массиву

@param Arr[] - array
@param N - number of elements
@return none
*/
void random_num(int Arr[], int N) {
	int i;
	for (i = 0; i < N; i++) {
		Arr[i] = rand() % 15;
	}
}
/*
Присвоение значений массиву лично

@param Arr[] - array 
@param N - number of elements
@return none
*/
void write_num(int Arr[], int N) {
	int i;
	for (i = 0; i < N; i++) {
		cout << "mas[" << i << "]= ";
		cin >> Arr[i];
	}
}
/*
Вывод значений массива

@param Arr[] - array
@param N - number of elements
@return none
*/
void show_array(const int Arr[], const int N)
{
	for (int i = 0; i < N; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}
int main()
{
	//1 point
	// Объявление переменных 
	int n;
	cout << "Write elements of array: ";
	cin >> n; // Ввод значения в переменную n
	int* mas = new int[n]; // Создание динамического массива
	int i;
	// Выбор заполнения массива
	cout << "1. Write \n2. Random" << endl;
	cin >> i; 
	switch (i)
	{
	case 1: write_num(mas, n); break;
	case 2: random_num(mas, n); break;
	default: cout << "\rWrong";
	}
	// Вывов функции показа значений массива
	show_array(mas, n);
	// Объявление переменных
	int s = 0, ns = 0, ps = 0, nechs = 0, chets = 0;
	int temp_max = -999, temp_min = 999, ind_max, ind_min;
	// Начало цикла
	for (i = 0; i < n; i++)
	{
		// Поиск максимального элемента массива
		if (temp_max < mas[i]) {
			temp_max = mas[i];
			ind_max = i;
		}
		// Поиск минимального значения массива
		if (temp_min > mas[i]) {
			temp_min = mas[i];
			ind_min = i;
		}
		// Сумма всех элементов массива
		s += mas[i];
		// Сумма положительных значений массива
		if (mas[i] >= 0) {
			ps += mas[i];
		} // Сумма отрицательных значений массива
		else if (mas[i] < 0) { 
			ns += mas[i];
		} // Сумма нечетных элементов массива
		if (i % 2 == 1) {
			nechs += mas[i];
		} // Сумма четных элементов массива
		else if (i % 2 == 0) {
			chets += mas[i];
		}
	} 
	// Поиск произведения между минимальным и максимальным значением массива
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
	// Вывод результатов
	cout << "s = " << s << "\tsr = " << s / n << endl;
	cout << "ns = " << ns << endl;
	cout << "ps = " << ps << endl;
	cout << "nechs = " << nechs << endl;
	cout << "chets = " << chets << endl;
	cout << "Max = " << temp_max << "\tindex = " << ind_max << endl;
	cout << "Min = " << temp_min << "\tindex = " << ind_min << endl;
	cout << "proiz = " << proiz << endl;
}
