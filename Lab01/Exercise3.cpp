#include <iostream>
using namespace std;

/*3. Viết chương trình nhập vào hai phân số. Tính tổng, hiệu, tích, thương giữa
chúng và xuất kết quả.*/

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

PhanSo TinhTongHaiPhanSo(PhanSo a, PhanSo b)
{
    PhanSo Tong;
    Tong.TuSo = a.TuSo * b.MauSo + b.TuSo * a.MauSo;
    Tong.MauSo = a.MauSo * b.MauSo;
    return Tong;
}

PhanSo TinhHieuHaiPhanSo(PhanSo a, PhanSo b)
{
    PhanSo Hieu;
    Hieu.TuSo = a.TuSo * b.MauSo - b.TuSo * a.MauSo;
    Hieu.MauSo = a.MauSo * b.MauSo;
    return Hieu;
}

PhanSo TinhTichHaiPhanSo(PhanSo a, PhanSo b)
{
    PhanSo Tich;
    Tich.TuSo = a.TuSo * b.TuSo;
    Tich.MauSo = a.MauSo * b.MauSo;
    return Tich;
}

PhanSo TinhThuongHaiPhanSo(PhanSo a, PhanSo b)
{
    PhanSo Thuong;
    Thuong.TuSo = a.TuSo * b.MauSo;
    Thuong.MauSo = a.MauSo * b.TuSo;
    return Thuong;
}

int TimUCLN(int a, int b)
{
    int x = abs(a);
    int y = abs(b);
    // Lấy trị tuyệt đối vì giá trị từ 1 phân số truyền vào có thể < 0
    while (x * y != 0)
    {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    int UCLN = x + y;
    return UCLN;
}

PhanSo RutGonPhanSo(PhanSo a)
{
    PhanSo RutGon;
    RutGon.TuSo = a.TuSo / TimUCLN(a.TuSo, a.MauSo);
    RutGon.MauSo = a.MauSo / TimUCLN(a.TuSo, a.MauSo);
    return RutGon;
}

int main()
{
    PhanSo a, b;
    cout << "Nhap phan so thu nhat: " << endl;
    NhapPhanSo(a);
    cout << "Nhap phan so thu hai: " << endl;
    NhapPhanSo(b);
    PhanSo Tong = RutGonPhanSo(TinhTongHaiPhanSo(a, b));
    cout << "\nTong hai phan so la: " << Tong.TuSo << "/" << Tong.MauSo;
    PhanSo Hieu = RutGonPhanSo(TinhHieuHaiPhanSo(a, b));
    cout << "\nHieu hai phan so la: " << Hieu.TuSo << "/" << Hieu.MauSo;
    PhanSo Tich = RutGonPhanSo(TinhTichHaiPhanSo(a, b));
    cout << "\nTich hai phan so la: " << Tich.TuSo << "/" << Tich.MauSo;
    PhanSo Thuong = RutGonPhanSo(TinhThuongHaiPhanSo(a, b));
    cout << "\nThuong hai phan so la: " << Thuong.TuSo << "/" << Thuong.MauSo;
}
