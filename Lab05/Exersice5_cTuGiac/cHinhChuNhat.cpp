#include "cHinhChuNhat.h"

cHinhChuNhat::cHinhChuNhat()
{
	ChieuDai = ChieuRong = 0;
}

cHinhChuNhat::~cHinhChuNhat()
{
}

void cHinhChuNhat::Nhap()
{
	cout << "Nhap toa do hinh chu nhat: " << endl;
	cTuGiac::Nhap();
	cout << "Nhap chieu dai: ";
	cin >> ChieuDai;
	cout << "Nhap chieu rong: ";
	cin >> ChieuRong;
}

void cHinhChuNhat::Xuat()
{
	cout << "\nToa do hinh chu nhat: " << endl;
	cTuGiac::Xuat();
	cout << "\nChieu dai: " << ChieuDai << " (cm)";
	cout << "\nChieu rong: " << ChieuRong << " (cm)";
}
