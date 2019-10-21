#include <iostream>
#include <time.h>

using namespace std;
int main()
{
	srand(time(NULL));
	// 2.3 point
	//int k, m, s=0;
	//cout << "Write numbers k and m : ";
	//cin >> k >> m;
	//for (int i = 1; i <= 100; i++)
	//{
	//	if ((i > k) && (i < m))
	//		continue;
	//	s += i;
	//}
	//cout << "S = " << s << endl;

	// 2.4 point
	int x, y, R, points = 0, i;
	for (i = 0; i < 5; i++) {
		cout << "Write x and y: ";
		cin >> x >> y;
		R = sqrt(pow((x), 2) + pow((y), 2));
		if (R <= 1) {
			cout << "10 points" << endl;
			points += 10;
		}
		else if (R <= 2) {
			cout << "5 points" << endl;
			points += 5;
		}
		else {
			cout << "You missed" << endl;
		}
	}
	cout << "Points : " << points << endl;
	return 0;
}
