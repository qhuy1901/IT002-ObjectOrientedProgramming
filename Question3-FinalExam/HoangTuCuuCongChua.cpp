#include <iostream>
using namespace std;

class Cong
{
    public:
        virtual void Nhap() = 0;
        virtual bool QuaCong(int&) = 0;
        virtual int LayLoaiCong() = 0;
};

class GiaoThuong :public Cong
{
    private:
        int DonGia;
        int SoHang;
    public:
        void Nhap();
        bool QuaCong(int&);
        int LayLoaiCong();
};

class HocThuat :public Cong
{
private:
    int TriTue;
public:
    void Nhap();
    bool QuaCong(int&);
    int LayLoaiCong() { return 2; }
};

class SucManh :public Cong
{
private:
    int SucManh;
public:
    void Nhap();
    bool QuaCong(int&);
    int LayLoaiCong() { return 3; }
};

void GiaoThuong::Nhap()
{
    cout << "Nhap don gia: ";
    cin >> DonGia;
    cout << "Nhap so hang: ";
    cin >> SoHang;
}

bool GiaoThuong::QuaCong(int& TienHT)
{
    TienHT = TienHT - DonGia * SoHang;
    if (TienHT >= 0)
        return true;
    return false;
}

int GiaoThuong::LayLoaiCong()
{
    return 1;
}

void HocThuat::Nhap()
{
    cout << "Nhap tri tue: ";
    cin >> TriTue;
}

bool HocThuat::QuaCong(int& TriTueHT)
{
    if (TriTueHT >= TriTue)
        return true;
    return false;
}

void SucManh::Nhap()
{
    cout << "Nhap suc manh: ";
    cin >> SucManh;
}

bool SucManh::QuaCong(int& SucManhHT)
{
    SucManhHT -= SucManh;
    if (SucManhHT >= 0)
        return true;
    return false;
}

int main()
{
    Cong* DS[100];
    cout << "Nhap so luong cong cua lau dai: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap cong thu " << i + 1 << endl;
        cout << "Chon 1 de nhap cong giao thuong, 2 hoc thuat, 3 suc manh: ";
        int chon;
        cin >> chon;
        switch (chon)
        {
            case 1: DS[i] = new GiaoThuong;
                break;
            case 2: DS[i] = new HocThuat;
                break;
            case 3: DS[i] = new SucManh;
                break;
        }
        DS[i]->Nhap();
    }

    int TienHT, TriTueHT, SucManhHT;
    cout << "Nhap tien hoang tu: ";
    cin >> TienHT;
    cout << "Nhap tri tue hoang tu: ";
    cin >> TriTueHT;
    cout << "Nhap suc manh hoang tu: ";
    cin >> SucManhHT;
    int i;
    for (i = 0; i < n; i++)
    {
        if (DS[i]->LayLoaiCong() == 1)
        {
            if (DS[i]->QuaCong(TienHT) == false)
                break;
        }
        else if (DS[i]->LayLoaiCong() == 2)
        {
            if (DS[i]->QuaCong(TriTueHT) == false)
                break;
        }
        else
            if (DS[i]->QuaCong(SucManhHT) == false)
                break;
    }
    if (i == n)
    {
        cout << "\nBa thong so con lai cua hoang tu la: ";
        cout << "\nTien: " << TienHT;
        cout << "\nTri tue: " << TriTueHT;
        cout << "\nSuc manh: " << SucManhHT;
    }
    else
        cout << "\nHoang tu ko cuu duoc Cong chua.";
    return 0;
}

