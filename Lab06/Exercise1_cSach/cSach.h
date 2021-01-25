#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class cSach
{
	protected:
		char TenSach[100];
		char NhaXuatBan[100];
		int NamXuatBan;
		int SoTrang;
		int GiaBan;
	public:
		cSach();
		~cSach();
		virtual void Nhap();
		virtual void Xuat();
};

