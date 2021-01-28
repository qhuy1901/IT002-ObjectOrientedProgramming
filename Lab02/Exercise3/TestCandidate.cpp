#include <iostream>
#include "Candidate.h"
#include "TestCandidate.h"
using namespace std;

void TestCandidate::Nhap()
{
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin thi sinh thu " << i + 1 << endl;
        arr[i].Nhap();
    }
}

void TestCandidate::XuLy()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i].TinhTongDiem() > 15)
        {
            arr[i].Xuat();
            cout << endl;
        }
    }
}