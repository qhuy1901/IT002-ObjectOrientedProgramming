#include "INTERGER.h"
#include<iostream>
using namespace std;

INTERGER::INTERGER()
{
	n = 0;
}

INTERGER::INTERGER(int x)
{
	n = x;
}

INTERGER::~INTERGER()
{
	return;
}

istream& operator>>(istream& is, INTERGER& x)
{
	is >> x.n;
	return is;
}

ostream& operator<<(ostream& os, INTERGER x)
{
	os << x.n;
	return os;
}

int INTERGER::operator+(INTERGER x)
{
	int res;
	res = this->n + x.n;
	return res;
}

int INTERGER::operator-(INTERGER x)
{
	int res;
	res = this->n - x.n;
	return res;
}

int INTERGER::operator*(INTERGER x)
{
	int res;
	res = this->n * x.n;
	return res;
}

int INTERGER::operator/(INTERGER x)
{
	int res;
	res = this->n / x.n;
	return res;
}

int INTERGER::operator+(int x)
{
	int res;
	res = this->n + x;
	return res;
}

int INTERGER::operator-(int x)
{
	int res;
	res = this->n - x;
	return res;
}

int INTERGER::operator*(int x)
{
	int res;
	res = this->n * x;
	return res;
}

int INTERGER::operator/(int x)
{
	int res;
	res = this->n / x;
	return res;
}

INTERGER INTERGER::operator++(int x)
{
	this->n += 1;
	return *this;
}

INTERGER INTERGER::operator--(int x)
{
	this->n -= 1;
	return *this;
}

INTERGER INTERGER::operator+=(INTERGER x)
{
	this->n += x.n;
	return (*this);
}

INTERGER INTERGER::operator-=(INTERGER x)
{
	this->n -= x.n;
	return (*this);
}

INTERGER INTERGER::operator*=(INTERGER x)
{
	this->n *= x.n;
	return (*this);
}

INTERGER INTERGER::operator/=(INTERGER x)
{
	this->n /= x.n;
	return (*this);
}

bool INTERGER::operator==(INTERGER x)
{
	if (this->n == x.n)
		return true;
	return false;
}

bool INTERGER::operator!=(INTERGER x)
{
	if (this->n != x.n)
		return true;
	return false;
}

bool INTERGER::operator>(INTERGER x)
{
	if (this->n > x.n)
		return true;
	return false;
}
bool INTERGER::operator<(INTERGER x)
{
	if (this->n < x.n)
		return true;
	return false;
}

bool INTERGER::operator>=(INTERGER x)
{
	if (this->n >= x.n)
		return true;
	return false;
}

bool INTERGER::operator<=(INTERGER x)
{
	if (this->n <= x.n)
		return true;
	return false;
}

