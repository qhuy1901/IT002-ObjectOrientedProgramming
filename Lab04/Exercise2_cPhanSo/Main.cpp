#include <iostream>
#include "cPhanSo.h"
using namespace std;

int main()
{
    cPhanSo temp;
    cPhanSo frac1(2, 3);
    cPhanSo frac2(3, 2);
    cout << frac1 << endl;
    cout << frac2 << endl;

    cout << "\nGia tri cua phan so thu nhat: " << frac1.DinhGia();
    cout << "\nGia tri cua phan so thu hai: " << frac2.DinhGia();
    
    temp = frac1 + frac2;
    cout << "\nTong cua hai phan so la: " << temp;

    temp = frac1 - frac2;
    cout << "\nHieu cua hai phan so la: " << temp;

    temp = frac1 * frac2;
    cout << "\nTich cua hai phan so la: " << temp;

    temp = frac1 / frac2;
    cout << "\nThuong cua hai phan so la: " << temp;

    if (frac1 == frac2)
        cout << "\nHai phan so bang nhau.";
    if (frac1 != frac2)
        cout << "\nHai phan so khong bang nhau.";

    return 0;
}