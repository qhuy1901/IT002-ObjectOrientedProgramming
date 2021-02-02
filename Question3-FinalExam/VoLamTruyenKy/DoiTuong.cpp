#include "DoiTuong.h"

int DoiTuong::LaySatThuong()
{
	return this->SatThuong;
}

int DoiTuong::SatThuongNguHanh(DoiTuong* x)
{
	float STNguHanh = this->SatThuong;
	//	Tương Sinh
	switch (x->NguHanh)
	{
		case 1:
			if (NguHanh == 4)
				STNguHanh += 0.1 * SatThuong;
			break;
		case 2:
			if(NguHanh == 5)
				STNguHanh += 0.1 * SatThuong;
			break;
		case 3:
			if (NguHanh == 1)
				STNguHanh += 0.1 * SatThuong;
			break;
		case 4:
			if (NguHanh == 2)
				STNguHanh += 0.1 * SatThuong;
			break;
		case 5:
			if (NguHanh == 3)
				STNguHanh += 0.1 * SatThuong;
			break;
	}
	// Tương khắc
	if (NguHanh- x->NguHanh == 1)
		STNguHanh -= SatThuong * 0.2;
	if (NguHanh - x->NguHanh == -1)
		STNguHanh += SatThuong * 0.2;
	return STNguHanh;
}

void DoiTuong::Nhap()
{
	cout << "Nhap cap do: ";
	cin >> CapDo;
	cout << "Nhap ngu hanh ";
	cout << "1.Kim, 2.Moc, 3.Tho, 4.Thuy, 5.Hoa: ";
	cin >> NguHanh;
}

void DoiTuong::TinhSatThuong()
{
}


