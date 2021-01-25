#pragma once
#include "cTuGiac.h"
class cHinhThang :public cTuGiac
{
	private:
		double CanhDayDai, CanhDayNgan, ChieuCao;
	public:
		cHinhThang();
		~cHinhThang();
		void Nhap();
		void Xuat();
};

