#pragma once
#include "cNhanVien.h"
class cNhanVienVanPhong :public cNhanVien
{
	private:
		int SoNgayLamViec;
	public:
		cNhanVienVanPhong();
		~cNhanVienVanPhong();
		float TinhLuong();
		void Nhap();
		void Xuat();
};

