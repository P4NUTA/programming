#include <iostream>

using namespace std;

int main()
{
	char op; // объявление переменных
	cout << "Сделай свой выбор, собери авто свой мечты: ";
	cin >> op; // ввод с клавиатуры op
	switch (op)
	{
	case 'S': // если op == 'S' выводит, также выведет case 'V'
		cout << "Радио играть должно\n";
		cout << "Колеса круглые\n";
	case 'V': // если op == 'V' выводит
		cout << "Кондиционер хочу\n";
		cout << "Радио играть должно\n";
		cout << "Мощный двигатель\n";
	default: 
		break; // прекращение switch
	}

}
