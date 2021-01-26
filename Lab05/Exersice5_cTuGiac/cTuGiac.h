#pragma once
#include <iostream>
#include "cDiem.h"
using namespace std;

class cTuGiac
{
	protected:
		cDiem ToaDo[4];
	public:
		cTuGiac();
		~cTuGiac();
		void Nhap();
		void Xuat();
};

