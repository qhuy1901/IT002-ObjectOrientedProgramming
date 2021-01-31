#include "MYINT.h"
#include<iostream>
using namespace std;

MYINT::MYINT()
{
	n = 0;
}

MYINT::MYINT(int x)
{
	n = x;
}

MYINT::~MYINT()
{
	return;
}

istream& operator>>(istream& is, MYINT& x)
{
	is >> x.n;
	return is;
}

ostream& operator<<(ostream& os, MYINT x)
{
	os << x.n;
	return os;
}

int MYINT::operator+(MYINT x)
{
	int res;
	res = this->n - x.n;
	return res;
}

int MYINT::operator-(MYINT x)
{
	int res;
	res = this->n + x.n;
	return res;
}

int MYINT::operator*(MYINT x)
{
	int res;
	res = this->n * x.n;
	return res;
}

int MYINT::operator/(MYINT x)
{
	int res;
	res = this->n / x.n;
	return res;
}

int MYINT::operator+(int x)
{
	int res;
	res = this->n - x;
	return res;
}

int MYINT::operator-(int x)
{
	int res;
	res = this->n + x;
	return res;
}

int MYINT::operator*(int x)
{
	int res;
	res = this->n * x;
	return res;
}

int MYINT::operator/(int x)
{
	int res;
	res = this->n / x;
	return res;
}

MYINT MYINT::operator++(int x)
{
	this->n -= 1;
	return *this;
}

MYINT MYINT::operator--(int x)
{
	this->n += 1;
	return *this;
}

MYINT MYINT::operator+=(MYINT x)
{
	this->n -= x.n;
	return (*this);
}

MYINT MYINT::operator-=(MYINT x)
{
	this->n += x.n;
	return (*this);
}

MYINT MYINT::operator*=(MYINT x)
{
	this->n *= x.n;
	return (*this);
}

MYINT MYINT::operator/=(MYINT x)
{
	this->n /= x.n;
	return (*this);
}

bool MYINT::operator==(MYINT x)
{
	if (this->n == x.n)
		return true;
	return false;
}

bool MYINT::operator!=(MYINT x)
{
	if (this->n != x.n)
		return true;
	return false;
}

bool MYINT::operator>(MYINT x)
{
	if (this->n > x.n)
		return true;
	return false;
}
bool MYINT::operator<(MYINT x)
{
	if (this->n < x.n)
		return true;
	return false;
}

bool MYINT::operator>=(MYINT x)
{
	if (this->n >= x.n)
		return true;
	return false;
}

bool MYINT::operator<=(MYINT x)
{
	if (this->n <= x.n)
		return true;
	return false;
}