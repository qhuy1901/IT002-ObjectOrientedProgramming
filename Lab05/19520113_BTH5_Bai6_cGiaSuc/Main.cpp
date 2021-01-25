#include <iostream>
#include "cGiaSuc.h"
#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"
using namespace std;

int main()
{
	int n, TongCon = 0, TongSua = 0;
	cout << "Nhap so luong gia suc: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Chon 1 de nhap bo, 2 de nhap cuu, 3 de nhap de: ";
		int selection;
		cin >> selection;
		switch (selection)
		{
			case 1: 
			{
				cBo obj;
				obj.Keu();
				TongCon += obj.SinhCon();
				TongSua += obj.ChoSua();
				break;
			}
			case 2:
			{
				cCuu obj;
				obj.Keu();
				TongCon += obj.SinhCon();
				TongSua += obj.ChoSua();
				break;
			}
			case 3:
			{
				cDe obj;
				obj.Keu();
				TongCon += obj.SinhCon();
				TongSua += obj.ChoSua();
				break;
			}
		}
	}

	cout << "\nTong so con: " << TongCon;
	cout << "\nTong so lit sua: " << TongSua;
	return 0;
}
