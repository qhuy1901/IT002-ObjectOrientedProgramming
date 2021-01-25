#pragma once
#include "cHinhChuNhat.h"
class cHinhVuong : public cHinhChuNhat
{
	private:
		double Canh;
	public:
		cHinhVuong();
		~cHinhVuong();
		void Nhap();
		void Xuat();
};

