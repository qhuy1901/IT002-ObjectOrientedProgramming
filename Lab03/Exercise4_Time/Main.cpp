#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    cTime t1;
    t1.Nhap();
    t1.Xuat();
    cTime t2(t1);

    cout << "\n\nTang 1s: ";
    t1.Tang1s();
    cout << endl;
    t1.Xuat();
    
    cout << "\n\nGiam 1s: ";
    t2.Giam1s();
    cout << endl;
    t2.Xuat();
    return 0;
}
