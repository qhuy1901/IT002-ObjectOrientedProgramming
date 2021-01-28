#include <iostream>
#include "PhanSo.h"
using namespace std;

int main()
{
    PhanSo Frac1, Frac2, Sum, Sub, Mul, Div;
    cout << "Nhap phan so thu nhat: " << endl;
    Frac1.Nhap();
    cout << "Nhap phan so thu hai: " << endl;
    Frac2.Nhap();
    cout << "\nPhan so thu nhat: ";
    Frac1.Xuat();
    cout << "\nPhan so thu hai: ";
    Frac2.Xuat();
    cout << "\nGia tri cua phan so thu nhat: " << Frac1.DinhGia();
    cout << "\nGia tri cua phan so thu hai: " << Frac2.DinhGia();
    cout << "\nTong cua hai phan so la: ";
    Sum = (Frac1.Cong(Frac2)).RutGonPhanSo();
    Sum.Xuat();
    cout << "\nHieu cua hai phan so la: ";
    Sub = (Frac1.Tru(Frac2)).RutGonPhanSo();
    Sub.Xuat();
    cout << "\nTich cua hai phan so la: ";
    Mul = (Frac1.Nhan(Frac2)).RutGonPhanSo();
    Mul.Xuat();
    cout << "\nThuong cua hai phan so la: ";
    Div = (Frac1.Chia(Frac2)).RutGonPhanSo();
    Div.Xuat();
    return 0;
}

