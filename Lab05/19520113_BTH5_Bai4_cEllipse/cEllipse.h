#pragma once
#include "cDiem.h"
#include <iostream>
using namespace std;

class cEllipse
{
	protected:
		cDiem center;
		float long_r;
		float short_r;
	public:
		cEllipse();
		~cEllipse();
		void Nhap();
		void Xuat();
};

