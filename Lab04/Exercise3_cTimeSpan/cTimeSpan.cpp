#include <iostream>
#include "cTimeSpan.h"
using namespace std;

cTimeSpan::cTimeSpan()
{
	ngay = 0;
	gio = 0;
	phut = 0;
	giay = 0;
}

cTimeSpan::cTimeSpan(long a, int b, int c, int d = 0)
{
	ngay = a;
	gio = b;
	phut = c;
	giay = d;
}

cTimeSpan::cTimeSpan(const cTimeSpan& Time)
{
	ngay = Time.ngay;
	gio = Time.gio;
	phut = Time.phut;
	giay = Time.giay;
}

cTimeSpan::~cTimeSpan()
{
	return;
}

long cTimeSpan::LayNgay()
{
	return ngay;
}

int cTimeSpan::LayGio()
{
	return gio;
}

int cTimeSpan::LayPhut()
{
	return phut;
}

int cTimeSpan::LayGiay()
{
	return giay;
}

long cTimeSpan::TinhTongGio()
{
	return ngay * 24 + gio;
}

long cTimeSpan::TinhTongPhut()
{
	return ngay * 24 * 60 + gio * 60 + phut;
}

long cTimeSpan::TinhTongGiay()
{
	return ngay * 24 * 60 * 60 + gio * 60 * 60 + phut * 60 + giay;
}

istream& operator>>(istream& is, cTimeSpan& x)
{
	do {
		cout << "Nhap ngay: ";
		is >> x.ngay;
		if (x.ngay < 0)
			cout << "\nError: Ngay khong hop le!" << endl;
	} while (x.ngay < 0);

	do {
		cout << "Nhap gio: ";
		is >> x.gio;
		if (x.gio < 0 || x.gio > 23)
			cout << "\nError: Gio khong hop le!" << endl;
	} while (x.gio < 0 || x.gio > 24);

	do {
		cout << "Nhap phut: ";
		is >> x.phut;
		if (x.phut < 0 || x.phut > 59)
			cout << "\nError: Phut khong hop le!" << endl;
	} while (x.phut < 0 || x.phut > 59);

	do {
		cout << "Nhap giay: ";
		cin >> x.giay;
		if (x.phut < 0 || x.phut > 59)
			cout << "\nError: Giay khong hop le!" << endl;
	} while (x.phut < 0 || x.phut > 59);
	return is;
}

ostream& operator<<(ostream& os, cTimeSpan x)
{
	cout << x.ngay << "d " << x.gio << ":";
	if (x.phut < 10)
		cout << "0";
	cout << x.phut << ":";
	if (x.giay < 10)
		cout << "0";
	cout << x.giay;
	return os;
}

cTimeSpan cTimeSpan::operator++()
{
	if (giay == 59)
	{
		giay = 0;
		if (phut == 59)
		{
			phut = 0;
			gio++;
			if (gio == 24)
			{
				gio = 0;
				ngay++;
			}
		}
		else
			phut++;
	}
	else
		giay++;
	return (*this);
}

cTimeSpan cTimeSpan::operator--()
{
	if (giay == 0)
	{
		giay = 59;
		if (phut == 0)
		{
			phut = 59;
			gio--;
			if (gio < 0)
			{
				gio = 23;
				ngay--;
				if (ngay < 0)
					cout << "Error: Khong the tru khoang thoi gian." << endl;
			}
		}
		else
			phut--;
	}
	else
		giay--;
	return (*this);
}

cTimeSpan cTimeSpan::operator+(cTimeSpan& x)
{
	cTimeSpan res;
	res.ngay = (this->TinhTongGio() + x.TinhTongGio()) / 24;
	res.gio = (this->TinhTongGio() + x.TinhTongGio()) % 24;
	res.phut = (this->TinhTongPhut() + x.TinhTongPhut()) % 60;
	res.giay = (this->TinhTongGiay() + x.TinhTongGiay()) % 60;
	return res;
}

cTimeSpan cTimeSpan::operator-(cTimeSpan& x)
{
	cTimeSpan res;
	if (this->TinhTongGiay() - x.TinhTongGiay() < 0)
	{
		cout << "Error: Khong the tru khoang thoi gian.";
		return res;
	}
	res.ngay = (this->TinhTongGio() - x.TinhTongGio()) / 24;
	res.gio = (this->TinhTongGio() - x.TinhTongGio()) % 24;
	res.phut = (this->TinhTongPhut() - x.TinhTongPhut()) % 60;
	res.giay = (this->TinhTongGiay() - x.TinhTongGiay()) % 60;
	return res;
}

bool cTimeSpan::operator== (cTimeSpan& x)
{
	if (this->TinhTongGiay() == x.TinhTongGiay())
		return true;
	return false;
}

bool cTimeSpan::operator!= (cTimeSpan& x)
{
	if (this->TinhTongGiay() != x.TinhTongGiay())
		return true;
	return false;
}

bool cTimeSpan::operator>= (cTimeSpan& x)
{
	if (this->TinhTongGiay() >= x.TinhTongGiay())
		return true;
	return false;
}

bool cTimeSpan::operator<= (cTimeSpan& x)
{
	if (this->TinhTongGiay() <= x.TinhTongGiay())
		return true;
	return false;
}

bool cTimeSpan::operator>(cTimeSpan& x)
{
	if (this->TinhTongGiay() > x.TinhTongGiay())
		return true;
	return false;
}

bool cTimeSpan::operator<(cTimeSpan& x)
{
	if (this->TinhTongGiay() < x.TinhTongGiay())
		return true;
	return false;
}

cTimeSpan cTimeSpan::operator+(int n)
{
	for (int i = 0; i < n; i++)
		++(*this);
	return (*this);
}

cTimeSpan cTimeSpan::operator-(int n)
{
	for (int i = 0; i < n; i++)
		--(*this);
	return (*this);
}