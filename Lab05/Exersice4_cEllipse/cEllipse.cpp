#include "cEllipse.h"

cEllipse::cEllipse()
{
	center;
	long_r = 1;
	short_r = 2;
}

cEllipse::~cEllipse()
{
	return;
}

void cEllipse::Nhap()
{
	cout << "Nhap toa do tam ellipse: " << endl;
	cin >> center;
	cout << "Nhap ban kinh dai: ";
	cin >> long_r;
	cout << "Nhap ban kinh rong: ";
	cin >> short_r;
}

void cEllipse::Xuat()
{
	cout << "\nToa do tam ellipse: " << center;
	cout << "\nBan kinh dai: " << long_r;
	cout << "\nBan kinh rong: " << short_r;
}
