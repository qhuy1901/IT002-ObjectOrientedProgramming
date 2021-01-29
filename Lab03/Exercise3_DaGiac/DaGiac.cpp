#include<iostream>
#include "Diem.h"
#include "DaGiac.h"
using namespace std;

cDaGiac::cDaGiac()
{
    n = 3;
    for (int i = 0; i < n; i++)
    {
        ArrDG[i];
    }
}

cDaGiac::cDaGiac(cDiem p[])
{
    n = 100;
    for (int i = 0; i < n; i++)
        ArrDG[i] = p[i];
}

cDaGiac::cDaGiac(const cDaGiac& x)
{
    n = x.n;
    for (int i = 0; i < n; i++)
    {
        ArrDG[i] = x.ArrDG[i];
    }
}

cDaGiac::~cDaGiac()
{
    return;
}

void cDaGiac::Nhap()
{
    do {
        cout << "Nhap so diem cua da giac: ";
        cin >> n;
        if (n < 3)
            cout << "Error: So diem cua da giac lon hon 2." << endl;
    } while (n < 3);

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap diem thu " << i + 1 << endl;
        ArrDG[i].NhapDiem();
    }
}

void cDaGiac::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        ArrDG[i].XuatDiem();
        cout << " ";
    }
}

void cDaGiac::TinhTien(float dx, float dy)
{
    for (int i = 0; i < n; i++)
    {
        ArrDG[i].TinhTienDiem(dx, dy);
    }
}

void cDaGiac::Quay(float rad)
{
    for (int i = 0; i < n; i++)
    {
        ArrDG[i].QuayDiem(rad);
    }
}

void cDaGiac::PhongToThuNho(float k)
{
    for (int i = 0; i < n; i++)
    {
        ArrDG[i].ViTuDiem(k);
    }
}