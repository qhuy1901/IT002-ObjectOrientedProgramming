#pragma once
#include "cDaGiac.h"
class cTuGiac :public cDaGiac
{
	private:
		 const int SoDinh = 4;
	public:
		void Nhap();
		void Xuat();
		void Quay(float);
		void TinhTien(float, float);
		void PhongToThuNho(float);
};

