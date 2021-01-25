#include "cSinhVien.h"

void cSinhVien::Nhap()
{
	cout << "Nhap thong tin sinh vien: " << endl;
	cNguoi::Nhap();
	cout << "Nhap diem trung binh tich luy: ";
	cin >> DiemTichLuy;
}

void cSinhVien::Xuat()
{
	cout << "\nThong tin sinh vien: ";
	cNguoi::Xuat();
	cout << "\nDiem trung binh tich luy: " << DiemTichLuy;
}

istream& operator>>(istream& is, cSinhVien& x)
{
	cout << "Nhap thong tin sinh vien: " << endl;
	x.cNguoi::Nhap();
	cout << "Nhap diem trung binh tich luy: ";
	is >> x.DiemTichLuy;
	return is;
}

ostream& operator<<(ostream& os, cSinhVien x)
{
	os << "\nThong tin sinh vien: ";
	x.cNguoi::Xuat();
	os << "\nDiem trung binh tich luy: " << x.DiemTichLuy;
	return os;
}
