#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include "Student.h"
#include <list>
#include <algorithm>

using namespace std;

class Group
{
private:
	string name;
	list <Student> masSt;
	list <Student>::iterator iter;
public:
	Group(string name);
	Group();
	int getSize();
	void addStudent(Student newStudent);
	void delStudent(Student oldStudent);
	Student findStudent(string, string);
	void GroupSort();
	void GroupOut();
	void setName(string newName);
	string getName();
};