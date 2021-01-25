#pragma once
#include "cDaGiac.h"
class cTamGiac :public cDaGiac
{
	private:
		const int SoDinh = 3;
	public:
		void Nhap();
		void Xuat();
		void Quay(float);
		void TinhTien(float, float);
		void PhongToThuNho(float);
};

