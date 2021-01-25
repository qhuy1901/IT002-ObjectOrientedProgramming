#pragma once
#include "cNguoi.h"
class cSinhVien :public cNguoi
{
	private:
		float DiemTichLuy;
	public:
		void Nhap();
		void Xuat();
		friend istream& operator>>(istream&, cSinhVien&);
		friend ostream& operator<<(ostream&, cSinhVien);
};

