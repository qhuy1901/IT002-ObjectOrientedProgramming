#pragma once
#include<iostream>
using namespace std;

class MYINT
{
	private:
		int n;
	public:
		MYINT();
		MYINT(int);
		~MYINT();
		int operator+(int);
		int operator-(int);
		int operator*(int);
		int operator/(int);
		int operator+(MYINT);
		int operator-(MYINT);
		int operator*(MYINT);
		int operator/(MYINT);
		MYINT operator++(int);
		MYINT operator--(int);
		MYINT operator+=(MYINT);
		MYINT operator-=(MYINT);
		MYINT operator*=(MYINT);
		MYINT operator/=(MYINT);
		bool operator==(MYINT);
		bool operator!=(MYINT);
		bool operator<(MYINT);
		bool operator>(MYINT);
		bool operator<=(MYINT);
		bool operator>=(MYINT);
		friend istream& operator>>(istream&, MYINT&);
		friend ostream& operator<<(ostream&, MYINT);
};

