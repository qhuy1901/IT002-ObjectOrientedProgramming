#include "cHinhBinhHanh.h"

cHinhBinhHanh::cHinhBinhHanh()
{
	CanhDay = CanhBen = ChieuCao = 0;
}

cHinhBinhHanh::~cHinhBinhHanh()
{
	return;
}

void cHinhBinhHanh::Nhap()
{
	cout << "Nhap toa do hinh binh hanh: " << endl;
	cTuGiac::Nhap();
	cout << "Nhap chieu dai canh day: ";
	cin >> CanhDay;
	cout << "Nhap chieu dai canh ben: ";
	cin >> CanhBen;
	cout << "Nhap chieu cao: ";
	cin >> ChieuCao;
}

void cHinhBinhHanh::Xuat()
{
	cout << "\nToa do hinh binh hanh: ";
	cTuGiac::Xuat();
	cout << "\nChieu dai canh day: " << CanhDay << " (cm)";
	cout << "\nChieu dai canh ben: " << CanhBen << " (cm)";
	cout << "\nChieu cao hinh binh hanh: " << ChieuCao << " (cm)";
}
