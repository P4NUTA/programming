#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;
/*
Вывод значений элементов массива

@param const int Arr[] - array
@param const int N - number of elements
@return none
*/
void show_array(const int Arr[], const int N);
/*
Проверка элементов больше/меньше

@param const int a 
@param const int b 
@return a>b
*/
bool from_min(const int a, const int b);
/*
Проверка элементов больше/меньше

@param const int a
@param const int b
@return a>b
*/
bool from_max(const int a, const int b);
/*
Сортировка пузырьком

@param int Arr[] - array
@param int N - number of elements
@param bool (int,int) compare - comparing values
@return none
*/
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));
/*
Ввод случайных значений в массив

@param int Arr[] - array
@param int N - number of elements
@return none
*/
void random_num(int Arr[], int N);
/*
Ввод заданых значений в массив

@param int Arr[] - array
@param int N - number of elements
@return none
*/
void write_num(int Arr[], int N);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	//2 point
	// Объявление переменных
	bool (*from_f[2])(int, int) = { from_min,from_max };
	cout << "Введите размер массива" << endl;
	int n;
	cin >> n;
	int* myArray = new int[n];
	const int N = 10;
	int my_choose = 0;
	int A[N] = { 9,8,7,6,1,2,3,5,4,9 };
	// Выбор типа ввода значений
	cout << "1. Ввести значения самому\n";
	cout << "2. Рандомно\n";
	cin >> my_choose;

	switch (my_choose)
	{
	case 1: write_num(myArray, n); break;
	case 2: random_num(myArray, n); break;
	default: cout << "\rНеизвестная операция ";
	}
	// Выбор типа сортировки
	cout << "1. Сортировать по возрастанию\n";
	cout << "2. Сортировать по убыванию\n";
	cin >> my_choose;
	cout << "Исходные данные: ";
	// Вызов функций
	show_array(myArray, n);

	bubble_sort(myArray, n, (from_f[my_choose - 1]));
	// Альтернативная сортировка
	//switch (my_choose)
	//{
	//case 1: bubble_sort(A, N, from_min); break;
	//case 2: bubble_sort(A, N, from_max); break;
	//default: cout << "\rНеизвестная операция ";
	//}

	show_array(myArray, n);
	delete[] myArray;
	return 0;
}

bool from_min(const int a, const int b)
{
	return a > b;
}
bool from_max(const int a, const int b)
{
	return a < b;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
		}
	}
}

void show_array(const int Arr[], const int N)
{
	for (int i = 0; i < N; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}

void random_num(int Arr[], int N) {
	int i;
	for (i = 0; i < N; i++) {
		Arr[i] = rand() % 15;
	}
}

void write_num(int Arr[], int N) {
	int i;
	for (i = 0; i < N; i++) {
		cout << "Напишите число " << i << ": ";
		cin >> Arr[i];
	}
}