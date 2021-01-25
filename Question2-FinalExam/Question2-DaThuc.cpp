#include <iostream>
using namespace std;

class DaThuc
{
    private:
        int Bac;
        int HeSo[100];
    public:
        friend istream& operator>>(istream&, DaThuc&);
        friend ostream& operator<<(ostream&, DaThuc);
        DaThuc operator+(DaThuc);
};

istream& operator>>(istream& is, DaThuc& x)
{
    cout << "Nhap so bac: ";
    is >> x.Bac;
    for (int i = 0; i < x.Bac; i++)
    {
        cout << "Nhap he so bac " << i << ": ";
        is >> x.HeSo[i];
    }
    return is;
}

ostream& operator<<(ostream& os, DaThuc x)
{
    os << x.HeSo[x.Bac - 1] << "x^" << x.Bac;
    for (int i = x.Bac - 1; i >= 0; i--)
    {
        if (x.HeSo[i] > 0)
            os << "+" << x.HeSo[i] << "x^" << i;
        else
            os << x.HeSo[i] << "x^" << i;
    }
    return os;
}

DaThuc DaThuc::operator+(DaThuc x)
{
    DaThuc kq;
    kq.Bac = (Bac < x.Bac) ? Bac : x.Bac;
    for (int i = 0; i < kq.Bac; i++)
        kq.HeSo[i] = HeSo[i] + x.HeSo[i];
    return kq;
}

int main()
{
    DaThuc a, b,c;
    cin >> a;
    cin >> b;
    c = a + b;
    cout << c;
}
