#include "cDaGiac.h"

cDaGiac::cDaGiac()
{
    SoDinh = 0;
    /*for (int i = 0; i < n; i++)
    {
        Dinh[i];
    }*/
}

cDaGiac::cDaGiac(cDiem p[])
{
    SoDinh = 100;
    for (int i = 0; i < SoDinh; i++)
        Dinh[i] = p[i];
}

cDaGiac::cDaGiac(const cDaGiac& x)
{
    SoDinh = x.SoDinh;
    for (int i = 0; i < SoDinh; i++)
    {
        Dinh[i] = x.Dinh[i];
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
        cin >> SoDinh;
        if (SoDinh < 3)
            cout << "Error: So diem cua da giac lon hon 2." << endl;
    } while (SoDinh < 3);

    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap diem thu " << i + 1 << endl;
        cin >> Dinh[i];
    }
}

void cDaGiac::Xuat()
{
    for (int i = 0; i < SoDinh; i++)
        cout << Dinh[i] << " ";
    cout << endl;
}

void cDaGiac::TinhTien(float dx, float dy)
{
    for (int i = 0; i < SoDinh; i++)
        Dinh[i].Move(dx, dy);
}

void cDaGiac::Quay(float rad)
{
    for (int i = 0; i < SoDinh; i++)
        Dinh[i].QuayDiem(rad);
    
}

void cDaGiac::PhongToThuNho(float k)
{
    for (int i = 0; i < SoDinh; i++)
        Dinh[i].ViTuDiem(k);
}