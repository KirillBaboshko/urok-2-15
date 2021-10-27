#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <cassert>
#include "Student1.h"
using namespace std;
class Fraction
{
private:
	int m_numerator;
	int m_dernumerator;
public:
	
	Fraction(int numerator=0, int dernumerator = 1)
	{
		do {
				cout << "На ноль делить нельзя!!!.";
				cin >> dernumerator;
		} while (dernumerator == 0);
		assert(dernumerator != 0);
		m_numerator = numerator;
		m_dernumerator = dernumerator;
	}
	int getnumerator() { return m_numerator; }
	int getdernumerator() { return m_dernumerator; }
	void add(int n, int m, int n1, int m1)
	{
		m_numerator = (n1 * m) + (n * m1);
		m_dernumerator = (m * m1);
	}
	void sub(int n, int m, int n1, int m1)
	{
		m_numerator = (n * m1) - (n1 * m);
		m_dernumerator = (m * m1);
	}
	void milt(int n, int m, int n1, int m1)
	{
		m_numerator = n1 * n;
		m_dernumerator = m * m1;
	}
	void div(int n, int m, int n1, int m1)
	{
		m_numerator = n * m1;
		m_dernumerator = n1 * m;
	}
	void print()
	{
		std::cout << m_numerator << "/" << m_dernumerator << std::endl;
	}
	~Fraction() 
	{
		 m_numerator;
		 m_dernumerator;
	}
};
int main()
{
	srand(time(NULL));
	setlocale(0, "rus");

	/*cout << "Успеваемость студента." << endl << endl;
	Student stud("Петров А.И", 3, new int[3]{ 10,10,9 });

	cout << "Средний Балл " << stud.getName()<< ":" << fixed<<setprecision(2) << stud.getAver() << endl;*/
	const int size = 2; 
	Student* students = new Student[size]
	{
		{"Студент 1", 3, new int[3]{10,10,9}},
		{ "Студент 1", 3,new int[3]{8,10,8}}
	};
	double sum = 0;
	for (Student* stud = students; stud < students + size; stud++) 
	{
		double aver = stud->getAver();
		cout << "Средний Балл " << stud->getName() << ":" << fixed << setprecision(2) << aver << endl;
		sum += aver;
	}
	cout << endl;
	cout << "Средний Балл "  << ":" << fixed << setprecision(2) << sum/size << endl;
	delete[]students;
	_getch();

	//Date d;
	//d.setDay(25);
	//cout << d.getDay();
	//Fraction(0, 0);


	return 0;
}
