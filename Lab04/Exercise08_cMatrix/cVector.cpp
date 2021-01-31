#include<iostream>
#include "cMatrix.h"
using namespace std;

cVector::cVector()
{
	n = 1;
	a[0] = 0;
}

cVector::~cVector()
{
	return;
}

cVector cVector::operator+(const cVector& v)
{
	if (this->n != v.n)
	{
		cout << "\nError: Loi kich thuoc!";
		return *this;
	}
	cVector rs;
	for (int i = 0; i < n; i++)
		rs.a[i] = a[i] + v.a[i];
	return rs;
}

cVector cVector::operator-(const cVector& v)
{
	if (this->n != v.n)
	{
		cout << "\nError: Loi kich thuoc!";
		return *this;
	}
	cVector rs;
	for (int i = 0; i < n; i++)
		rs.a[i] = a[i] - v.a[i];
	return rs;
}

cVector cVector::operator*(const cVector& v)
{
	if (this->n != v.n)
	{
		cout << "\nError: Loi kich thuoc!";
		return *this;
	}
	cVector rs;
	for (int i = 0; i < n; i++)
		rs.a[i] = a[i] * v.a[i];
	return rs;
}

cVector cVector::operator*(int k)
{
	cVector rs;
	for (int i = 0; i < n; i++)
		rs.a[i] = a[i] * k;
	return rs;
}

istream& operator>>(istream& is, cVector& v)
{
	cout << "Nhap kich thuoc vector: ";
	is >> v.n;
	for (int i = 0; i < v.n; i++)
	{
		cout << "v[" << i << "] = ";
		is >> v.a[i];
	}
	return is;
}


ostream& operator<<(ostream& os, cVector v)
{
	for (int i = 0; i < v.n; i++)
		os << v.a[i] << " ";
	return os;
}