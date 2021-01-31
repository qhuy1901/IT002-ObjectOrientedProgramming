#pragma once
#include <iostream>
using namespace std;

class cTime
{
	private:
		int gio, phut, giay;
	public:
		cTime();
		cTime(int, int, int);
		cTime(const cTime&);
		void Nhap();
		void Xuat();
		void Set(int, int, int);
		int LayGio();
		int LayPhut();
		int LayGiay();
		void Tang1s();
		void Giam1s();
		long TinhTongPhut();
		long TinhTongGiay();
		cTime operator++();
		cTime operator--();
		cTime operator+(int);
		cTime operator-(int);
		cTime operator-(cTime&);
		friend istream& operator>>(istream&, cTime&);
		friend ostream& operator<<(ostream&, cTime);
		~cTime();
};
