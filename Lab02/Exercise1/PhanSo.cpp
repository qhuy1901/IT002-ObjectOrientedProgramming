#include "iostream"
#include "PhanSo.h"
using namespace std;

void PhanSo::Nhap()
{
    cout << "Nhap tu so: ";
    cin >> iTuSo;
    do {
        cout << "Nhap mau so: ";
        cin >> iMauSo;
        if (iMauSo == 0)
            cout << "Phan so khong hop le. Xin nhap lai! " << endl;
    } while (iMauSo == 0);
}

void PhanSo::Xuat()
{
    cout << iTuSo << "/" << iMauSo;
}

int TimUCLN(int x, int y)
{
    int a = abs(x);
    int b = abs(y);

    if (b == 0)
        return a;
    else
        return TimUCLN(b, a % b);
}

PhanSo PhanSo::RutGonPhanSo()
{
    int UCLN = TimUCLN(iTuSo, iMauSo);
    PhanSo RutGon;
    RutGon.iTuSo = iTuSo / UCLN;
    RutGon.iMauSo = iMauSo / UCLN;
    return RutGon;
}

float PhanSo::DinhGia()
{
    return (float)iTuSo / iMauSo;
}

PhanSo PhanSo::Cong(PhanSo Frac2)
{
    PhanSo temp;
    temp.iTuSo = iTuSo * Frac2.iMauSo + iMauSo * Frac2.iTuSo;
    temp.iMauSo = iMauSo * Frac2.iMauSo;
    return temp;
}

PhanSo PhanSo::Tru(PhanSo Frac2)
{
    PhanSo temp;
    temp.iTuSo = iTuSo * Frac2.iMauSo - iMauSo * Frac2.iTuSo;
    temp.iMauSo = iMauSo * Frac2.iMauSo;
    return temp;
}

PhanSo PhanSo::Nhan(PhanSo Frac2)
{
    PhanSo temp;
    temp.iTuSo = iTuSo * Frac2.iTuSo;
    temp.iMauSo = iMauSo * Frac2.iMauSo;
    return temp;
}

PhanSo PhanSo::Chia(PhanSo Frac2)
{
    PhanSo temp;
    temp.iTuSo = iTuSo * Frac2.iMauSo;
    temp.iMauSo = iMauSo * Frac2.iTuSo;
    return temp;
}