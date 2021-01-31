#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main()
{
    cDaThuc p1, p2, kq;
    cin >> p1;
    cout << "f(x) = " << p1 << endl;

    cin >> p2;
    cout << "g(x) = " << p2 << endl;

    if (p1 == p2)
        cout << "f(x) = g(x)" << endl;
    else if (p1 > p2)
        cout << "f(x) > g(x)" << endl;
    else
        cout << "f(x) < g(x)" << endl;
    cout << endl;

    kq = p1 + p2;
    cout << "f(x) + g(x) = " << kq;

    kq = p1 - p2;
    cout << "f(x) - g(x) = " << kq;

    kq = p1 * p2;
    cout << "f(x) * g(x) = " << kq;

    kq = p1.TinhDaoHam();
    cout << "f'(x) = " << kq;

    kq = p1.TinhNguyenHam();
    cout << "F(x)= " << kq;
    return 0;
}