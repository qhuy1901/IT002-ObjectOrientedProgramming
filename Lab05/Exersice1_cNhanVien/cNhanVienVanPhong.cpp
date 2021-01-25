#include "cNhanVienVanPhong.h"

cNhanVienVanPhong::cNhanVienVanPhong()
{
}

cNhanVienVanPhong::~cNhanVienVanPhong()
{
	return;
}

float cNhanVienVanPhong::TinhLuong()
{
	float kq = SoNgayLamViec * 100000;
	return kq;
}

void cNhanVienVanPhong::Nhap()
{
	cout << "Nhap thong tin nhan vien van phong: " << endl;
	cNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgayLamViec;
	Luong = this->TinhLuong();
	cin.ignore();
}

void cNhanVienVanPhong::Xuat()
{
	cout << "\nThong tin nhan vien van phong: ";
	cNhanVien::Xuat();
	cout << "\nSo ngay lam viec: " << SoNgayLamViec;
	cout << "\nLuong nhan vien van phong: " << Luong << endl;
}

/*istream& operator>>(istream& is, cNhanVienVanPhong& x)
{
	cout << "Nhap thong tin nhan vien van phong: " << endl;
	x.Nhap();
	cout << "Nhap so ngay lam viec: ";
	is >> x.SoNgayLamViec;
	x.Luong = x.TinhLuong();
	cin.ignore();
	return is;
}

ostream& operator<<(ostream& os, cNhanVienVanPhong x)
{
	cout << "\nThong tin nhan vien van phong: ";
	x.Xuat();
	os << "\nSo ngay lam viec: " << x.SoNgayLamViec;
	os << "\nLuong nhan vien van phong: " << x.Luong;
	return os;
}*/