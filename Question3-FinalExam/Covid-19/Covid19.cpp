#include <iostream>
#include "date.h"
using namespace std;

class NguoiNhapCanh
{ 
    //Bỏ qua tên, địa chỉ, số hộ chiếu, địa điểm khởi hành
    protected:
        date NgayNC;
        float XSBenh;
    public:
        virtual void Nhap();
        bool KtThoiGianCachLy(const date&);
        float LayXSBenh();
        date LayNgayNC();
};

void NguoiNhapCanh::Nhap()
{
    cout << "Nhap ngay nhap canh (dd/mm/yy): ";
    cin >> NgayNC.d >> NgayNC.m >> NgayNC.y;
    cout << "Nhap xac xuat mang mam benh: ";
    cin >> XSBenh;
}

bool NguoiNhapCanh::KtThoiGianCachLy(const date& CheckDate)
{
    if (abs(NgayNC - CheckDate) < 14)
        return 0;
    return 1;
}

float NguoiNhapCanh::LayXSBenh()
{
    return XSBenh;
}

date NguoiNhapCanh::LayNgayNC()
{
    return NgayNC;
}

class VietNam :public NguoiNhapCanh
{
    public:
        void Nhap();
};

void VietNam::Nhap()
{
    NguoiNhapCanh::Nhap();
}

class NuocNgoai :public NguoiNhapCanh
{
    private:
         char TenNT[100];
         // Bỏ qua địa chỉ liên lạc người thân
    public:
        void Nhap(); 
};

void NuocNgoai::Nhap()
{
    NguoiNhapCanh::Nhap();
    cin.ignore();
    cout << "Nhap ten nguoi than: ";
    cin.getline(TenNT,100);
}

class KhuCachLy
{
    protected:
        // Bỏ qua tên, địa chỉ, SLNV
        NguoiNhapCanh* DanhSachNNC[100];
        int SucChua;
        int TongNguoi;
        float KhoangCachDenCuaKhau;
    public:
        virtual void Nhap();
        int TinhSoLuongNguoiConCachLy(const date& CheckDate);
        int LayTongNguoi();
        float TinhTongXSLayBenh();
};

float KhuCachLy::TinhTongXSLayBenh()
{
    float TongXS = 0;
    int HeSoVeKhoangCach = (int)KhoangCachDenCuaKhau % 10;
    date DefDay(30, 4, 2020);
    for(int i =0;i<TongNguoi;i++)
    {
        float XSLayBenh;
        if(DanhSachNNC[i]->LayNgayNC() - DefDay >= 0)
            XSLayBenh = DanhSachNNC[i]->LayXSBenh() + DanhSachNNC[i]->LayXSBenh() * HeSoVeKhoangCach * 0.02;
        else
            XSLayBenh = DanhSachNNC[i]->LayXSBenh() + DanhSachNNC[i]->LayXSBenh() * HeSoVeKhoangCach * 0.01;
        TongXS += XSLayBenh;
    }
    return TongXS;
}

int KhuCachLy::TinhSoLuongNguoiConCachLy(const date& CheckDate)
{
    int SoNguoiConCachLy = 0;
    for(int i =0;i<TongNguoi;i++)
    {
        if (DanhSachNNC[i]->KtThoiGianCachLy(CheckDate) == 0)
            SoNguoiConCachLy++;
    }
    return SoNguoiConCachLy;
}

void KhuCachLy::Nhap()
{
    cout << "Nhap khoang cach den cua khau: ";
    cin >> KhoangCachDenCuaKhau;
    cout << "Nhap suc chua: ";
    cin >> SucChua;
    cout << "Nhap tong so nguoi cach ly tich luy: ";
    cin >> TongNguoi;
}

int KhuCachLy::LayTongNguoi()
{
    return TongNguoi;
}

class TapTrung :public KhuCachLy
{
    public:
        void Nhap();
};

void TapTrung::Nhap()
{
    KhuCachLy::Nhap();
    cout << "---Nhap thong tin nguoi cach ly trong khu cach ly--- " << endl;
    for (int i = 0; i < TongNguoi; i++)
    {
        cout << "+Nhap thong tin nguoi thu " << i + 1;
        cout << "\nChon 1 de nhap nguoi VN, 2 de nhap nguoi nuoc ngoai: ";
        int chon;
        cin >> chon;
        switch (chon)
        {
            case 1:
                DanhSachNNC[i] = new VietNam;
                break;
            case 2:
                DanhSachNNC[i] = new NuocNgoai;
                break;
        }
        DanhSachNNC[i]->Nhap();
    }
}

class TuNguyen :public KhuCachLy
{
    public:
        void Nhap();
};

void TuNguyen::Nhap()
{
    KhuCachLy::Nhap();
    cout << "---Nhap thong tin nguoi cach ly trong khu cach ly--- " << endl;
    for (int i = 0; i < TongNguoi; i++)
    {
        cout << "+Nhap thong tin nguoi thu " << i + 1 << endl;
        DanhSachNNC[i] = new NuocNgoai;
        DanhSachNNC[i]->Nhap();
    }
}


int main()
{
    KhuCachLy* DanhSachKCL[100];
    cout << "Nhap so luong khu cach ly: ";
    int nKCL;
    cin >> nKCL;
    int SoNguoiNhapCanh = 0;
    for (int i = 0; i < nKCL; i++)
    {
        cout << "\nNHAP THONG TIN KHU CACH LY THU " << i + 1 << endl;
        cout << "Chon 1 de nhap KCL tap trung, 2 de nhap KCL tu nguyen: ";
        int chon;
        cin >> chon;
        switch (chon)
        {
            case 1: DanhSachKCL[i] = new TapTrung;
                break;
            case 2: DanhSachKCL[i] = new TuNguyen;
                break;
        }
        DanhSachKCL[i]->Nhap();
        SoNguoiNhapCanh += DanhSachKCL[i]->LayTongNguoi();
    }
    cout << "\nSo luong nguoi nhap canh vao Viet Nam: " << SoNguoiNhapCanh << endl;


    //Câu 2
    cout << "\nNhap ngay can kiem tra (dd/mm/yyyy): " << endl;
    date CheckDate;
    cin >> CheckDate;
    for (int i = 0; i < nKCL; i++)
        cout << "\nSo nguoi con trong khu cach ly thu " << i + 1 << ": " << DanhSachKCL[i]->TinhSoLuongNguoiConCachLy(CheckDate);

    //Câu 3
    int index;
    cout << "\n\nChon khu cach ly can tinh xac suat: ";
    cin >> index;
    float XacSuatTB = DanhSachKCL[index]->TinhTongXSLayBenh() / DanhSachKCL[index]->LayTongNguoi();
    cout << "Xac suat lay benh TB cua khu cach ly " << index + 1 << " la: " << XacSuatTB;
    return 0;
}
