#include<iostream>
#include"Diem.h"
using namespace std;

cDiem::cDiem() 
{ 
    x = 0;
    y = 0; 
}

cDiem::cDiem(float xx, float yy) 
{ 
    x = xx;
    y = yy; 
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

void cDiem::NhapDiem()
{
    cout << "x =  ";
    cin >> x;
    cout << "y =  ";
    cin >> y;
}

void cDiem::XuatDiem()
{
    cout << "(" << x << "," << y << ")";
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
float cDiem::TinhKhoangCach(cDiem A)
{
    return sqrt(pow(x - A.x, 2) + pow(y - A.y, 2));
}

void cDiem::TinhTienDiem(float dx, float dy)
{
    x += dx;
    y += dy;
}

void cDiem::ViTuDiem(float k)
{
    // Phép vị tự tâm O
    this->Set(x * k, y * k);
}

void cDiem::QuayDiem(float rad)
{
    x = (int)(x * cos(rad) - y * sin(rad));
    y = (int)(x * sin(rad) + y * cos(rad));
}