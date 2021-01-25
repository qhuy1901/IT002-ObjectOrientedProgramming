#pragma once
#include "cNgheSi.h"
class cCaSi :public cNgheSi
{
	private:
		string NgheDanh;
		string TheLoai;
		int TuoiNghe;
	public:
		void Nhap();
		void Xuat();
		friend istream& operator>>(istream&, cCaSi&);
		friend ostream& operator<<(ostream&, cCaSi);
};

