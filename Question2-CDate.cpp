#include <iostream>
using namespace std;

class CDate
{
    private:
        int ngay, thang, nam;
    public:
        bool LaNamNhuan();
        int LaySoNgayCuaThang();
        CDate operator++();
        CDate operator++(int);
        friend istream& operator>>(istream&, CDate&);
        friend ostream& operator<<(ostream&, CDate);
};

bool CDate::LaNamNhuan()
{
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
        return true;
    return false;
}

int CDate::LaySoNgayCuaThang()
{
    if (thang == 2)
    {
        if (this->LaNamNhuan() == true)
            return 29;
        return 28;
    }
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        return 30;
    return 31;
}

CDate CDate::operator++()
{
    int SoNgayCuaThang = this->LaySoNgayCuaThang();
    if (ngay == SoNgayCuaThang)
    {
        ngay = 1;
        if (thang == 12)
        {
            thang = 1;
            nam++;
        }
        else
            thang++;
    }
    else ngay++;
    return *this;
}

CDate CDate::operator++(int x)
{
    ++(*this);
    return *this;
}

istream& operator>>(istream& is, CDate& x)
{
    is >> x.ngay >> x.thang >> x.nam;
    return is;
}

ostream& operator<<(ostream& os, CDate x)
{
    os << x.ngay << "/" << x.thang << "/" << x.nam;
    return os;
}

int main()
{
    CDate d;
    cin >> d;
    d++;
    cout << d << endl;
    ++d;
    cout << d << endl;
    return 0;
}
