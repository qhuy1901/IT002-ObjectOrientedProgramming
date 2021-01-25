#include "date.h"

date::date()
{
}

date::date(int dd, int mm, int yyyy)
{
    d = dd;
    m = mm;
    y = yyyy;
}

istream& operator>>(istream& is, date& x)
{
    cout << "Nhap ngay: ";
    is >> x.d;
    cout << "Nhap thang: ";
    is >> x.m;
    cout << "Nhap nam: ";
    is >> x.y;
    return is;
}

ostream& operator<<(ostream& os, date x)
{
    os << x.d << "/" << x.m << "/" << x.y;
    return os;
}

int ktNhuan(int n)
{
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        return 1;
    return 0;
}

int DayOfMonth(int m, int y)
{
    if (m == 2)
    {
        if (ktNhuan(y))
            return 29;
        return 28;
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    return 30;
}
int date::GetTotalDay()
{
    long long TotalDay = 0;
    for (int i = 1; i < y; i++)
    {
        if (ktNhuan(i) == 1)
            TotalDay += 366;
        else
            TotalDay += 365;
    }

    for (int i = 1; i < m; i++)
        TotalDay += DayOfMonth(i, y);

    TotalDay += d;
    return TotalDay;
}

int date::operator-(date x)
{
    return this->GetTotalDay() - x.GetTotalDay();
}