#include <iostream>
#include "DaThuc.h"
using namespace std;

void cDaThuc::Nhap()
{
    do {
        cout << "Nhap so bac cua da thuc: ";
        cin >> n;
        if (n < 0)
            cout << "Error: So bac khong hop le!" << endl;
    } while (n < 0);

    for (int i = 0; i < n; i++)
    {
        cout << "He so cua x^" << i << " = ";
        cin >> HeSo[i];
    }
}

void cDaThuc::Xuat()
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (i != n - 1 && HeSo[i] >= 0)
            cout << "+ ";
        if (i == 0)
            cout << HeSo[i];
        else if (i == 1)
            cout << HeSo[i] << "x ";
        else
            cout << HeSo[i] << "x^" << i << " ";
    }
    cout << endl << endl;
}

int cDaThuc::SoSanh(const cDaThuc& p)
{
    if (n > p.n)
        return 1;
    if (n < p.n)
        return -1;
    for (int i = 0; i < n; i++)
    {
        if (HeSo[i] > p.HeSo[i])
            return 1;
        if (HeSo[i] < p.HeSo[i])
            return -1;
    }
    return 0;
}

cDaThuc cDaThuc::Cong(const cDaThuc& p)
{
    cDaThuc kq;
    kq.n = (n > p.n) ? n : p.n;
    for (int i = 0; i < kq.n; i++)
        kq.HeSo[i] = HeSo[i] + p.HeSo[i];
    return kq;
}

cDaThuc cDaThuc::Tru(const cDaThuc& p)
{
    cDaThuc kq;
    kq.n = (n > p.n) ? n : p.n;
    for (int i = 0; i < kq.n; i++)
        kq.HeSo[i] = HeSo[i] - p.HeSo[i];
    return kq;
}


cDaThuc cDaThuc::Nhan(const cDaThuc& p)
{
    cDaThuc kq;
    kq.n = p.n + n - 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p.n; j++)
            kq.HeSo[i + j] = HeSo[i] * p.HeSo[j];
    return kq;
}

cDaThuc cDaThuc::TinhDaoHam()
{
    cDaThuc kq;
    kq.n = n - 1;
    for (int i = 0; i < kq.n; i++)
        kq.HeSo[i] = HeSo[i + 1] * (i + 1);
    return kq;
}

cDaThuc cDaThuc::TinhNguyenHam()
{
    cDaThuc kq;
    kq.n = n + 1;
    kq.HeSo[0] = 0;
    for (int i = 1; i < kq.n; i++)
        kq.HeSo[i] = HeSo[i - 1] / i;
    return kq;
}

cDaThuc cDaThuc::operator+(const cDaThuc& p)
{
    cDaThuc kq;
    kq.n = (n > p.n) ? n : p.n;
    for (int i = 0; i < kq.n; i++)
        kq.HeSo[i] = HeSo[i] + p.HeSo[i];
    return kq;
}

cDaThuc cDaThuc::operator-(const cDaThuc& p)
{
    cDaThuc kq;
    kq.n = (n > p.n) ? n : p.n;
    for (int i = 0; i < kq.n; i++)
        kq.HeSo[i] = HeSo[i] - p.HeSo[i];
    return kq;
}

cDaThuc cDaThuc::operator*(const cDaThuc& p)
{
    cDaThuc kq;
    kq.n = p.n + n - 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p.n; j++)
            kq.HeSo[i + j] = HeSo[i] * p.HeSo[j];
    return kq;
}

cDaThuc cDaThuc::operator=(const cDaThuc& p)
{
    n = p.n;
    for (int i = 0; i < n; i++)
        HeSo[i] = p.HeSo[i];
    return *this;
}
