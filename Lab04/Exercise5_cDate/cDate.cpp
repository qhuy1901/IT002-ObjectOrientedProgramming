#include <iostream>
#include "cDate.h"
using namespace std;

cDate::cDate()
{
	day = 1;
	month = 1;
	year = 2020;
}

cDate::~cDate()
{
	return;
}

int ktNhuan(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return 1;
	return 0;
}

int DayOfMonth(int m, int y)
{
	if (m == 2)
	{
		if (ktNhuan(y))
			return 29;
		return 28;
	}
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		return 31;
	return 30;
}

bool cDate::DateCheck()
{
	if (day < 0 || day > DayOfMonth(month, year))
		return false;
	if (month < 0 || month > 12)
		return false;
	if (year < 0)
		return false;
	return true;
}

void cDate::Input()
{
	do {
		cout << "Nhap ngay: ";
		cin >> day;
		cout << "Nhap ngay: ";
		cin >> day;
		cout << "Nhap thang: ";
		cin >> month;
		cout << "Nhap nam: ";
		cin >> year;
		if ((*this).DateCheck() == false)
			cout << "Error: Ngay nhap vao khong hop le. Xin nhap lai!" << endl;
	} while ((*this).DateCheck() == false);
	
}

void cDate::Output()
{
	cout << day << "/" << month << "/" << year;
}

istream& operator>>(istream& is, cDate& x)
{
	do {
		cout << "Nhap ngay: ";
		is >> x.day;
		cout << "Nhap thang: ";
		is >> x.month;
		cout << "Nhap nam: ";
		is >> x.year;
		if (x.DateCheck() == false)
			cout << "Error: Ngay nhap vao khong hop le. Xin nhap lai!" << endl;
	} while (x.DateCheck() == false);
	return is;
}

ostream& operator<<(ostream& os, cDate x)
{
	cout << x.day << "/" << x.month << "/" << x.year;
	return os;
}


cDate cDate::operator++()
{
	day++;
	if (day > DayOfMonth(month, year))
	{
		day = 1;
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
	return (*this);
}

cDate cDate::operator--()
{
	if (day == 1)
	{
		month--;
		if (month == 0)
		{
			month = 12;
			year--;
		}
		day = DayOfMonth(month, year);
	}
	else
		day--;
	return (*this);
}

cDate cDate::operator+(int n)
{
	for (int i = 0; i < n; i++)
	{
		++(*this);
	}
	return (*this);
}

cDate cDate::operator-(int n)
{
	for (int i = 0; i < n; i++)
	{
		--(*this);
	}
	return (*this);
}

long long cDate::GetTotalDay()
{
	long long TotalDay = 0;
	for (int i = 1; i < year; i++)
	{
		if (ktNhuan(i) == 1)
			TotalDay += 366;
		else
			TotalDay += 365;
	}

	for (int i = 1; i < month; i++)
		TotalDay += DayOfMonth(i, year);

	TotalDay += day;
	return TotalDay;
}

long cDate::operator-(cDate x)
{
	return this->GetTotalDay() - x.GetTotalDay();
}
