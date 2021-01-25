#pragma once
#include "cSach.h"
class cSachGiaoKhoa : public cSach
{
	private:
		char MonHoc[50];
		int KhoiLop;
	public:
		void Nhap();
		void Xuat();
};

