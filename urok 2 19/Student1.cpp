#include "Student1.h"
#include <iostream>
using namespace std;
Student::Student() 
{
	name = nullptr;
	marks = nullptr;
	markcount = 0;
}
Student::Student(const char* StudentName, const int studentMarksCount)
{
	Name(StudentName);
	marks = new int[studentMarksCount];
	for (int i = 0; i < studentMarksCount;i++)
	{
		marks[i] = 0;
	}
	markcount = studentMarksCount;
}
Student::Student(const char* StudentName, const int studentMarksCount, const int* studentMarks)
{
	Name(StudentName);
	marks = new int[studentMarksCount];
	for (int i = 0; i < studentMarksCount; i++)
	{
		marks[i] = studentMarks[i];
	}
	markcount = studentMarksCount;
}
Student::~Student()
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (marks != nullptr)
	{
		delete[] marks;
	}
	cout << "Отработал деструктор" << endl;
	system("pause");
}
void Student::Name(const char* StudentName) 
{
	int nameLenght = strlen(StudentName);
	name = new char[nameLenght + 1];
	for (int i = 0; i <= nameLenght; i++)
	{
		name[i] = StudentName[i];
	}
}
void Student::setName(const char* StudentName) 
{
	delete[] name;
	setName(StudentName);
}
void Student::setMark(int mark, int index) 
{
	if (index < 0 || index >= markcount)
		return;
	if (mark < 1 || mark>12)
		mark;
	marks[index] = mark;
}
double Student::getAver()
{
	double sum = 0;
	for (int i = 0; i < markcount; i++)
	{
		sum += marks[i];
	}
	return sum / markcount;
}


int Date::getDay() { return m_day; }
void Date::setDay(int day) { m_day = day; }

int Date::getmounth() {return m_mounth;}
void Date::setmounth(int day) { m_mounth = day; }

int Date::getyear() { return m_year; }
void Date::setyear(int day) { m_year = day; }