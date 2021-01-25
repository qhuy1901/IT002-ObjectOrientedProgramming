#pragma once
#include "cNhanVien.h"

class cNhanVienSanXuat:public cNhanVien
{
	private:
		float LuongCanBan;
		int SoSanPham;
	public:
		cNhanVienSanXuat();
		~cNhanVienSanXuat();
		float TinhLuong();
		void Nhap();
		void Xuat();
};

