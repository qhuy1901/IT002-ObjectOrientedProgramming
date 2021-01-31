#include<iostream>
#include "cMatrix.h"
using namespace std;

int main()
{
    cMatrix m1, m2, res;
    cin >> m1;
    cout << m1 << endl;
    cin >> m2;
    cout << m2 << endl;

    res = m1 * m2;
    cout << res << endl;
    
    cVector v;
    cin >> v;
    cout << v << endl;

    return 0;
}