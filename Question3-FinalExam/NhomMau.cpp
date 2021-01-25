#include <iostream>
using namespace std;

class NhomMau
{
    protected:
        int Nhom;
        int Rh;
    public:
        virtual void Nhap();
        int LayNhomMau();
        int LayRh();
        virtual bool KtQuyLuatDiTruyen(int, int);
        virtual bool KtViecNhanMau(int, int);
};

void NhomMau::Nhap()
{
    cout << "Chon 0. Rh-, 1. Rh+: ";
    cin >> Rh;
}

int NhomMau::LayNhomMau()
{
    return Nhom;
}

int NhomMau::LayRh()
{
    return Rh;
}

bool NhomMau::KtQuyLuatDiTruyen(int Cha, int Me)
{
    return false;
}

bool NhomMau::KtViecNhanMau(int TenMau, int LoaiRh)
{
    if (Rh == 1) //Rh+ có thể nhận Rh+ và Rh-
        return true;
    else //Rh-
    {
        if (LoaiRh == 0) // Rh- chỉ nhận Rh-
            return true;
    }
    return false;
}

class A :public NhomMau
{
    public:
        void Nhap();
        bool KtQuyLuatDiTruyen(int, int);
        bool KtViecNhanMau(int, int);
};

void A::Nhap()
{
    Nhom = 1;
    NhomMau::Nhap();
}

bool A::KtQuyLuatDiTruyen(int Cha, int Me)
{
    if (Cha == 2 && Me == 2)
        return false;
    if (Cha == 4 && Me == 2)
        return false;
    if (Cha == 2 && Me== 4)
        return false;
    if (Cha== 4 && Me == 4)
        return false;
    return true;
}

bool A::KtViecNhanMau(int TenMau, int LoaiRh)
{
    if (TenMau == 1 || TenMau == 4)
        if (NhomMau::KtViecNhanMau(TenMau,LoaiRh))
            return true;
    return false;
}

class B :public NhomMau
{
    public:
        void Nhap();
        bool KtQuyLuatDiTruyen(int, int);
        bool KtViecNhanMau(int, int);
};

void B::Nhap()
{
    Nhom = 2;
    NhomMau::Nhap();
}

bool B::KtQuyLuatDiTruyen(int Cha, int Me)
{
    if (Cha == 1 && Me == 1)
        return false;
    if (Cha == 1 && Me == 4)
        return false;
    if (Cha == 4 && Me== 1)
        return false;
    if (Cha == 4 && Me== 4)
        return false;
    return true;
}

bool B::KtViecNhanMau(int TenMau, int LoaiRh)
{
    if (TenMau == 2 || TenMau == 4)
        if (NhomMau::KtViecNhanMau(TenMau, LoaiRh) == true)
            return true;
    return false;
}

class AB :public NhomMau
{
    public:
        void Nhap();
        bool KtQuyLuatDiTruyen(int, int);
        bool KtViecNhanMau(int, int);
};

void AB::Nhap()
{
    Nhom = 3;
    NhomMau::Nhap();
}

bool AB::KtQuyLuatDiTruyen(int Cha, int Me)
{
    if (Cha == 4 || Me == 4)
        return false;
    if (Cha == 1 && Me == 1)
        return false;
    if (Cha == 2 && Me == 2)
        return false;
    return true;
}

bool AB::KtViecNhanMau(int TenMau, int LoaiRh)
{
    if (NhomMau::KtViecNhanMau(TenMau, LoaiRh) == true)
        return true;
    return false;
}

class O :public NhomMau
{
    public:
        void Nhap();
        bool KtQuyLuatDiTruyen(int, int);
        bool KtViecNhanMau(int, int);
};

void O::Nhap()
{
    Nhom = 4;
    NhomMau::Nhap();
}

bool O::KtQuyLuatDiTruyen(int Cha, int Me)
{
    if (Cha== 3 || Me == 3)
        return false;
    return true;
}

bool O::KtViecNhanMau(int TenMau, int LoaiRh)
{
    if(TenMau == 4)
        if (NhomMau::KtViecNhanMau(TenMau,LoaiRh) == true)
            return true;
    return false;
}

void main()
{
    NhomMau* DanhSach[100];
    cout << "Nhap so nguoi: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap nhom mau nguoi thu " << i << endl;
        cout << "Chon 1 de nhap nhom mau A, 2 nhom mau B, 3 nhom mau AB, 4 nhom mau O: ";
        int chon;
        cin >> chon;
        switch (chon)
        {
            case 1: DanhSach[i] = new A;
                break;
            case 2: DanhSach[i] = new B;
                break;
            case 3: DanhSach[i] = new AB;
                break;
            case 4: DanhSach[i] = new O;
                break;
        }
        DanhSach[i]->Nhap();
    }

    cout << "Nhap vi tri nhom mau Cha, Me, Con: ";
    int cha, me, con;
    cin >> cha >> me >> con;
    int MauCha = DanhSach[cha]->LayNhomMau();
    int MauMe = DanhSach[me]->LayNhomMau();
    if (DanhSach[con]->KtQuyLuatDiTruyen(MauCha, MauMe) == true)
        cout << "Bo 3 nhom mau dung QLDT." << endl;
    else 
        cout << "Bo 3 nhom mau khong dung QLDT." << endl;

    cout << "Chon vi tri nguoi X: ";
    int index_X;
    cin >> index_X;
    cout << "Vi tri nhung nguoi co the cho mau nguoi X la: ";
    for(int i = 0; i < n;i++)
    {
        int MauNguoiCho = DanhSach[i]->LayNhomMau();
        int LoaiRh = DanhSach[i]->LayRh();
        if (DanhSach[index_X]->KtViecNhanMau(MauNguoiCho, LoaiRh) == true)
            cout << i << " ";
    }
}
