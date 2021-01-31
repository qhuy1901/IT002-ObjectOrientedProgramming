#include <iostream>
#include "cTime.h"
using namespace std;

int main()
{
    cTime t1, t2, res;
    cin >> t1;
    cout << endl;
    cin >> t2;

    ++t1;
    cout << "\nt1 tang 1s: " << t1;
    t1 = t1 + 61;
    cout << "\nt1 tang them 61s: " << t1;

    --t2;
    cout << "\nt2 giam 1s: " << t2;
    t2 = t2 - 30;
    cout << "\nt2 giam 30s: " << t2;

    res = t1 - t2;
    cout << "\nt1 - t2 = " << res;
    return 0;
}