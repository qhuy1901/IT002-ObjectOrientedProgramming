#include "cMatrix.h"
#include "cVector.h"
#include<iostream>
using namespace std;

cMatrix::cMatrix()
{
	n = m = 2;
	//Tạo ma trận đơn vị cấp 2
	a[0][0] = a[1][0] = 1;
	a[0][1] = a[1][1] = 0;
}

cMatrix::cMatrix(int row, int column)
{
	// Empty Matrix
	m = row;
	n = column;
	a[0][0] = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			a[i][j] = 0;
		}
	}
}

cMatrix::~cMatrix()
{
}

istream& operator>>(istream& is, cMatrix& x)
{
	cout << "Nhap so dong: ";
	is >> x.m;
	cout << "Nhap so cot: ";
	is >> x.n;
	for (int i = 0; i < x.m; i++)
	{
		for (int j = 0; j < x.n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			is >> x.a[i][j];
		}
	}
	return is;
}

ostream& operator<<(ostream& os, const cMatrix& x)
{
	for (int i = 0; i < x.m; i++)
	{
		for (int j = 0; j < x.n; j++)
			os << x.a[i][j] << " ";
		os << endl;
	}
	return os;
}
		

cMatrix cMatrix::operator=(const cMatrix& x)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			this->a[i][j] = x.a[i][j];
	}
	return *this;
}

cMatrix cMatrix::operator+(const cMatrix& x)
{
	if (m != x.m || n != x.n)
	{
		cout << "Error: Loi kich thuoc." << endl;
		return *this;
	}
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] += x.a[i][j];
	}
	return *this;
}

cMatrix cMatrix::operator-(const cMatrix& x)
{
	if (m != x.m || n != x.n)
	{
		cout << "Error: Loi kich thuoc." << endl;
		return *this;
	}
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] -= x.a[i][j];
	}
	return *this;
}

cMatrix cMatrix::operator*(const cMatrix& x)
{
	// A cấp mxn * B cấp nxp = C cấp mxp
	if (n != x.m)
	{
		cout << "Error: Loi kich thuoc." << endl;
		return *this;
	}

	n = x.n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int S = 0;
			for (int k = 0; k < x.m; k++)
			{
				S += a[i][k] * x.a[k][j];
			}
			a[i][j] = S;
		}
	}
	return *this;
}

cMatrix cMatrix::operator*(int k)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] *= k;
	}
	return *this;
}
