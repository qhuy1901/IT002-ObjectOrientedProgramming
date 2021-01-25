#include "cHocSinh.h"

void cHocSinh::Nhap()
{
	cout << "Nhap thong tin sinh vien: " << endl;
	cNguoi::Nhap();
	cout << "Nhap diem trung binh cac mon: ";
	cin >> DiemTB;
}

void cHocSinh::Xuat()
{
	cout << "\nThong tin sinh vien: ";
	cNguoi::Xuat();
	cout << "\nDiem trung binh tich luy: " << DiemTB;
	TinhXepLoai();
	cout << "\nXep loai: " << XepLoai;
}

void cHocSinh::TinhXepLoai()
{
	if (this->DiemTB >= 8)
		XepLoai = "Gioi";
	else if (this->DiemTB >= 6.5 && this->DiemTB < 8)
		XepLoai = "Kha";
	else if (this->DiemTB >= 5 && this->DiemTB < 6.5)
		XepLoai = "Trung binh";
	else
		XepLoai = "Yeu";
}

istream& operator>>(istream& is, cHocSinh& x)
{
	cout << "Nhap thong tin sinh vien: " << endl;
	x.cNguoi::Nhap();
	cout << "Nhap diem trung binh cac mon: ";
	is >> x.DiemTB;
	return is;
}

ostream& operator<<(ostream& os, cHocSinh x)
{
	os << "\nThong tin sinh vien: ";
	x.cNguoi::Xuat();
	os << "\nDiem trung binh tich luy: " << x.DiemTB;
	x.TinhXepLoai();
	os << "\nXep loai: " << x.XepLoai;
	return os;
}