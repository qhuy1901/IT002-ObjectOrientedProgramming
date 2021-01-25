#include "cTapChi.h"

void cTapChi::Nhap()
{
	cSach::Nhap();
	cin.ignore();
	cout << "Nhap chu de cua tap chi: ";
	gets_s(ChuDe);
}

void cTapChi::Xuat()
{
	cSach::Xuat();
	cout << "\nChu de cua tap chi: " << ChuDe << endl;
}
