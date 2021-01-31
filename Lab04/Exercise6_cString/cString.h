#pragma once
#include<iostream>
#include<string>
using namespace std;

class cString
{
private:
	string str;
public:
	cString();
	~cString();
	cString operator+(const cString&);
	cString operator=(const cString&);
	bool operator==(const cString&);
	bool operator>(const cString&);
	bool operator<(const cString&);
	bool operator>=(const cString&);
	bool operator<=(const cString&);
	bool operator!=(const cString&);
	friend istream& operator>>(istream&, cString&);
	friend ostream& operator<<(ostream&, cString);
};
