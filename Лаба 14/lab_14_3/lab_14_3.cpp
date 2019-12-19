#include <iostream>

using namespace std;

template<class T, class T1> class Array
{
public:
	Array(int size);
	T1 sum();
	T average_value();
	void show_Array();
	int add_value(T);
private:
	T* data;
	int size;
	int index;
};
/*Среднее арифметическое
@return T1 - среднее арифметическое массива
*/
template<class T, class T1> T Array<T, T1>::average_value()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return (sum / index);
}
/*Конструктор массива
@param int size - размер массива
*/
template<class T, class T1> Array<T, T1>::Array(int size)
{
	data = new T[size];
	if (data == NULL)
	{
		cerr << "Error memory ---- exit program" << endl;
		exit(1);
	}
	Array::size = size;
	Array::index = 0;
}
/*Сумма массива
@param - none
@return T1 sum - сумма всех элементов массива
*/
template<class T, class T1> T1 Array<T, T1>::sum()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return(sum);
}
/*Вывод массива на экран
*/
template<class T, class T1> void Array<T, T1>::show_Array()
{
	for (int i = 0; i < index; i++) cout << data[i] << ' ';
	cout << endl;
}
/*Ввод значений в массив
@param T value - значение
*/
template<class T, class T1> int Array<T, T1>::add_value(T value)
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
	// Объявление массивов 
	Array<int, long> numbers(100);
	Array<float, float> values(200);
	int i;
	// Работа с первым массивом
	for (i = 0; i < 50; i++) numbers.add_value(i);
	numbers.show_Array();
	cout << "Sum = " << numbers.sum() << endl;
	cout << "Average = " << numbers.average_value() << endl;
	// Работа со вторым массивом
	for (i = 0; i < 100; i++) values.add_value(i * 100);
	values.show_Array();
	cout << "Sum = " << values.sum() << endl;
	cout << "Average = " << values.average_value() << endl;
}