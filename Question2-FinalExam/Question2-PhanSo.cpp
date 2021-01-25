#include <iostream>
using namespace std;

class PhanSo
{
    private:
        int Tu, Mau;
    public:
        PhanSo operator+(const PhanSo&);
        PhanSo operator-(const PhanSo&);
        friend istream& operator>>(istream& is, PhanSo&);
        friend ostream& operator<<(ostream& os, PhanSo);
};

PhanSo PhanSo::operator+(const PhanSo& x)
{
    PhanSo kq;
    kq.Tu = Tu * x.Mau + Mau * x.Tu;
    kq.Mau = Mau * x.Mau;
    return kq;
}

PhanSo PhanSo::operator-(const PhanSo& x)
{
    PhanSo kq;
    kq.Tu = Tu * x.Mau - Mau * x.Tu;
    kq.Mau = Mau * x.Mau;
    return kq;
}

istream& operator>>(istream& is, PhanSo& x)
{
    is >> x.Tu >> x.Mau;
    return is;
}

ostream& operator<< (ostream & os, PhanSo x)
{
    os << x.Tu << "/" << x.Mau << endl;
    return os;
}

int main()
{
    PhanSo a, b, kq;
    cin >> a;
    cin >> b;
    kq = a + b;
    cout << kq;
    kq = a - b;
    cout << kq;
    return 0;
}
