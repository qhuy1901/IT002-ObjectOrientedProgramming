#include "cCircle.h"

cCircle::cCircle()
{
	r = 1;
}

cCircle::~cCircle()
{
	return;
}

void cCircle::Nhap()
{
	cout << "Nhap toa do tam cua hinh tron: " << endl;
	cin >> center;
	cout << "Nhap ban kinh: ";
	cin >> r;
}

void cCircle::Xuat()
{
	cout << "\nToa do tam cua hinh tron: " << center;
	cout << "\nBan kinh R = " << r;
}
