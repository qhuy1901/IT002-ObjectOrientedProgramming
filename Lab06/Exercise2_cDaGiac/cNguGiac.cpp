#include "cNguGiac.h"

void cNguGiac::Nhap()
{
    cout << "Nhap toa do ngu giac: " << endl;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap diem thu " << i + 1 << endl;
        cin >> Dinh[i];
    }
}

void cNguGiac::Xuat()
{
    cDaGiac::SoDinh = SoDinh;
    cout << "Toa do ngu giac: ";
    cDaGiac::Xuat();
}

void cNguGiac::Quay(float  rad)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::Quay(rad);
}

void cNguGiac::TinhTien(float dx, float dy)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::TinhTien(dx, dy);
}

void cNguGiac::PhongToThuNho(float k)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::PhongToThuNho(k);
}

