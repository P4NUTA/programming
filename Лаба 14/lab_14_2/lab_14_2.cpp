#include <iostream>
#include <Windows.h>

using namespace std;

/*Вывод значений массива
@param T arr[] - массив
@param int size - размер массива
*/
template<class T>
void show(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ";";
	}
	cout << endl;
}
/*Поиск среднего арифметического массива
@param T arr[] - массив
@param int size - размер массива
*/
template<class T>
void arif(T arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	sum /= size;
	cout << "Среднее арифметическое: " << sum << endl;
}

int main()
{
	// Добавление кириллицы
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Объявление массивов
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, word";
	// Объявление размеров массивов
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	// Вызов функий арифметического и вывода значений
	arif(arr, k1);
	show(arr, k1);
	arif(arrd, k2);
	show(arrd, k2);
	arif(arrc, k3);
	show(arrc, k3);
	return 0;
}