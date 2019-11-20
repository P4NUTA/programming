#include <iostream>
#include <string>


using namespace std;


class Student
{
public:
	/*Установка имени студента

	@param string student_name - student's name
	@return none
	*/
	void set_name(string student_name)
	{
		name = student_name;
	}
	/* Получение имени студента

	@param none
	@return string name - student's name 
	*/
	string get_name()
	{
		return name;
	}
	/* Установка фамилии студента

	@param string student_last_name - student's lastname
	@return none
	*/
	void set_last_name(string student_last_name)
	{
		last_name = student_last_name;
	}
	/* Получение фамилии студента

	@return string last_name - student's last name
	*/
	string get_last_name()
	{
		return last_name;
	}
	/* Установка промежуточных оценок

	@param int[] student_scores - student's scores
	@return none
	*/
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i) {
			scores[i] = student_scores[i];
		}
	}
	/* Установка среднего балла

	@param double ball
	@return none
	*/
	void set_average_score(double ball)
	{
		average_score = ball;
	}
	/* Получение среднего балла

	@return double average_score - student's average score 
	*/
	double get_average_score()
	{
		return average_score;
	}
private:
	int scores[5]; // Промежуточные оценки
	double average_score; // Средний балл
	string name; // Имя
	string last_name; // Фамилия
};

int main()
{

	// Создание объекта класса Student
	Student student01;
	string name;
	string last_name;
	int scores[5];
	// Ввод имени с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование оценок
		sum += scores[i];
	}
	// Сохранение имени и фамилии в объект класса Student
	student01.set_name(name);
	student01.set_last_name(last_name);
	// Сохранение промежуточных оценок в объект класса Student
	student01.set_scores(scores);
	double average_score = sum / 5.0;
	// Сохранение среднего балла в объект класса Student
	student01.set_average_score(average_score);
	// Вывод данных на экран
	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;

	return 0;
};
