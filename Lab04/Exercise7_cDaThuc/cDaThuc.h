#pragma once
#include <iostream>
using namespace std;

class cDaThuc
{
    private:
        int n;
        float HeSo[100];

    public:
        void Nhap();
        void Xuat();
        int SoSanh(const cDaThuc&);
        cDaThuc Cong(const cDaThuc&);
        cDaThuc Tru(const cDaThuc&);
        cDaThuc Nhan(const cDaThuc&);
        cDaThuc TinhDaoHam();
        cDaThuc TinhNguyenHam();
        bool operator==(const cDaThuc&);
        bool operator>(const cDaThuc&);
        bool operator<(const cDaThuc&);
        cDaThuc operator+(const cDaThuc&);
        cDaThuc operator-(const cDaThuc&);
        cDaThuc operator*(const cDaThuc&);
        cDaThuc operator=(const cDaThuc&);
        friend istream& operator>>(istream& is, cDaThuc&);
        friend ostream& operator<<(ostream& os, cDaThuc);
};
