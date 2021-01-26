#include <iostream>
#include "cNhanVien.h"
#include "cNhanVienVanPhong.h"
#include "cNhanVienSanXuat.h"
using namespace std;

int main()
{
    cNhanVienSanXuat a[50];
    cNhanVienVanPhong b[50];
    int n, n1 = 0, n2 = 0;
    cout << "Nhap so nhan vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin nhan vien thu " << i + 1;
        int selection = 0;
        cout << "\nChon 1 de nhap nhan vien san xuat";
        cout << " va 2 de nhap nhan vien van phong: ";
        cin >> selection;
        switch (selection)
        {
            case 1:a[n1].Nhap();
                   n1++;
                   break;

            case 2:b[n2].Nhap();
                   n2++;
                   break;
        }
    }
    cout << endl;
    long long TongLuong = 0;
    for (int i = 0; i < n1; i++)
        TongLuong += a[i].TinhLuong();
    for (int i = 0; i < n2; i++)
        TongLuong += b[i].TinhLuong();
    cout << "Tong luong: " << TongLuong;

    for (int i = 0; i < n1; i++)
        a[i].Xuat();
    for (int i = 0; i < n2; i++)
        b[i].Xuat();
    return 0;
}
