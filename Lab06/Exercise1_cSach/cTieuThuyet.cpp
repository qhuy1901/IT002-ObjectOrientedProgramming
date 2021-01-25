#include "cTieuThuyet.h"

void cTieuThuyet::Nhap()
{
	cSach::Nhap();
	cin.ignore();
	cout << "Nhap the loai cua tieu thuyet: ";
	gets_s(TheLoai);
}

void cTieuThuyet::Xuat()
{
	cSach::Xuat();
	cout << "\nThe loai: " << TheLoai << endl;
}
