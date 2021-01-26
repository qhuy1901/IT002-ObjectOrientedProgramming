#include "cHinhVuong.h"

cHinhVuong::cHinhVuong()
{
	Canh = 0;
}

cHinhVuong::~cHinhVuong()
{
	return;
}

void cHinhVuong::Nhap()
{
	cout << "Nhap toa do hinh vuong: " << endl;
	cTuGiac::Nhap();
	cout << "Nhap chieu dai canh: ";
	cin >> Canh;
}

void cHinhVuong::Xuat()
{
	cout << "\nToa do hinh vuong: ";
	cTuGiac::Xuat();
	cout << "\nChieu dai canh hinh vuong: " << Canh << " (cm)";
}