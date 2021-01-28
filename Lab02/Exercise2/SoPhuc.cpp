#include <iostream>
#include "SoPhuc.h"
using namespace std;

void SoPhuc::Nhap()
{
    cout << "\nNhap phan thuc: ";
    cin >> Thuc;
    cout << "Nhap phan ao: ";
    cin >> Ao;
}
void SoPhuc::Xuat()
{
    cout << Thuc;
    if (Ao > 0)
        cout << " + " << Ao << "i";
    else if (Ao < 0)
        cout << " - " << abs(Ao) << "i";
    else
        return;
}
SoPhuc SoPhuc::Cong(SoPhuc SoPhuc2)
{
    SoPhuc temp;
    temp.Thuc = Thuc + SoPhuc2.Thuc;
    temp.Ao = Ao + SoPhuc2.Ao;
    return temp;
}
SoPhuc SoPhuc::Tru(SoPhuc SoPhuc2)
{
    SoPhuc temp;
    temp.Thuc = Thuc - SoPhuc2.Thuc;
    temp.Ao = Ao - SoPhuc2.Ao;
    return temp;
}
SoPhuc SoPhuc::Nhan(SoPhuc SoPhuc2)
{
    SoPhuc temp;
    temp.Thuc = Thuc * SoPhuc2.Thuc - Ao * SoPhuc2.Ao;
    temp.Ao = Thuc * SoPhuc2.Ao + Ao * SoPhuc2.Thuc;
    return temp;
}
SoPhuc SoPhuc::Chia(SoPhuc SoPhuc2)
{
    SoPhuc temp;
    temp.Thuc = (Thuc * SoPhuc2.Thuc + Ao * SoPhuc2.Ao) / (pow(SoPhuc2.Thuc, 2) + pow(SoPhuc2.Ao, 2));
    temp.Ao = (SoPhuc2.Thuc * Ao - Thuc * SoPhuc2.Ao) / (pow(SoPhuc2.Thuc, 2) + pow(SoPhuc2.Ao, 2));
    return temp;
}
float SoPhuc::DinhGia()
{
    return pow(Thuc * Thuc + Ao * Ao, 0.5);
}