#include <iostream>
#include "DoiTuong.h"
#include "NhanVat.h"
#include "QVDauLinh.h"
#include "QVThongThuong.h"
using namespace std;


int main()
{
    DoiTuong* DS[100];
    cout << "Nhap so doi tuong can quan ly: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap 1 de nhap nhan vat, 2 de nhap quai vat thong thuong, 3 de nhap quai vat dau linh: ";
        int chon;
        cin >> chon;
        switch (chon)
        {
            case 1:
                DS[i] = new NhanVat;
                break;
            case 2:
                DS[i] = new QVThongThuong;
                break;
            case 3:
                DS[i] = new QVDauLinh;
                break;
            default:
                break;
        }
        DS[i]->Nhap();
        DS[i]->TinhSatThuong();
    }

    int lc = 0;
    for (int i = 0; i < n; i++)
    {
        if (DS[i]->LaySatThuong() > DS[lc]->LaySatThuong())
            lc = i;
    }
    cout << "Vi tri cua phan tu co muc sat thuong cao nhat: " << lc;

    cout << "\nNhap vi tri cua 2 phan tu muon so sanh: ";
    int a, b; 
    cin >> a >> b;
    cout << "Sat thuong cua A doi voi B: " << DS[a]->SatThuongNguHanh(DS[b]) << endl;
    cout << "Sat thuong cua B doi voi A: " << DS[b]->SatThuongNguHanh(DS[a]) << endl;
    return 0;
}

