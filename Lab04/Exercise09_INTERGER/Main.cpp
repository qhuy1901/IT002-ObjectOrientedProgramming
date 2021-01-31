#include <iostream>
using namespace std;
#include "INTERGER.h"

int main()
{
    INTERGER x1, x2, res;
    cin >> x1;
    cin >> x2;

    res = x1 + x2;
    cout << res << endl;
    res--;
    cout <<res << endl;
    res = x1 * 3;
    cout << res << endl;
    res /= x2;
    cout << res << endl;

    if (x1 == x2)
        cout << "x1 bang x2.";
    else if (x1 > x2)
        cout << "x1 lon hon x2.";
    else
        cout << "x1 nho hon x2.";
    return 0;
}
