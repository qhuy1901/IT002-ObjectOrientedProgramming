#include<iostream>
#include<string>
#include"cString.h"
using namespace std;

cString::cString()
{
	str = "Empty string!";
}

cString::~cString()
{
	return;
}

istream& operator>>(istream& is, cString& s)
{
	getline(is, s.str);
	return is;
}

ostream& operator<<(ostream& os, cString s)
{
	os << s.str;
	return os;
}

cString cString::operator+(const cString& x)
{
	cString rs;
	rs.str = str;
	rs.str += x.str;
	return rs;
}

cString cString::operator=(const cString& x)
{
	str = x.str;
	return *this;
}

bool cString::operator==(const cString& x)
{
	if (str == x.str)
		return true;
	return false;
}

bool cString::operator<(const cString& x)
{
	if (str.length() < x.str.length())
		return true;
	return false;
}

bool cString::operator>(const cString& x)
{
	if (str.length() > x.str.length())
		return true;
	return false;
}

bool cString::operator<=(const cString& x)
{
	if (str.length() <= x.str.length())
		return true;
	return false;
}

bool cString::operator>=(const cString& x)
{
	if (str.length() >= x.str.length())
		return true;
	return false;
}

bool cString::operator!=(const cString& x)
{
	if (str.length() != x.str.length())
		return true;
	return false;
}
