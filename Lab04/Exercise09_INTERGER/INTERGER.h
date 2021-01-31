#pragma once
#include<iostream>
using namespace std;

class INTERGER
{
	private:
		int n;
	public:
		INTERGER();
		INTERGER(int);
		~INTERGER();
		int operator+(int);
		int operator-(int);
		int operator*(int);
		int operator/(int);
		int operator+(INTERGER);
		int operator-(INTERGER);
		int operator*(INTERGER);
		int operator/(INTERGER);
		INTERGER operator++(int);
		INTERGER operator--(int);
		INTERGER operator+=(INTERGER);
		INTERGER operator-=(INTERGER); 
		INTERGER operator*=(INTERGER);
		INTERGER operator/=(INTERGER);
		bool operator==(INTERGER);
		bool operator!=(INTERGER);
		bool operator<(INTERGER);
		bool operator>(INTERGER);
		bool operator<=(INTERGER);
		bool operator>=(INTERGER);
		friend istream& operator>>(istream&, INTERGER&);
		friend ostream& operator<<(ostream&, INTERGER);
};

