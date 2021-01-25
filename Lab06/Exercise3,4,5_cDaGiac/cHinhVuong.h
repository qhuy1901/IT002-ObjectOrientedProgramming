#pragma once
#include "cHinhChuNhat.h"
class cHinhVuong :public cHinhChuNhat
{
	public:
		void Nhap();
		void Xuat();
		void Quay(float);
		void TinhTien(float, float);
		void PhongToThuNho(float);
};

