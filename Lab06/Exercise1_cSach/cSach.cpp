#include "cSach.h"

cSach::cSach()
{
	strcpy_s(TenSach, "Empty");
	strcpy_s(NhaXuatBan, "Empty");
	NamXuatBan = SoTrang = GiaBan = 0;
}

cSach::~cSach()
{
	return;
}

void cSach::Nhap()
{
	cout << "\nNhap ten sach: ";
	gets_s(TenSach);
	cout << "Nhap ten nha xuat ban: ";
	cin.getline(NhaXuatBan,100);
	cout << "Nhap nam xuat ban: ";
	cin >> NamXuatBan;
	cout << "Nhap so trang: ";
	cin >> SoTrang;
	cout << "Nhap gia ban: ";
	cin >> GiaBan;
}

void cSach::Xuat()
{
	cout << "\nTen sach: " << TenSach;
	cout << "\nNha xuat ban: " << NhaXuatBan;
	cout << "\nNam xuat ban: " << NamXuatBan;
	cout << "\nSo trang: " << SoTrang;
	cout << "\nGia ban: " << GiaBan;
}
