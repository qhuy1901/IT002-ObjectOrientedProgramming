#pragma once
#include <iostream>
using namespace std;

class cDate
{
	protected:
		int day, month, year;
	public:
		cDate();
		cDate(int, int, int);
		~cDate();
		void Input();
		void Output();
		bool DateCheck();
		long long GetTotalDay();
		cDate operator++();
		cDate operator--();
		cDate operator+(int);
		cDate operator-(int);
		long long operator-(cDate);
		friend istream& operator>>(istream&, cDate&);
		friend ostream& operator<<(ostream&, cDate);
};

