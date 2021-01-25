#pragma once
#include <iostream>
using namespace std;

class cNguoi
{
	private:
		string HoTen;
		string NgaySinh;
		string GioiTinh;
	public:
		cNguoi();
		cNguoi(string, string, string);
		cNguoi(const cNguoi&);
		~cNguoi();
		void Nhap();
		void Xuat();
		friend istream& operator>>(istream&, cNguoi&);
		friend ostream& operator<<(ostream&, cNguoi);
};

