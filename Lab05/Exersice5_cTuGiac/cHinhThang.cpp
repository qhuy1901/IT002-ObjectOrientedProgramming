#include "cHinhThang.h"

cHinhThang::cHinhThang()
{
	CanhDayDai = CanhDayNgan = ChieuCao = 0;
}

cHinhThang::~cHinhThang()
{
	return;
}

void cHinhThang::Nhap()
{
	cout << "Nhap toa do hinh thang: " << endl;
	cTuGiac::Nhap();
	cout << "Nhap chieu dai canh day dai: ";
	cin >> CanhDayDai;
	cout << "Nhap chieu dai canh day ngan: ";
	cin >> CanhDayNgan;
	cout << "Nhap chieu cao: ";
	cin >> ChieuCao;
}

void cHinhThang::Xuat()
{
	cout << "\nToa do hinh thang: ";
	cTuGiac::Xuat();
	cout << "\nChieu dai canh day dai: " << CanhDayDai << " (cm)";
	cout << "\nChieu dai canh day ngan: " << CanhDayNgan << " (cm)";
	cout << "\nChieu cao hinh thang: " << ChieuCao << " (cm)";
}
