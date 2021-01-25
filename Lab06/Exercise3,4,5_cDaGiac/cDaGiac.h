#pragma once
#include "cDiem.h"
class cDaGiac
{
    protected:
        int SoDinh;
        cDiem Dinh[100];
    public:
        cDaGiac();
        cDaGiac(cDiem p[]);
        cDaGiac(const cDaGiac&);
        ~cDaGiac();
        virtual void Nhap();
        virtual void Xuat();
        virtual void TinhTien(float, float);
        virtual void Quay(float);
        virtual void PhongToThuNho(float);
};

