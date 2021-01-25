#include <iostream>
#include "cNguoi.h"
#include "cHocSinh.h"
#include "cSinhVien.h"
#include "cCongNhan.h"
#include "cNgheSi.h"
#include "cCaSi.h"
using namespace std;

int main()
{
	cout << "=============================" << endl;
	cout << " 1. Sinh vien" << endl;
	cout << " 2. Hoc sinh" << endl;
	cout << " 3. Cong nhan" << endl;
	cout << " 4. Nghe si" << endl;
	cout << " 5. Ca si" << endl;
	cout << "==============================" << endl;
	int n;
	cout << "Nhap so luong nguoi: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Chon doi tuong de nhap thong tin: ";
		int selection;
		cin >> selection;
		cout << endl;
		switch (selection)
		{
			case 1:
			{
				cSinhVien obj;
				cin >> obj;
				cout << obj;
				break;
			}
			case 2:
			{
				cHocSinh obj;
				cin >> obj;
				cout << obj;
				break;
			}
			case 3:
			{
				cCongNhan obj;
				cin >> obj;
				cout << obj;
				break;
			}
			case 4:
			{
				cNgheSi obj;
				cin >> obj;
				cout << obj;
				break;
			}
			case 5:
			{
				cCaSi obj;
				cin >> obj;
				cout << obj;
				break;
			}
		}
		cout << endl << endl;
	}
	
	return 0;
}
