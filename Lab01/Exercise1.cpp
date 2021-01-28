#include <iostream>
using namespace std;

/*Bài 1:
a. Viết chương trình nhập vào một phân số, rút gọn phân số và xuất kết quả.*/

struct PhanSo
{
    int TuSo;
    int MauSo;
};

int TimUCLN(int x, int y)
{
    int a = abs(x);
    int b = abs(y);
    // Lấy trị tuyệt đối vì giá trị từ 1 phân số truyền vào có thể < 0
    while (a * b != 0)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    int UCLN = a + b;
    return UCLN;
}

PhanSo RutGonPhanSo(PhanSo& a)
{
    int UCLN = TimUCLN(a.TuSo, a.MauSo);
    PhanSo RutGon;
    RutGon.TuSo = a.TuSo / UCLN;
    RutGon.MauSo = a.MauSo / UCLN;
    return RutGon;
}

int main()
{
    PhanSo a, RutGon;
    cout << "Nhap tu so: ";
    cin >> a.TuSo;
    cout << "Nhap mau so: ";
    cin >> a.MauSo;
    RutGon = RutGonPhanSo(a);
    cout << "Phan so rut gon: " << RutGon.TuSo << "/" << RutGon.MauSo;
}
