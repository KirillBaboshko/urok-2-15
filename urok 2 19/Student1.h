#pragma once
class Student
{

	char* name;
	int markcount;
	int* marks;
	void Name(const char* StudentName);
public:
	Student();
	Student(const char* StudentName, const int studentMarksCount);
	Student(const char* StudentName, const int studentMarksCount, const int* studentMarks);
	~Student();
	const char* getName() 
	{
		return name;
	}
	int getMark(int index) 
	{
		return marks[index];
	}
	void setName(const char* StudentName);
	void setMark(int mark, int index);
	double getAver();
};
class Date
{
	int m_day;
	int m_mounth;
	int m_year;
public:
	int getDay();
	void setDay(int day);
	int getmounth();
	void setmounth(int mounth);
	int getyear();
	void setyear(int year);
};

