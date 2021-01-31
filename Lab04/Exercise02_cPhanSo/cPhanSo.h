#pragma once 
#include <iostream>
using namespace std;

class cPhanSo
{
    private:
        int iTuSo;
        int iMauSo;
    public:
        cPhanSo();
        cPhanSo(int, int);
        cPhanSo(const cPhanSo&);
        ~cPhanSo();
        void Nhap();
        void Xuat();
        cPhanSo RutGonPhanSo();
        float DinhGia();
        cPhanSo Cong(cPhanSo);
        cPhanSo Tru(cPhanSo);
        cPhanSo Nhan(cPhanSo);
        cPhanSo Chia(cPhanSo);
        cPhanSo operator+(const cPhanSo&);
        cPhanSo operator-(const cPhanSo&);
        cPhanSo operator*(const cPhanSo&);
        cPhanSo operator/(const cPhanSo&);
        bool operator==(cPhanSo);
        bool operator!=(cPhanSo);
        friend istream& operator>>(istream&, const cPhanSo&);
        friend ostream& operator<<(ostream&, const cPhanSo);
};