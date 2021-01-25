#include "cHinhChuNhat.h"

void cHinhChuNhat::Nhap()
{
    cout << "Nhap toa do hinh chu nhat: " << endl;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap diem thu " << i + 1 << endl;
        cin >> Dinh[i];
    }
}

void cHinhChuNhat::Xuat()
{
    cDaGiac::SoDinh = SoDinh;
    cout << "Toa do hinh chu nhat: ";
    cDaGiac::Xuat();
}

void cHinhChuNhat::Quay(float rad)
{
    cTuGiac::Quay(rad);
}

void cHinhChuNhat::TinhTien(float dx, float dy)
{
    cTuGiac::TinhTien(dx, dy);
}

void cHinhChuNhat::PhongToThuNho(float k)
{
    cTuGiac::PhongToThuNho(k);
}
