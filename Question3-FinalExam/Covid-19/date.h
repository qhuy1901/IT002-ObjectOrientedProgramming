#pragma once
#include <iostream>
using namespace std;
class date
{
    private:
        int d, m, y;
        friend class NguoiNhapCanh;
    public:
        date();
        date(int, int, int);
        int GetTotalDay();
        int operator-(date);
        friend istream& operator>>(istream&, date&);
        friend ostream& operator<<(ostream&, date);
};

