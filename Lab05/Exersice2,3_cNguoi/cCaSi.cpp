#include "cCaSi.h"
#include <string>

void cCaSi::Nhap()
{
	cout << "Nhap thong tin ca si: " << endl;
	cNguoi::Nhap();
	cout << "Nhap nghe danh: ";
	getline(cin, NgheDanh);
	cout << "Nhap the loai nhac: ";
	getline(cin, TheLoai);
	cout << "Nhap tuoi nghe: ";
	cin >> TuoiNghe;
}

void cCaSi::Xuat()
{
	cout << "\nThong tin ca si: ";
	cNguoi::Xuat();
	cout << "\nNghe danh: " << NgheDanh;
	cout << "\nThe loai nhac: " << TheLoai;
	cout << "\nTuoi nghe: " << TuoiNghe;
}

istream& operator>>(istream& is, cCaSi& x)
{
	cout << "Nhap thong tin ca si: " << endl;
	x.cNguoi::Nhap();
	cout << "Nhap nghe danh: ";
	getline(is, x.NgheDanh);
	cout << "Nhap the loai nhac: ";
	getline(is, x.TheLoai);
	cout << "Nhap tuoi nghe: ";
	is >> x.TuoiNghe;
	return is;
}

ostream& operator<<(ostream& os, cCaSi x)
{
	os << "\nThong tin ca si: ";
	x.cNguoi::Xuat();
	os << "\nNghe danh: " << x.NgheDanh;
	os << "\nThe loai nhac: " << x.TheLoai;
	os << "\nTuoi nghe: " << x.TuoiNghe;
	return os;
}


