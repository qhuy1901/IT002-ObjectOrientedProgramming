#pragma once
#include "cNguoi.h"
class cNgheSi :public cNguoi
{
	private:
		string LinhVuc;
		int SoTacPham;
	public:
		void Nhap();
		void Xuat();
		friend istream& operator>>(istream&, cNgheSi&);
		friend ostream& operator<<(ostream&, cNgheSi);
};

