#include <iostream>
using namespace std;

class DTBacNhat
{
    private:
        float a, b;
    public:
        DTBacNhat();
        DTBacNhat(float, float);
        void F(float);
        float TinhNghiem();
        DTBacNhat operator+(const DTBacNhat&);
};

DTBacNhat::DTBacNhat()
{
}

DTBacNhat::DTBacNhat(float aa, float bb)
{
    a = aa;
    b = bb;
}
void DTBacNhat::F(float x0)
{
    int kq = a * x0 + b;
    cout << "F(" << x0 << ") = " << kq;
}

float  DTBacNhat::TinhNghiem()
{
    int kq = -b / a;
    return kq;
}

DTBacNhat DTBacNhat::operator+(const DTBacNhat& x)
{
    DTBacNhat kq;
    kq.a = a + x.a;
    kq.b = b + x.b;
    return kq;
}

int main()
{
    DTBacNhat f1(1, 2), f2(3, -3);
    f1.F(2);
    cout << "\nNghiem f1 la: " << f1.TinhNghiem();
    DTBacNhat kq;
    kq = f1 + f2;
    return 0;
}
