#include <iostream>
#include "cGiaSuc.h"
#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"
using namespace std;

int main()
{
    int n;
    cGiaSuc* DS[50];
    cout << "Nhap so luong gia suc: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Chon 1 de nhap bo, 2 de nhap cuu, 3 de nhap de: ";
        int chon;
        cin >> chon;
        switch (chon)
        {
            case 1:
            {
                DS[i] = new cBo();
                break;
            }
            case 2:
            {
                DS[i] = new cCuu();
                break;
            }
            case 3:
            {
                DS[i] = new cDe();
                break;
            }
        }
    }
    //Kêu
    for (int i = 0; i < n; i++)
        DS[i]->Keu();
    
    //Sinh con
    int TongCon = 0;
    for (int i = 0; i < n; i++)
        TongCon += DS[i]->SinhCon();

    //Cho sữa
    int TongSua = 0;
    for (int i = 0; i < n; i++)
        TongSua += DS[i]->ChoSua();

    cout << "Tong con: " << TongCon;
    cout << "\nTong so lit sua: " << TongSua;
    return 0;
}
