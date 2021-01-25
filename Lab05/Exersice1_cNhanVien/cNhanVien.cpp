#include "cNhanVien.h"
#include <string>
cNhanVien::cNhanVien()
{
	HoTen = "Nguyen Van A";
	NgaySinh;
	Luong = 8000000;
}

cNhanVien::cNhanVien(string Name, cDate DateOfBirth, long long Salary)
{
	HoTen = Name;
	NgaySinh = DateOfBirth;
	Luong = Salary;
}

cNhanVien::cNhanVien(const cNhanVien& x)
{
	HoTen = x.HoTen;
	NgaySinh = x.NgaySinh;
	Luong = x.Luong;
}

cNhanVien::~cNhanVien()
{
	return;
}

void cNhanVien::Nhap()
{
	cin.ignore();
	cout << "Nhap ho va ten nhan vien: ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh cua nhan vien: " << endl;
	cin >> NgaySinh;
}

void cNhanVien::Xuat()
{
	cout << "\nHo va ten nhan vien: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
}

float cNhanVien::TinhLuong()
{
	return 0.0f;
}