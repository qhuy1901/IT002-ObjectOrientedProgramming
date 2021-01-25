#include <iostream>
#include "cDaGiac.h"
#include "cTuGiac.h"
#include "cNguGiac.h"
using namespace std;

int main()
{
    cDaGiac* a[10];
    cout << "Nhap so luong hinh: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Chon 1 de nhap hinh tu giac, 2 de nhap ngu giac: ";
        int option;
        cin >> option;
        switch (option)
        {
            case 1:
                a[i] = new cTuGiac;
                break;
            case 2:
                a[i] = new cNguGiac;
                break;
            default:
                break;
        }
        a[i]->Nhap();
        while (1)
        {
            cout << "Chon 1 de quay, 2 de tinh tien, 3 de vi tu, 0 de thoat: ";
            int option;
            cin >> option;
            switch (option)
            {
                case 1:
                    cout << "Nhap goc quay: ";
                    float rad;
                    cin >> rad;
                    a[i]->Quay(rad);
                    break;
                case 2:
                    cout << "Nhap vector tinh tien: " << endl;
                    float dx, dy;
                    cout << "dx = ";
                    cin >> dx;
                    cout << "dy = ";
                    cin >> dy;
                    a[i] ->TinhTien(dx, dy);
                    break;
                case 3:
                    cout << "Nhap he so vi tu: ";
                    float k;
                    cin >> k;
                    a[i]->PhongToThuNho(k);
                    break;
            }
            if (option == 0)
            {
                a[i]->Xuat();
                break;
            }

        }
    }
    return 0;
}
