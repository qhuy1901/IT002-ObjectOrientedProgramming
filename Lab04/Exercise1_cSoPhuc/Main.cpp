#include <iostream>
#include "cSoPhuc.h"
using namespace std;

int main()
{
    cSoPhuc SoPhuc1, SoPhuc2, temp;
    cout << "Nhap so phuc thu nhat: ";
    cin >> SoPhuc1;
    cout << "So phuc thu nhat: " << SoPhuc1 << endl;

    cout << "\nNhap so phuc thu hai: ";
    cin >> SoPhuc2;
    cout << "So phuc thu hai: " << SoPhuc2 << endl;

    cout << "\nTri tuyet doi cua so phuc thu nhat: " << SoPhuc1.DinhGia();
    cout << "\nTri tuyet doi cua so phuc thu hai: " << SoPhuc2.DinhGia();

    temp = SoPhuc1 + SoPhuc2;
    cout << "\nTong hai so phuc la: " << temp;

    temp = SoPhuc1 - SoPhuc2;
    cout << "\nHieu hai so phuc la: " << temp;

    temp = SoPhuc1 * SoPhuc2;
    cout << "\nTich hai so phuc la: " << temp;

    temp = SoPhuc1 / SoPhuc2;
    cout << "\nThuong hai so phuc la: " << temp;

    if (SoPhuc1 == SoPhuc2)
        cout << "\nHai so phuc bang nhau.";
    if (SoPhuc1 != SoPhuc2)
        cout << "\nHai so phuc khac nhau.";

    return 0;
}

