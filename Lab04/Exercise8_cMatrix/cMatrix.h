#pragma once
#include<iostream>
#include"cVector.h"
using namespace std;

class cMatrix
{
	private:
		int m, n;
		int a[100][100];
	public:
		cMatrix();
		cMatrix(int, int);
		~cMatrix();
		cMatrix operator=(const cMatrix&);
		cMatrix operator+(const cMatrix&);
		cMatrix operator-(const cMatrix&);
		cMatrix operator*(const cMatrix&);
		cMatrix operator*(int);
		friend istream& operator>>(istream&, cMatrix&);
		friend ostream& operator<<(ostream&, const cMatrix&);
};

