#pragma once
#include <iostream>
using namespace std;

class cTimeSpan
{
	private:
		long ngay;
		int gio, phut, giay;
	public:
		cTimeSpan();
		cTimeSpan(long, int, int, int);
		cTimeSpan(const cTimeSpan&);
		long LayNgay();
		int LayGio();
		int LayPhut();
		int LayGiay();
		long TinhTongGio();
		long TinhTongPhut();
		long TinhTongGiay();
		cTimeSpan operator-(int);
		cTimeSpan operator+(int);
		cTimeSpan operator++();
		cTimeSpan operator--();
		cTimeSpan operator+(cTimeSpan&);
		cTimeSpan operator-(cTimeSpan&);
		bool operator==(cTimeSpan&);
		bool operator!=(cTimeSpan&);
		bool operator>=(cTimeSpan&);
		bool operator<=(cTimeSpan&);
		bool operator>(cTimeSpan&);
		bool operator<(cTimeSpan&);
		friend istream& operator>>(istream&, cTimeSpan&);
		friend ostream& operator<<(ostream&, cTimeSpan);
		~cTimeSpan();
};
