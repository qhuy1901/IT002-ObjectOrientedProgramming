#include <iostream>
using namespace std;
#include "MYINT.h"

int main()
{
    MYINT x1, x2, rs;
    cin >> x1 >> x2;

    rs = x1 + x2;
    cout << rs << endl;
    rs--;
    cout << rs << endl;
    rs += x1;
    cout << rs << endl;
    rs = x2 - 3;
    cout << rs << endl;

    if (x1 == x2)
        cout << "x1 bang x2.";
    else if (x1 > x2)
        cout << "x1 lon hon x2.";
    else
        cout << "x1 nho hon x2.";
    return 0;
}