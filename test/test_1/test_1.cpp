#include <iostream>
#include <Windows.h>
using namespace std;

struct employee {
public:
	employee(int a, int b) {
		ID = a;
		value = b;
	}
	employee() {
		ID = 0;
		value = 0;
	}
	void show() {
		cout << "ID: " << ID << " Value: " << value << endl;
	}
private:
	int ID;
	float value;
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	employee em1(1, 20);
	employee em2;
	int a, b;
	cout << "Введите данные о сотрудниках" << endl;
	//cout << "первый: ";
	//cin >> em1.ID >> em1.value;	
	cout << "третий: ";
	cin >> a >> b;
	employee em3(a,b);
	em1.show();
	em2.show();
	em3.show();
	return 0;
}
