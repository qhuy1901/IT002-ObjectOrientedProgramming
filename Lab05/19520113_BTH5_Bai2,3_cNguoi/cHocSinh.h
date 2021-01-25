#pragma once
#include "cNguoi.h"
class cHocSinh :public cNguoi
{
	private:
		float DiemTB;
		string XepLoai;
	public:
		void Nhap();
		void Xuat();
		void TinhXepLoai();
		friend istream& operator>>(istream&, cHocSinh&);
		friend ostream& operator<<(ostream&, cHocSinh);
};

