#pragma once
#include<iostream>
#include "cMatrix.h"
using namespace std;

class cVector
{
	private:
		int n;
		int a[100];
	public:
		cVector();
		~cVector();
		cVector operator+(const cVector&);
		cVector operator-(const cVector&);
		cVector operator*(const cVector&);
		cVector operator*(int);
		friend istream& operator>>(istream& is, cVector&);
		friend ostream& operator<<(ostream& os, cVector);
};