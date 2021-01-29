#pragma once
class cDaThuc
{
private:
    int n;
    float HeSo[100];

public:
    void Nhap();
    void Xuat();
    int SoSanh(const cDaThuc&);
    cDaThuc Cong(const cDaThuc&);
    cDaThuc Tru(const cDaThuc&);
    cDaThuc Nhan(const cDaThuc&);
    cDaThuc TinhDaoHam();
    cDaThuc TinhNguyenHam();
    cDaThuc operator+(const cDaThuc&);
    cDaThuc operator-(const cDaThuc&);
    cDaThuc operator*(const cDaThuc&);
    cDaThuc operator=(const cDaThuc&);
};
