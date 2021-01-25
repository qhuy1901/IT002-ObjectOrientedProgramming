#include "cNguoi.h"
#include <string>

cNguoi::cNguoi()
{
	HoTen = "Nguyen Van A";
	NgaySinh = "1/1/2001";
	GioiTinh = "Nam";
}

cNguoi::cNguoi(string Name, string DayOfBirth, string Sex)
{
	HoTen = Name;
	NgaySinh = DayOfBirth;
	GioiTinh = Sex;
}

cNguoi::cNguoi(const cNguoi& x)
{
	HoTen = x.HoTen;
	NgaySinh = x.NgaySinh;
	GioiTinh = x.GioiTinh;
}

cNguoi::~cNguoi()
{
	return;
}

void cNguoi::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh: ";
	getline(cin, NgaySinh);
	cout << "Nhap gioi tinh: ";
	getline(cin, GioiTinh);
}

void cNguoi::Xuat()
{
	cout << "\nHo va ten: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
	cout << "\nGioi tinh: " << GioiTinh;
}

istream& operator>>(istream& is, cNguoi& x)
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(is, x.HoTen);
	cout << "Nhap ngay sinh: ";
	getline(is, x.NgaySinh);
	cout << "Nhap gioi tinh: ";
	getline(is, x.GioiTinh);
	return is;
}

ostream& operator<<(ostream& os, cNguoi x)
{
	os << "\nHo va ten: " << x.HoTen;
	os << "\nNgay sinh: " << x.NgaySinh;
	os << "\nGioi tinh: " << x.GioiTinh;
	return os;
}