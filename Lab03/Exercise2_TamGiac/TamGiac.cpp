#include<iostream>
#include "Diem.h"
#include "TamGiac.h"
using namespace std;

cTamGiac::cTamGiac()
{
    cDiem A, B, C;
}

cTamGiac::cTamGiac(cDiem a, cDiem b, cDiem c)
{
    A = a;
    B = b;
    C = c;
}

cTamGiac::cTamGiac(const cTamGiac& a)
{
    A = a.A;
    B = a.B;
    C = a.C;
}

cTamGiac::~cTamGiac()
{
    return;
}

void cTamGiac::Nhap()
{
    cout << "Nhap diem A: " << endl;
    A.NhapDiem();
    cout << "Nhap diem B: " << endl;
    B.NhapDiem();
    cout << "Nhap diem C: " << endl;
    C.NhapDiem();
}

void cTamGiac::Xuat()
{
    cout << "\nA";
    A.XuatDiem();
    cout << "\nB";
    B.XuatDiem();
    cout << "\nC";
    C.XuatDiem();
}

void cTamGiac::TinhTien(float dx, float dy)
{
    A.TinhTienDiem(dx, dy);
    B.TinhTienDiem(dx, dy);
    C.TinhTienDiem(dx, dy);
}

void cTamGiac::Quay(float rad)
{
    A.QuayDiem(rad);
    B.QuayDiem(rad);
    C.QuayDiem(rad);
}

void cTamGiac::PhongToThuNho(float k)
{
    A.ViTuDiem(k);
    B.ViTuDiem(k);
    C.ViTuDiem(k);
}


