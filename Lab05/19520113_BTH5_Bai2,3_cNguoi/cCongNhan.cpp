#include "cCongNhan.h"
#include <string>

void cCongNhan::Nhap()
{
	cout << "Nhap thong tin cong nhan: " << endl;
	cNguoi::Nhap();
	cout << "Nhap ma so cong nhan: ";
	getline(cin, MaSo);
	cout << "Nhap luong: ";
	cin >> Luong;
}

void cCongNhan::Xuat()
{
	cout << "\nThong tin cong nhan: ";
	cNguoi::Xuat();
	cout << "\nMa so cong nhan: " << MaSo;
	cout << "\nLuong: " << Luong;
}

istream& operator>>(istream& is, cCongNhan& x)
{
	cout << "Nhap thong tin cong nhan: " << endl;
	x.cNguoi::Nhap();
	cout << "Nhap ma so cong nhan: ";
	getline(is, x.MaSo);
	cout << "Nhap luong: ";
	is >> x.Luong;
	return is;
}

ostream& operator<<(ostream& os, cCongNhan x)
{
	os << "\nThong tin cong nhan: ";
	x.cNguoi::Xuat();
	os << "\nMa so cong nhan: " << x.MaSo;
	os << "\nLuong: " << x.Luong;
	return os;
}