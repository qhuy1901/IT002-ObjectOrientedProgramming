#include <iostream>
using namespace std;

class DichVu
{
    public:
        virtual void Nhap() = 0;
        virtual int TinhTongTienDV() = 0;
        virtual void XuatTenDV() = 0;
};

class NangCao:public DichVu
{
    public:
        void Nhap();
        int TinhTongTienDV();
        void XuatTenDV();
};

class CoBan :public DichVu
{
    private:
        int SoLop;
        bool HoTroPT;
    public:
        void Nhap();
        int TinhTongTienDV();
        void XuatTenDV();
};

class KoThanhVien :public DichVu
{
    private:
        bool HoTroPT;
    public:
        void Nhap();
        int TinhTongTienDV();
        void XuatTenDV();
};

void NangCao::Nhap()
{

}

void NangCao::XuatTenDV()
{
    cout << "Khach hang dang su dung DV nang cao.";
}

int NangCao::TinhTongTienDV()
{
    return 1000;
}

void KoThanhVien::Nhap()
{
    cout << "Nhap 1 de ho tro PT, 0 de khong ho tro PT: ";
    cin >> HoTroPT;
}

void KoThanhVien::XuatTenDV()
{
    cout << "Khach hang dang su dung DV khong thanh vien.";
}

int KoThanhVien::TinhTongTienDV()
{
    if (HoTroPT == 1)
        return 200 * 2;
    return 200;
}

void CoBan::Nhap()
{
    cout << "Nhap 1 de ho tro PT, 0 de khong ho tro PT: ";
    cin >> HoTroPT;
    cout << "Nhap so lop can hoc: ";
    cin >> SoLop;
}

void CoBan::XuatTenDV()
{
    cout << "Khach hang dang su dung DV co ban.";
}

int CoBan::TinhTongTienDV()
{
    if (HoTroPT == 1)
        return 500 + SoLop * 100 + 100;
    return 500 + SoLop * 100;
}

class KhachHang
{
    private:
        char HoTen[100];
        int CMND;
        int ThoiGianSuDung;
        DichVu* DV;
    public:
        void Nhap();
        int TinhTongChiPhi();
        void Xuat();
};

void KhachHang::Nhap()
{
    cin.ignore();
    cout << "Nhap ten khach hang: ";
    cin.getline(HoTen, 100);
    cout << "Nhap so CMND: ";
    cin >> CMND;
    cout << "Chon 1 de chon DV nang cao, 2. DV co ban, 3. DV ko thanh vien: ";
    int chon;
    cin >> chon;
    switch (chon)
    {
        case 1:
            DV = new NangCao;
            break;
        case 2:
            DV = new CoBan;
            DV->Nhap();
            break;
        case 3:
            DV = new KoThanhVien;
            DV->Nhap();
            break;
    }
    cout << "Nhap thoi gian su dung (theo thang): ";
    cin >> ThoiGianSuDung;
}

void KhachHang::Xuat()
{
    cout << "\nTen KH: ";
    puts(HoTen);
    cout << "So CMND: " << CMND << endl;
    DV->XuatTenDV();
    cout << "\nThoi gian su dung: " << ThoiGianSuDung;
}

int KhachHang::TinhTongChiPhi()
{
    int ChiPhi = DV->TinhTongTienDV() * ThoiGianSuDung;
    return ChiPhi;
}

int main()
{
    KhachHang DS[100];
    cout << "Nhap so luong khach hang can quan ly: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nNHAP THONG TIN KHACH HANG THU " << i + 1 << endl;
        DS[i].Nhap();
    }

    cout << endl;
    for (int i = 0; i < n; i++)
        DS[i].Xuat();

    int max = DS[0].TinhTongChiPhi();
    for (int i = 1; i < n; i++)
        if (DS[i].TinhTongChiPhi() > max)
            max = DS[i].TinhTongChiPhi();

    cout << "\n\nThong tin cac khach hang da chi tieu nhieu nhat la: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (DS[i].TinhTongChiPhi() == max)
        {
            DS[i].Xuat();
            cout << endl;
        }

    }
    return 0;
}