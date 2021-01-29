#include<iostream>
#include "Diem.h"
#include "DaGiac.h"
using namespace std;

int main()
{
    cDaGiac D;
    D.Nhap();
    D.Xuat();

    D.TinhTien(2, 2);
    cout << "\nToa do da giac sau khi tinh tien: ";
    D.Xuat();

    D.Quay(3.14);
    cout << "\nToa do da giac sau khi quay: ";
    D.Xuat();

    D.PhongToThuNho(3);
    cout << "\nToa do da giac sau khi phong to: ";
    D.Xuat();

    D.PhongToThuNho(-3);
    cout << "\nToa do da giac sau khi thu nho: ";
    D.Xuat();

    return 0;
}
