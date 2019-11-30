#include <iostream>
#include <Windows.h>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	const float MTF;
public:
	// конструктор по умолчанию
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	// конструктор с двумя параметрами
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (fltfeet - feet); // остаток - это дюймы
	}
	void getdist()
	{
		cout << "\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}
	Distance operator+ (Distance) const;
	Distance operator- (Distance) const;
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Distance dist1, dist2, dist3, dist4;
	//dist1.getdist();
	//dist2.getdist();
	//dist3 = dist1 + dist2;
	//dist4 = dist1 + dist2 + dist3;
	//cout << "\ndist1 = ";
	//dist1.showdist();
	//cout << "\ndist2 = ";
	//dist2.showdist();
	//cout << "\ndist3 = ";
	//dist3.showdist();
	//cout << "\ndist4 = ";
	//dist4.showdist();

	//dist3 = dist1 - dist2;
	//cout << "\ndist1 = ";
	//dist1.showdist();
	//cout << "\ndist2 = ";
	//dist2.showdist();
	//cout << "\ndist3 = ";
	//dist3.showdist();
	//cout << "\ndist4 = ";
	//dist4.showdist();

	Distance dist5 = 2.35F;
	Distance dist2(2, 5);
	float mtrs;
	mtrs = static_cast<float>(dist5);
	mtrs = dist2;

	cout << mtrs;

	return 0;
}

Distance Distance::operator+ (Distance d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}
Distance Distance::operator- (Distance d2) const
{
	int f = feet - d2.feet;
	float i = inches - d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

//Distance Distance::operatorfloat() const
//{
//	float fracfeet = inches / 12;
//	fracfeet += static_cast<float>(feet);
//	return fracfeet / MTF;
//}