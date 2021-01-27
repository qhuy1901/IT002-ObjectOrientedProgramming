#include <iostream>
using namespace std;

//2. Viết chương trình nhập vào hai phân số, tìm phân số lớn nhất và xuất kết quả.

struct PhanSo
{
    int TuSo;
    int MauSo;
};

void NhapPhanSo(PhanSo& a)
{
    cout << "\tNhap tu so: ";
    cin >> a.TuSo;
    do {
        cout << "\tNhap mau so: ";
        cin >> a.MauSo;
    } while (a.MauSo == 0);
}

PhanSo TimPhanSoLonNhat(PhanSo a, PhanSo b)
{
    //Ép kiểu float để so sánh giá trị của hai phân số
    if ((float)a.TuSo / a.MauSo > (float)b.TuSo / b.MauSo)
        return a;
    return b;
}

int main()
{
    PhanSo a, b;
    cout << "Nhap phan so thu nhat: " << endl;
    NhapPhanSo(a);
    cout << "Nhap phan so thu hai: " << endl;
    NhapPhanSo(b);
    PhanSo PhanSoLonNhat = TimPhanSoLonNhat(a, b);
    cout << "\nPhan so lon nhat la: " << PhanSoLonNhat.TuSo << "/" << PhanSoLonNhat.MauSo;
}
