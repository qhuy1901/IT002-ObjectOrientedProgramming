#pragma once
#include "cTuGiac.h"
class cHinhBinhHanh :public cTuGiac
{
	private:
		double CanhDay, CanhBen, ChieuCao;
	public:
		cHinhBinhHanh();
		~cHinhBinhHanh();
		void Nhap();
		void Xuat();
};

