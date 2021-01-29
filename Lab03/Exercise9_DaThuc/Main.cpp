#include <iostream>
#include "DaThuc.h"
using namespace std;

int main()
{
    cDaThuc p1, p2, kq;
    p1.Nhap();
    cout << "f(x) = ";
    p1.Xuat();

    p2.Nhap();
    cout << "g(x) = ";
    p2.Xuat();

    if (p1.SoSanh(p2) == 0)
        cout << "f(x) = g(x)" << endl;
    else if (p1.SoSanh(p2) == 1)
        cout << "f(x) > g(x)" << endl;
    else
        cout << "f(x) < g(x)" << endl;
    cout << endl;

    kq = p1 + p2;
    cout << "f(x) + g(x) = ";
    kq.Xuat();

    kq = p1 - p2;
    cout << "f(x) - g(x) = ";
    kq.Xuat();

    kq = p1 * p2;
    cout << "f(x) * g(x) = ";
    kq.Xuat();

    kq = p1.TinhDaoHam();
    cout << "f'(x) = ";
    kq.Xuat();

    kq = p1.TinhNguyenHam();
    cout << "F(x)= ";
    kq.Xuat();
    return 0;
}