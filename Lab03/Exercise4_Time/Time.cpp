#include <iostream>
#include "Time.h"
using namespace std;

cTime::cTime()
{
	gio = 0;
	phut = 0;
	giay = 0;
}

cTime::cTime(int a, int b, int c = 0)
{
	gio = a;
	phut = b;
	giay = c;
}

cTime::cTime(const cTime& Time)
{
	gio = Time.gio;
	phut = Time.phut;
	giay = Time.giay;
}

cTime::~cTime()
{
	return;
}

int cTime::LayGio()
{
	return gio;
}

int cTime::LayPhut()
{
	return phut;
}

int cTime::LayGiay()
{
	return giay;
}

void cTime::Set(int hr, int min, int sec)
{
	gio = hr;
	phut = min;
	giay = sec;
}

void cTime::Nhap()
{
	do{
		cout << "Nhap gio: ";
		cin >> gio;
		if (gio < 0)
			cout << "\nError: Gio khong hop le!" << endl;
	} while (gio < 0);

	do {
		cout << "Nhap phut: ";
		cin >> phut;
		if (phut < 0 || phut > 59)
			cout << "\nError: Phut khong hop le!" << endl;
	} while (phut < 0 || phut > 59);

	do {
		cout << "Nhap giay: ";
		cin >> giay;
		if (phut < 0 || phut > 59)
			cout << "\nError: Giay khong hop le!" << endl;
	} while (phut < 0 || phut > 59);
}

void cTime::Xuat()
{
	cout << gio << ":";
	if (phut < 10)
		cout << "0";
	cout << phut << ":";
	if (giay < 10)
		cout << "0";
	cout << giay;
}

void cTime::Tang1s()
{
	if (giay == 59)
	{
		giay = 0;
		if (phut == 59)
		{
			phut = 0;
			gio++;
		}
		else
			phut++;
	}
	else
		giay++;
}

void cTime::Giam1s()
{
	if (giay == 0)
	{
		giay = 59;
		if (phut == 0)
		{
			phut = 59;
			gio--;
		}
		else
			phut--;
	}
	else
		giay--;
}