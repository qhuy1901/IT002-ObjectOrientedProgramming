#include <iostream>
using namespace std;

class DaThucBacHai
{
    private:
       float a, b, c;
    public:
        DaThucBacHai();
        DaThucBacHai(float, float, float);
        float XacDinhGiaTri(int x0);
        DaThucBacHai operator+(DaThucBacHai x);
};

DaThucBacHai::DaThucBacHai()
{
    a = b = c = 0;
}

DaThucBacHai::DaThucBacHai(float aa, float bb, float cc)
{
    a = aa;
    b = bb;
    c = cc;
}

float DaThucBacHai::XacDinhGiaTri(int x0)
{
    float kq = a * x0 * x0 + b * x0 + c;
    return kq;
}

DaThucBacHai DaThucBacHai::operator+(DaThucBacHai x)
{
    DaThucBacHai kq;
    kq.a = a + x.a;
    kq.b = b + x.b;
    kq.c = c + x.c;
    return kq;
}

int main()
{
    DaThucBacHai a(3, 2, 0.5);
    DaThucBacHai b(1, 1, 1);
    DaThucBacHai kq = a + b;
    cout << kq.XacDinhGiaTri(0);
    return 0;
}

