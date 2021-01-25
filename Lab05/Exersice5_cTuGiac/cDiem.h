#pragma once
#include <iostream>
using namespace std;
class cDiem
{
    private:
        float x, y;
    public:
        cDiem();
        cDiem(float, float);
        cDiem(const cDiem&);
        ~cDiem();
        void SetX(float);
        void SetY(float);
        void Set(float, float);
        float GetX();
        float GetY();
        void Move(float dx, float dy);
        float TinhKhoangCach(cDiem);
        void Nhap();
        void Xuat();
        friend class cTuGiac;
        friend istream& operator>>(istream&, cDiem&);
        friend ostream& operator<<(ostream&, cDiem);
};



