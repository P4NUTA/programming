#include <iostream>

using namespace std;
int main()
{
	// 2.3 point
	int k, m, s = 0; // объявление переменных
	cout << "Write numbers k and m : "; 
	cin >> k >> m; // ввод значения переменных k и m
	for (int i = 1; i <= 100; i++) // начало цикла
	{
		if ((i > k) && (i < m)) // если k<i<m 
			continue; // переход к след. итерации
		s += i; // суммирование
	}
	cout << "S = " << s << endl; // вывод суммы

	// 2.4 point
	int x, y, points = 0, i; // объявление переменных
	double R;
	cout << "You have 5 shots, good luck!" << endl;
	for (i = 0; i < 5; i++) { // начало цикла
		cout << "Write x and y: ";
		cin >> x >> y; // ввод значений x и y 
		R = sqrt(pow((x), 2) + pow((y), 2)); // вычисление значения R
		if (R <= 1) { //проверка попадания <=1
			cout << "10 points" << endl;
			points += 10; // прибавление очков 10
		}
		else if (R <= 2) { // проверка попадания <=2
			cout << "5 points" << endl;
			points += 5; // прибавление очков 5 
		}
		else {
			cout << "You missed" << endl;
		}
	}
	cout << "Points : " << points << endl; // вывод значения points 
	if (points <= 20) { // проверка кол-ва очков
		cout << "Your skill is low" << endl;
	}
	else if (points > 20 && points < 40) {
		cout << "Your skill is mediun" << endl;
	}
	else {
		cout << "You master!" << endl;
	}
	return 0;
}
