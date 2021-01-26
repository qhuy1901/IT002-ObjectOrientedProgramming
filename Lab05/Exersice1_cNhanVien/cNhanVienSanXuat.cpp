#include "cNhanVienSanXuat.h"

cNhanVienSanXuat::cNhanVienSanXuat()
{
}

cNhanVienSanXuat::~cNhanVienSanXuat()
{
	return;
}

float cNhanVienSanXuat::TinhLuong()
{
	float temp = LuongCanBan + SoSanPham * 5000;
	return temp;
}

void cNhanVienSanXuat::Nhap()
{
	cout << "Nhap thong tin nhan vien san xuat: " << endl;
	cNhanVien::Nhap();
	cout << "Nhap luong can ban: ";
	cin >> LuongCanBan;
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
	Luong = this->TinhLuong();
	cin.ignore();
}

void cNhanVienSanXuat::Xuat()
{
	cout << "\nThong tin nhan vien san xuat: ";
	cNhanVien::Xuat();
	cout << "\nLuong can ban: " << LuongCanBan;
	cout << "\nSo san pham: " << SoSanPham;
	cout << "\nLuong nhan vien san xuat: " << Luong << endl;
}

/*istream& operator>>(istream& is, cNhanVienSanXuat& x)
{
	cout << "Nhap thong tin nhan vien san xuat: " << endl;
	x.Nhap();
	cout << "Nhap luong can ban: ";
	is >> x.LuongCanBan;
	cout << "Nhap so san pham: ";
	is >> x.SoSanPham;
	x.Luong = x.TinhLuong();
	cin.ignore();
	return is;
}

ostream& operator<<(ostream& os, cNhanVienSanXuat x)
{
	cout << "\nThong tin nhan vien san xuat: ";
	x.Xuat();
	os << "\nLuong can ban: " << x.LuongCanBan;
	os << "\nSo san pham: " << x.SoSanPham;
	os << "\nLuong nhan vien " << x.Luong;
	return os;
}*/