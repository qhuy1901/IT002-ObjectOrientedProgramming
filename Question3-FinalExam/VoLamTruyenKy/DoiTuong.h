#pragma once
#include <iostream>
using namespace std;

class DoiTuong
{
	protected:
		int CapDo, SatThuong, NguHanh;
	public:
		int LaySatThuong();
		int SatThuongNguHanh(DoiTuong*);
		virtual void Nhap();
		virtual void TinhSatThuong();
};

