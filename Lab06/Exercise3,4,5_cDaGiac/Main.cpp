#include <iostream>
#include "cDaGiac.h"
#include"cTamGiac.h"
#include "cTuGiac.h"
#include "cHinhBinhHanh.h"
#include "cHinhChuNhat.h"
#include "cHinhVuong.h"
using namespace std;

void ThaoTacHinh(cDaGiac* a[], int i)
{
    while (1)
    {
        cout << "Chon 1 de quay, 2 de tinh tien, 3 de vi tu, 0 de thoat: ";
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Nhap goc quay: ";
            float rad;
            cin >> rad;
            a[i]->Quay(rad);
            break;
        case 2:
            cout << "Nhap vector tinh tien: " << endl;
            float dx, dy;
            cout << "dx = ";
            cin >> dx;
            cout << "dy = ";
            cin >> dy;
            a[i]->TinhTien(dx, dy);
            break;
        case 3:
            cout << "Nhap he so vi tu: ";
            float k;
            cin >> k;
            a[i]->PhongToThuNho(k);
            break;
        }
        if (option == 0)
        {
            a[i]->Xuat();
            return;
        }
    }
}

int main()
{
    cDaGiac* a[10];
    cout << "Nhap so luong hinh: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Chon 1 de nhap hinh tam giac, 2 de nhap tu giac: ";
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
            a[i] = new cTamGiac;
            break;
        case 2:
        {
            a[i] = new cTuGiac;
            cout << "Chon 1 de nhap hinh binh hanh, 2 de nhap hinh chu nhat,";
            cout << " 3 de nhap hinh vuong: ";
            int option2;
            cin >> option2;

            switch (option2)
            {
            case 1:
                a[i] = new cHinhBinhHanh;
                break;
            case 2:
                a[i] = new cHinhChuNhat;
                break;
            case 3:
                a[i] = new cHinhVuong;
                break;
            default:
                break;
            }
            break;
        }
        default:
            break;
        }
        a[i]->Nhap();
        ThaoTacHinh(a, i);
    }
    return 0;
}
