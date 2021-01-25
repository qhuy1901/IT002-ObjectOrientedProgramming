#pragma once
#include "cTuGiac.h"

class cHinhChuNhat:public cTuGiac
{
	private:
		double ChieuDai, ChieuRong;
	public:
		cHinhChuNhat();
		~cHinhChuNhat();
		void Nhap();
		void Xuat();
};

