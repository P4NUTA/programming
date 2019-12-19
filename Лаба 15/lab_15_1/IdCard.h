#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>

using namespace std;

 class IdCard
 {
 private:
	 int number;
	 string category;

 public:
	 IdCard();
	 IdCard(int);
	 IdCard(int, string);

    void setNumber(int newNumber);
	int getNumber();
	void setCategory(string cat);
	string getCategory();

};