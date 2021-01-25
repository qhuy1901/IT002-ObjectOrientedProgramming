#include "cNgheSi.h"
#include <string>

void cNgheSi::Nhap()
{
	cout << "Nhap thong tin nghe si: " << endl;
	cNguoi::Nhap();
	cout << "Nhap linh vuc: ";
	getline(cin, LinhVuc);
	cout << "Nhap so tac pham: ";
	cin >> SoTacPham;
}

void cNgheSi::Xuat()
{
	cout << "\nThong tin nghe si: ";
	cNguoi::Xuat();
	cout << "\nLinh vuc: " << LinhVuc;
	cout << "\nSo tac pham: " << SoTacPham;
}

istream& operator>>(istream& is, cNgheSi& x)
{
	cout << "Nhap thong tin nghe si: " << endl;
	x.cNguoi::Nhap();
	cout << "Nhap linh vuc: ";
	getline(is, x.LinhVuc);
	cout << "Nhap so tac pham: ";
	is >> x.SoTacPham;
	return is;
}

ostream& operator<<(ostream& os, cNgheSi x)
{
	os << "\nThong tin nghe si: ";
	x.cNguoi::Xuat();
	os << "\nLinh vuc: " << x.LinhVuc;
	os << "\nSo tac pham: " << x.SoTacPham;
	return os;
}


