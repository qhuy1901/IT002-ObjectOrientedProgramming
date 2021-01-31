#include<iostream>
#include<string>
#include"cString.h"
using namespace std;

int main()
{
    cString s1, s2;
    cin >> s1;

    s2 = s1;
    cout << s2 << endl;

    s1 = s1 + s2;
    cout << s1 << endl;

    if (s1 == s2)
        cout << "Hai chuoi bang nhau.";
    else if (s1 > s2)
        cout << "s1 lon hon s2.";
    else
        cout << "s2 lon hon s1.";
    return 0;
}
