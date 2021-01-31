#include <iostream>
#include "cPhanSo.h"
using namespace std;

cPhanSo::cPhanSo()
{
    iTuSo = 1;
    iMauSo = 1;
}

cPhanSo::cPhanSo(int iTu, int iMau = 1)
{
    iTuSo = iTu;
    iMauSo = iMau;
}

cPhanSo::cPhanSo(const cPhanSo& a)
{
    iTuSo = a.iTuSo;
    iMauSo = a.iMauSo;
}

cPhanSo::~cPhanSo()
{
    return;
}

void cPhanSo::Nhap()
{
    cout << "Nhap tu so: ";
    cin >> iTuSo;
    do {
        cout << "Nhap mau so: ";
        cin >> iMauSo;
        if (iMauSo == 0)
            cout << "Error: Mau so < 0, xin nhap lai! " << endl;
    } while (iMauSo == 0);
}

void cPhanSo::Xuat()
{
    cout << iTuSo << "/" << iMauSo;
}

int TimUCLN(int a, int b)
{
    int x = abs(a);
    int y = abs(b);

    if (y == 0)
        return x;
    else
        return TimUCLN(y, x % y);
}
cPhanSo cPhanSo::RutGonPhanSo()
{
    int UCLN = TimUCLN(iTuSo, iMauSo);
    cPhanSo RutGon;
    RutGon.iTuSo = iTuSo / UCLN;
    RutGon.iMauSo = iMauSo / UCLN;
    return RutGon;
}

float cPhanSo::DinhGia()
{
    return (float)iTuSo / iMauSo;
}

cPhanSo cPhanSo::Cong(cPhanSo Frac2)
{
    cPhanSo temp;
    temp.iTuSo = iTuSo * Frac2.iMauSo + iMauSo * Frac2.iTuSo;
    temp.iMauSo = iMauSo * Frac2.iMauSo;
    return temp.RutGonPhanSo();
}

cPhanSo cPhanSo::Tru(cPhanSo Frac2)
{
    cPhanSo temp;
    temp.iTuSo = iTuSo * Frac2.iMauSo - iMauSo * Frac2.iTuSo;
    temp.iMauSo = iMauSo * Frac2.iMauSo;
    return temp.RutGonPhanSo();
}

cPhanSo cPhanSo::Nhan(cPhanSo Frac2)
{
    cPhanSo temp;
    temp.iTuSo = iTuSo * Frac2.iTuSo;
    temp.iMauSo = iMauSo * Frac2.iMauSo;
    return temp.RutGonPhanSo();
}

cPhanSo cPhanSo::Chia(cPhanSo Frac2)
{
    cPhanSo temp;
    temp.iTuSo = iTuSo * Frac2.iMauSo;
    temp.iMauSo = iMauSo * Frac2.iTuSo;
    return temp.RutGonPhanSo();
}

cPhanSo cPhanSo::operator+(const cPhanSo& frac2)
{
    return this->Cong(frac2);
}

cPhanSo cPhanSo::operator-(const cPhanSo& frac2)
{
    return this->Tru(frac2);
}

cPhanSo cPhanSo::operator*(const cPhanSo& frac2)
{
    return this->Nhan(frac2);
}

cPhanSo cPhanSo::operator/(const cPhanSo& frac2)
{
    return this->Chia(frac2);
}

bool cPhanSo::operator==(cPhanSo frac2)
{
    if (this->DinhGia() == frac2.DinhGia())
        return true;
    return false;
}

bool cPhanSo::operator!=(cPhanSo frac2)
{
    if (this->DinhGia() == frac2.DinhGia())
        return false;
    return true;
}

istream& operator>>(istream &is,const cPhanSo &frac)
{
    cout << "Nhap tu so: ";
    is >> frac.iTuSo;
    do {
        cout << "Nhap mau so: ";
        is >> frac.iMauSo;
        if (frac.iMauSo == 0)
            cout << "Error: Mau so < 0, xin nhap lai! " << endl;
    } while (frac.iMauSo == 0);
    return is;
}

ostream& operator<<(ostream& os, const cPhanSo frac)
{
    os << frac.iTuSo << "/" << frac.iMauSo;
    return os;
}
