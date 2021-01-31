#pragma once
#include <iostream>
using namespace std;

class cDate
{
	private:
		int day, month, year;
	public:
		cDate();
		~cDate();
		void Input();
		void Output();
		bool DateCheck();
		long long GetTotalDay();
		cDate operator++();
		cDate operator--();
		cDate operator+(int);
		cDate operator-(int);
		long operator-(cDate);
		friend istream& operator>>(istream&, cDate&);
		friend ostream& operator<<(ostream&, cDate);
};


