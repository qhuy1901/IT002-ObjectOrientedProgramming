#include <iostream>
#include "cSoPhuc.h"
using namespace std;

cSoPhuc::cSoPhuc()
{
    Thuc = 0;
    Ao = 0;
}
cSoPhuc::cSoPhuc(float t)
{
    Thuc = t;
    Ao = 0;
}

void cSoPhuc::Nhap()
{
    cout << "\nNhap phan thuc: ";
    cin >> Thuc;
    cout << "Nhap phan ao: ";
    cin >> Ao;
}

void cSoPhuc::Xuat()
{
    cout << Thuc;
    if (Ao > 0)
        cout << " + " << Ao << "i";
    else if (Ao < 0)
        cout << " - " << abs(Ao) << "i";
    else
        return;
}

cSoPhuc cSoPhuc::Cong(cSoPhuc SoPhuc2)
{
    cSoPhuc temp;
    temp.Thuc = Thuc + SoPhuc2.Thuc;
    temp.Ao = Ao + SoPhuc2.Ao;
    return temp;
}

cSoPhuc cSoPhuc::Tru(cSoPhuc SoPhuc2)
{
    cSoPhuc temp;
    temp.Thuc = Thuc - SoPhuc2.Thuc;
    temp.Ao = Ao - SoPhuc2.Ao;
    return temp;
}

cSoPhuc cSoPhuc::Nhan(cSoPhuc SoPhuc2)
{
    cSoPhuc temp;
    temp.Thuc = Thuc * SoPhuc2.Thuc - Ao * SoPhuc2.Ao;
    temp.Ao = Thuc * SoPhuc2.Ao + Ao * SoPhuc2.Thuc;
    return temp;
}

cSoPhuc cSoPhuc::Chia(cSoPhuc SoPhuc2)
{
    cSoPhuc temp;
    temp.Thuc = (Thuc * SoPhuc2.Thuc + Ao * SoPhuc2.Ao) / (pow(SoPhuc2.Thuc, 2) + pow(SoPhuc2.Ao, 2));
    temp.Ao = (SoPhuc2.Thuc * Ao - Thuc * SoPhuc2.Ao) / (pow(SoPhuc2.Thuc, 2) + pow(SoPhuc2.Ao, 2));
    return temp;
}

float cSoPhuc::DinhGia()
{
    return pow(Thuc * Thuc + Ao * Ao, 0.5);
}

cSoPhuc cSoPhuc::operator+ (const cSoPhuc& SoPhuc2)
{
    return this->Cong(SoPhuc2);
}

cSoPhuc cSoPhuc::operator- (const cSoPhuc& SoPhuc2)
{
    return this->Tru(SoPhuc2);
}

cSoPhuc cSoPhuc::operator* (const cSoPhuc& SoPhuc2)
{
    return this->Nhan(SoPhuc2);
}

cSoPhuc cSoPhuc::operator/ (const cSoPhuc& SoPhuc2)
{
    return this->Chia(SoPhuc2);
}

bool cSoPhuc::operator==(const cSoPhuc& SoPhuc2)
{
    if (Thuc == SoPhuc2.Thuc && Ao == SoPhuc2.Ao)
        return true;
    return false;
}

bool cSoPhuc::operator!=(const cSoPhuc& SoPhuc2)
{
    if (Thuc == SoPhuc2.Thuc && Ao == SoPhuc2.Ao)
        return false;
    return true;
}

istream& operator>>(istream& is, cSoPhuc& x)
{
    cout << "\nNhap phan thuc: ";
    is >> x.Thuc;
    cout << "Nhap phan ao: ";
    is >> x.Ao;
    return is;
}

ostream& operator<<(ostream& os, cSoPhuc x)
{
    os << x.Thuc;
    if (x.Ao > 0)
        os << " + " << x.Ao << "i";
    if (x.Ao < 0)
        os << " - " << abs(x.Ao) << "i";
    return os;
}
