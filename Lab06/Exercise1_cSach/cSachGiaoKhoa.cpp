#include "cSachGiaoKhoa.h"

void cSachGiaoKhoa::Nhap()
{
	cSach::Nhap();
	cin.ignore();
	cout << "Nhap mon hoc: ";
	gets_s(MonHoc);
	cout << "Nhap khoi lop: ";
	cin >> KhoiLop;
	cin.ignore();
}

void cSachGiaoKhoa::Xuat()
{
	cSach::Xuat();
	cout << "\nMon hoc: " << MonHoc;
	cout << "\nKhoi lop: " << KhoiLop << endl;
}
