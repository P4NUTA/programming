#include <iostream>
using namespace std;
/*Сортировка массива по возрастанию значения
@param T arr[] - массив
@param int size - размер массива
*/
template<class T>
void sorting(T arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		T x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}
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

int main()
{
	// Объявление массивов
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, word";
	// Объявление размеров массивов
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	// Вызов функий сортировки и вывода значений
	sorting(arr, k1);
	show(arr, k1);
	sorting(arrd, k2);
	show(arrd, k2);
	sorting(arrc, k3);
	show(arrc, k3);
	return 0;
}