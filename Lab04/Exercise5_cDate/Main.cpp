#include <iostream>
#include "cDate.h"
using namespace std;

int main()
{
    cDate d, DefaultDay;
    cin >> d;
    cout << "Khoang cach tu ngay " << d << " den ngay 1/1/2020 la: " << abs(d - DefaultDay) << " (ngay)" << endl;

    ++d;
    cout << "Tang 1 ngay: " << d << endl;
    d = d + 5;
    cout << "Tang them 5 ngay: " << d << endl;
    --d;
    cout << "Giam 1 ngay: " << d << endl;
    d = d - 4;
    cout << "Giam them 4 ngay: " << d << endl;
    return 0;
}

