#include "cTuGiac.h"

void cTuGiac::Nhap()
{
    cout << "Nhap toa do tu giac: " << endl;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap diem thu " << i + 1 << endl;
        cin >> Dinh[i];
    }
}

void cTuGiac::Xuat()
{
    cDaGiac::SoDinh = SoDinh;
    cout << "Toa do tu giac: ";
    cDaGiac::Xuat();
}

void cTuGiac::Quay(float rad)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::Quay(rad);
}

void cTuGiac::TinhTien(float dx, float dy)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::TinhTien(dx, dy);
}

void cTuGiac::PhongToThuNho(float k)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::PhongToThuNho(k);
}

