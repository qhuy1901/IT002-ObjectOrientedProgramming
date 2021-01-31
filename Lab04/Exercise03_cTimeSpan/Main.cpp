#include <iostream>
#include "cTimeSpan.h"
using namespace std;

int main()
{
    cTimeSpan Ts1, Ts2, Ts3;
    cin >> Ts1;
    cout << Ts1 << endl;
    cin >> Ts2;
    cout << Ts2 << endl << endl;

    ++Ts1;
    cout << Ts1 << endl;
    --Ts2;
    cout << Ts2 << endl;

    cout << "Cong hai khoang thoi gian: ";
    Ts3 = Ts1 + Ts2;
    cout << Ts3 << endl;
    cout << "Tru hai khoang thoi gian: ";
    Ts3 = Ts1 - Ts2;
    cout << Ts3 << endl;

    if (Ts1 == Ts2)
        cout << "Hai khoang thoi gian bang nhau." << endl;
    else if (Ts1 > Ts2)
        cout << "Time Span 1 lon hon Time Span 2" << endl;
    else
        cout << "Time Span 2 lon hon Time Span 1" << endl;
  
    return 0;
}
