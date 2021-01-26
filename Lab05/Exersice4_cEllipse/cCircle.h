#pragma once
#include "cEllipse.h"
class cCircle:public cEllipse
{
	private:
		float r;
	public:
		cCircle();
		~cCircle();
		void Nhap();
		void Xuat();
};

