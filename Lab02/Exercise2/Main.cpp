#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main()
{
    SoPhuc SoPhuc1, SoPhuc2, Sum, Sub, Mul, Div;
    cout << "Nhap so phuc thu nhat: ";
    SoPhuc1.Nhap();
    cout << "\nNhap so phuc thu hai: ";
    SoPhuc2.Nhap();
    cout << "\nSo phuc thu nhat: ";
    SoPhuc1.Xuat();
    cout << "\nSo phuc thu hai: ";
    SoPhuc2.Xuat();
    cout << "\nTri tuyet doi cua so phuc thu nhat: " << SoPhuc1.DinhGia();
    cout << "\nTri tuyet doi cua so phuc thu hai: " << SoPhuc2.DinhGia();
    cout << "\nTong hai so phuc la: ";
    Sum = SoPhuc1.Cong(SoPhuc2);
    Sum.Xuat();
    cout << "\nHieu hai so phuc la: ";
    Sub = SoPhuc1.Tru(SoPhuc2);
    Sub.Xuat();
    cout << "\nTich hai so phuc la: ";
    Mul = SoPhuc1.Nhan(SoPhuc2);
    Mul.Xuat();
    cout << "\nThuong hai so phuc la: ";
    Div = SoPhuc1.Chia(SoPhuc2);
    Div.Xuat();
    return 0;
}