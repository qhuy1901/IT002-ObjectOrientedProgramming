#pragma once
#include "cNguoi.h"
class cCongNhan :public cNguoi
{
	private:
		string MaSo;
		long long Luong;
	public:
		void Nhap();
		void Xuat();
		friend istream& operator>>(istream&, cCongNhan&);
		friend ostream& operator<<(ostream&, cCongNhan);
};

