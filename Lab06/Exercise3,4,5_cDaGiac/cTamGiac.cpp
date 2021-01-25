#include "cTamGiac.h"

void cTamGiac::Nhap()
{
    cout << "Nhap toa do tam giac: " << endl;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap diem thu " << i + 1 << endl;
        cin >> Dinh[i];
    }
}

void cTamGiac::Xuat()
{
    cDaGiac::SoDinh = SoDinh;
    cout << "Toa do tam giac: ";
    cDaGiac::Xuat();
}

void cTamGiac::Quay(float rad)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::Quay(rad);
}

void cTamGiac::TinhTien(float dx, float dy)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::TinhTien(dx, dy);
}

void cTamGiac::PhongToThuNho(float k)
{
    cDaGiac::SoDinh = SoDinh;
    cDaGiac::PhongToThuNho(k);
}
