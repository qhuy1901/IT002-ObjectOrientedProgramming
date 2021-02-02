#include "NhanVat.h"

void NhanVat::Nhap()
{
	DoiTuong::Nhap();
}

void NhanVat::TinhSatThuong()
{
	this->SatThuong = CapDo * 5;
}
