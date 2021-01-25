#pragma once
#include "cDaGiac.h"
class cNguGiac :public cDaGiac
{
	private:
		const int SoDinh = 5;
	public:
		void Nhap();
		void Xuat();
		void Quay(float);
		void TinhTien(float, float);
		void PhongToThuNho(float);
};

