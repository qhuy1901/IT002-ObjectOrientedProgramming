#include "cHinhVuong.h"

void cHinhVuong::Nhap()
{
    cout << "Nhap toa do hinh vuong: " << endl;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap diem thu " << i + 1 << endl;
        cin >> Dinh[i];
    }
}

void cHinhVuong::Xuat()
{
    cDaGiac::SoDinh = SoDinh;
    cout << "Toa do hinh vuong: ";
    cDaGiac::Xuat();
}

void cHinhVuong::Quay(float rad)
{
    cHinhChuNhat::Quay(rad);
}

void cHinhVuong::TinhTien(float dx, float dy)
{
    cHinhChuNhat::TinhTien(dx, dy);
}

void cHinhVuong::PhongToThuNho(float k)
{
    cHinhChuNhat::PhongToThuNho(k);
}
