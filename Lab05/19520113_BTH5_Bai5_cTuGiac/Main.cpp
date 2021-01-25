#include <iostream>
#include "cTuGiac.h"
#include "cHinhBinhHanh.h"
#include "cHinhThang.h"
#include "cHinhVuong.h"
#include "cHinhChuNhat.h"
using namespace std;

int main()
{
	cout << "=============================" << endl;
	cout << " 1. Hinh thang" << endl;
	cout << " 2. Hinh binh hanh" << endl;
	cout << " 3. Hinh chu nhat" << endl;
	cout << " 4. Hinh vuong" << endl;
	cout << "==============================" << endl;
	cout << "Chon loai tu giac can nhap thong tin: ";
	int selection = 0;
	cin >> selection;
	cout << endl;
	switch (selection)
	{
		case 1:
		{
			cHinhThang obj;
			obj.Nhap();
			obj.Xuat();
			break;
		}
		case 2:
		{
			cHinhBinhHanh obj;
			obj.Nhap();
			obj.Xuat();
			break;
		}
		case 3:
		{
			cHinhChuNhat obj;
			obj.Nhap();
			obj.Xuat();
			break;
		}
		case 4:
		{
			cHinhVuong obj;
			obj.Nhap();
			obj.Xuat();
			break;
		}
	}
    return 0;
}
