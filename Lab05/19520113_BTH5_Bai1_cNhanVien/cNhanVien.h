#pragma once
#include <iostream>
#include <string>
#include "cDate.h"
using namespace std;

class cNhanVien
{
    protected:
        string HoTen;
        cDate NgaySinh;
        long long Luong;
    public:
        cNhanVien();
        cNhanVien(string, cDate, long long);
        cNhanVien(const cNhanVien&);
        ~cNhanVien();
        void Nhap();
        void Xuat();
        float TinhLuong();
};

