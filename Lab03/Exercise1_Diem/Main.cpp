#include <iostream>
#include "Diem.h"
using namespace std;

int main()
{
    cDiem A, B;
    A.Nhap();
    A.Xuat();

    B.Set(3,3);
    B.Xuat();

    cout << "\nKhoang cach giua A va B la: " << A.TinhKhoangCach(B);
    A.Move(1, -1);
    cout << "\nDiem A sau khi tinh tien la: ";
    A.Xuat();
    return 0;
}
