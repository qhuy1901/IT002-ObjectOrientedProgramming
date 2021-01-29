#include <iostream>
#include "Diem.h"
#include "TamGiac.h"
using namespace std;

int main()
{
    cDiem a, b(0, 1), c(1, 0);
    cTamGiac T(a, b, c);

    T.PhongToThuNho(3);
    cout << "Toa do tam giac sau khi phong to: ";
    T.Xuat();

    T.PhongToThuNho(-3);
    cout << "\nToa do tam giac sau khi thu nho: ";
    T.Xuat();

    T.TinhTien(2, 2);
    cout << "\nToa do tam giac sau khi tinh tien: ";
    T.Xuat();

    T.Quay(3.14);
    cout << "\nToa do tam giac sau khi quay: ";
    T.Xuat();
    return 0;
}
