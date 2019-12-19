#include <iostream>

using namespace std;

template<class T, class T1> class array
{
public:
	array(int size);
	T1 sum();
	T average_value();
	void show_array();
	int add_value(T);
private:
	T* data;
	int size;
	int index;
};
template<class T, class T1> T array<T, T1>::average_value()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return (sum / index);
}
template<class T, class T1> array<T, T1>::array(int size)
{
	data = new T[size];
	if (data == NULL)
	{
		cerr << "Error memory ---- exit program" << endl;
		exit(1);
	}
	array::size = size;
	array::index = 0;
}
template<class T, class T1> T1 array<T, T1>::sum()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return(sum);
}
template<class T, class T1> T array<T, T1>::average_value()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return (sum / index);
}
template<class T, class T1> void array<T, T1>::show_array()
{
	for (int i = 0; i < index; i++) cout << data[i] << ' ';
	cout << endl;
}
template<class T, class T1> int array<T, T1>::add_value(T value)
{
	if (index == size)
		return(-1);
	else
	{
		data[index] = value;
		index++;
		return(0);
	}
}
int main()
{
	array<int, long> numbers(100);
	array<float, float> values(200);
	int i;
	for (i = 0; i < 50; i++) numbers.add_value(i);
	numbers.show_array();
	cout << "Sum = " << numbers.sum() << endl;
	cout << "Average = " << numbers.average_value() << endl;
	for (i = 0; i < 100; i++) values.add_value(i * 100);
	values.show_array();
	cout << "Sum = " << values.sum() << endl;
	cout << "Average = " << values.average_value() << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
