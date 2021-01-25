#include <iostream>
using namespace std;
#include "cCircle.h"
#include "cEllipse.h"

int main()
{
    int selection;
    cout << "Chon 1 de nhap hinh tron, chon 2 de nhap hinh elip: ";
    cin >> selection;
    switch (selection)
    {
        case 1:
        {
            cCircle obj;
            obj.Nhap();
            obj.Xuat();
            break;
        }
        case 2:
        {
            cEllipse obj;
            obj.Nhap();
            obj.Xuat();
            break;
        }
    }
    return 0;
}
