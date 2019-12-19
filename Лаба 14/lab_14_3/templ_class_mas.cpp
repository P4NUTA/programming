#include <iostream>
using namespace std;

class array
{
public:
	array(int size);
	~array() { delete data; cout << "des" << endl; };
	long sum();
	int average_value();
	void show_array();
	int add_value(int);


private:
	int* data;
	int size;
	int index;
};

array::array(int size)
{
	data = new int[size];
	if (data == NULL)
	{
		cerr << "Error memory ---- exit program" << endl;
		exit(1);
	}
	array::size = size;
	array::index = 0;
}
long array::sum()
{
	long sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return(sum);
}
int array::average_value()
{
	long sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return (sum / index);
}
void array::show_array()
{
	for (int i = 0; i < index; i++) cout << data[i] << ' ';
	cout << endl;
}
int array::add_value(int value)
{
	if (index == size) return(-1); // массив полон 
	else
	{
		data[index] = value;
		index++;
		return(0); // успешно 
	}
}


int main()
{
	array numbers(100); // массив из 100 эл-тов 
	int i;
	for (i = 0; i < 50; i++) numbers.add_value(i);
	numbers.show_array();
	cout << "Sum = " << numbers.sum() << endl;
	cout << "Average =  " << numbers.average_value() << endl;
	return 0;
}
