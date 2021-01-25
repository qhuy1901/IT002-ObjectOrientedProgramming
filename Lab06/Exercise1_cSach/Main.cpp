#include <iostream>
#include "cSach.h"
#include "cSachGiaoKhoa.h"
#include "cTapChi.h"
#include "cTieuThuyet.h"
using namespace std;

int main()
{
    int n;
    cSach* List[50];
    cout << "Nhap so luong sach: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Chon 1 de nhap Sach giao khoa, 2 de nhap tap chi, 3 de nhap tieu thuyet: ";
        int selection;
        cin >> selection;
        switch (selection)
        {
            case 1:
            {
                List[i] = new cSachGiaoKhoa();
                break;
            }
            case 2:
            {
                List[i] = new cTapChi();
                break;
            }
            case 3:
            {
                List[i] = new cTieuThuyet();
                break;
            }
        }
    }
    cin.ignore();
    for (int i = 0; i < n; i++)
        List[i]->Nhap();

    for (int i = 0; i < n; i++)
        List[i]->Xuat();
    return 0;
    
}

