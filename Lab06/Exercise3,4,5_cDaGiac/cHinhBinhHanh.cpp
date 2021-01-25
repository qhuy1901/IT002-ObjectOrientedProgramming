#include "cHinhBinhHanh.h"

void cHinhBinhHanh::Nhap()
{
    cout << "Nhap toa do hinh binh hanh: " << endl;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap diem thu " << i + 1 << endl;
        cin >> Dinh[i];
    }
}

void cHinhBinhHanh::Xuat()
{
    cDaGiac::SoDinh = SoDinh;
    cout << "Toa do hinh binh hanh: ";
    cDaGiac::Xuat();
}

void cHinhBinhHanh::Quay(float rad)
{
    cTuGiac::Quay(rad);
}

void cHinhBinhHanh::TinhTien(float dx, float dy)
{
    cTuGiac::TinhTien(dx, dy);
}

void cHinhBinhHanh::PhongToThuNho(float k)
{
    cTuGiac::PhongToThuNho(k);
}
