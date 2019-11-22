#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
/*
Вывод рандомного значения

@param none
@return int ran - random value(1,100);
*/
int random() {
	int ran = 0;
	ran = 1 + rand() % 100;
	return ran;
}
/*
Выбор числа
@param int ran - random number
@return int score - player's scores
*/
int choose(int ran) {
	int score = 10;
	int num;
	int game = 1;
	while (game) {
		cout << "Введите число: ";
		cin >> num;
		if (num == ran) {
			cout << "Отлично! Вы отгадали число!" << endl;
			game = 0;
			break;
			return score;
		}
		else if (num > ran) {
			cout << "Ваше число меньше" << endl;
			score--;
		}
		else if (num < ran) {
			cout << "Ваше число больше" << endl;
			score--;
		}
		if (!score) {
			cout << "Вы проиграли" << endl;
			game = 0;
			return score;
		}
	}
}
/*
Выводит квалификацию игрока

@param int score - player's score
@return none
*/
void reward(int score) {
	if (score == 10) {
		cout << "Вы мастер!" << endl;
	}
	else if (score < 10 && score >= 5) {
		cout << "Вы молодец" << endl;
	}
	else if (score < 5) {
		cout << "Нормально" << endl;
	}
}
int main()
{
	// Служебные обозначения
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	// Объявление переменных
	int number, ran_number = 0, score, mychoose;
Point:
	cout << "Мое число между 1 и 100" << endl;
	cout << "Вы можете его отгадать?" << endl;
	cout << "Попробуйте, напечатать свою первую догадку." << endl;
	// Ввод рандомного числа
	ran_number = random();
	cout << ran_number << " = Рандомное число" << endl;
	// Вывод сама игра + вывод очков
	score = choose(ran_number);
	// Отображение очков
	reward(score);
	// Выбор продолжения
	cout << "Хотите еще раз сыграть?" << endl;
	cout << "1. да" << endl;
	cout << "2. нет" << endl;
	cin >> mychoose;
	if (mychoose == 1)
		goto Point;

	return 0;
}
