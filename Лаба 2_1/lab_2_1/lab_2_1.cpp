#include <iostream>

using namespace std;

int main()
{
	char op;
	cout << "Сделай свой выбор, собери авто свой мечты: ";
	cin >> op;
	switch (op)
	{
	case 'S':
		cout << "Радио играть должно\n";
		cout << "Колеса круглые\n";
	case 'V':
		cout << "Кондиционер хочу\n";
		cout << "Радио играть должно\n";
		cout << "Мощный двигатель\n";
	default:
		break;
	}

}
