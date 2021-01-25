#include <iostream>
using namespace std;

class ThoiGian
{
    private:
        int gio, phut, giay;
    public:
        ThoiGian operator++(int x);
        ThoiGian operator--(int x);
        friend istream& operator>>(istream&, ThoiGian&);
        friend ostream& operator<<(ostream&, ThoiGian);
};

ThoiGian ThoiGian::operator++(int x)
{
    if (giay == 59)
    {
        giay = 0;
        if (phut == 59)
        {
            phut = 0;
            gio++;
        }
        else
            phut++;
    }
    else
        giay++;
    return *this;
}

ThoiGian ThoiGian::operator--(int x)
{
    if (giay == 0)
    {
        giay = 59;
        if (phut == 0)
        {
            phut = 59;
            gio--;
        }
        else
            phut--;
    }
    else
        giay--;
    return *this;
}

istream& operator>>(istream& is, ThoiGian& x)
{
    cout << "Nhap gio: ";
    do{
        is >> x.gio;
    } while (x.gio < 0);

    cout << "Nhap phut: ";
    do {
        is >> x.phut;
    } while (x.phut < 0 || x.phut > 59);

    cout << "Nhap giay: ";
    do {
        is >> x.giay;
    } while (x.giay < 0 || x.giay > 59);
    return is;
}

ostream& operator<<(ostream& os, ThoiGian x)
{
    os << x.gio << " gio " << x.phut << " phut " << x.giay << " giay " << endl;
    return os;
}

int main()
{
    ThoiGian a;
    cin >> a;
    a++;
    cout << a;
    a--;
    cout << a;
    return 0;
}
