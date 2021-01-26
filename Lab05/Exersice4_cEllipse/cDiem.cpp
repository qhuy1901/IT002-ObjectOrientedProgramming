#include "cDiem.h"
#include <iostream>
using namespace std;

cDiem::cDiem()
{
    x = 0;
    y = 0;
}

cDiem::cDiem(float a, float b = 0)
{
    x = a;
    y = b;
}

cDiem::cDiem(const cDiem& a)
{
    x = a.x;
    y = a.y;
}

cDiem::~cDiem()
{
    return;
}

void cDiem::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> x;
    cout << "Nhap tung do: ";
    cin >> y;
}

void cDiem::Xuat()
{
    cout << "(" << x << "," << y << ")";
}

void cDiem::Move(float dx, float dy)
{
    x = x + dx;
    y = y + dy;
}

float cDiem::TinhKhoangCach(cDiem A)
{
    return sqrt(pow(x - A.x, 2) + pow(y - A.y, 2));
}

void cDiem::SetX(float xx)
{
    x = xx;
}

void cDiem::SetY(float yy)
{
    y = yy;
}

void cDiem::Set(float xx, float yy)
{
    x = xx;
    y = yy;
}

float cDiem::GetX()
{
    return x;
}

float cDiem::GetY()
{
    return y;
}

istream& operator>>(istream& is, cDiem& temp)
{
    cout << "\t+Nhap hoanh do: ";
    is >> temp.x;
    cout << "\t+Nhap tung do: ";
    is >> temp.y;
    return is;
}

ostream& operator<<(ostream& os, cDiem temp)
{
    os << "(" << temp.x << "," << temp.y << ")";
    return os;
}