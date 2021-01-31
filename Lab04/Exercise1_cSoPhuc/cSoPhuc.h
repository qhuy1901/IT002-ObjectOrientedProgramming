#pragma once
#include <iostream>
using namespace std;

class cSoPhuc
{
    private:
        float Thuc;
        float Ao;
    public:
        void Nhap();
        void Xuat();
        cSoPhuc();
        cSoPhuc(float);
        float DinhGia();
        cSoPhuc Cong(cSoPhuc);
        cSoPhuc Tru(cSoPhuc);
        cSoPhuc Nhan(cSoPhuc);
        cSoPhuc Chia(cSoPhuc);
        cSoPhuc operator+ (const cSoPhuc&);
        cSoPhuc operator- (const cSoPhuc&);
        cSoPhuc operator* (const cSoPhuc&);
        cSoPhuc operator/ (const cSoPhuc&);
        bool operator==(const cSoPhuc&);
        bool operator!=(const cSoPhuc&);
        friend istream& operator>>(istream&, cSoPhuc&);
        friend ostream& operator<<(ostream&, cSoPhuc);
};
