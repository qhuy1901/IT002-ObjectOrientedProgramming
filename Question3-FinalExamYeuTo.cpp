#include <iostream>
using namespace std;

class YeuTo
{
    protected:
        int ChiSo;
    public:
        void Nhap();
        int LayChiSo();
        virtual void TinhCach() = 0;
        virtual void XuatChiSoThap() = 0;
        virtual void XuatChiSoCao() = 0;
        void XuatThongTin();
};

void YeuTo::Nhap()
{
    cin >> ChiSo;
}

void YeuTo::XuatThongTin()
{
    this->TinhCach();
    if (ChiSo > 70)
        XuatChiSoCao();
    else if (ChiSo < 30)
        XuatChiSoThap();
    else
        cout << "Khong xac dinh ro.";
    cout << endl;
}

int YeuTo::LayChiSo()
{
    return ChiSo;
}

class O :public YeuTo
{
    public:
        void TinhCach();
        void XuatChiSoThap();
        void XuatChiSoCao();
};

void O::TinhCach()
{
    cout << "San sang trai nghiem(O): ";
}

void O::XuatChiSoCao()
{
    cout << "Nguoi co diem cao o yeu to nay thuong la nguoi thich nhung...";
}

void O::XuatChiSoThap()
{
    cout << "Nguoi co diem thap o yeu to nay thuong kha bao thu...";
}

class C :public YeuTo
{
    public:
        void TinhCach();
        void XuatChiSoThap();
        void XuatChiSoCao();
};

void C::TinhCach()
{
    cout << "Tu chu tan tam(C): ";
}

void C::XuatChiSoThap()
{
    cout << "Nguoi co diem thap o yeu to nay thuong de bo cuoc...";
}

void C::XuatChiSoCao()
{
    cout << "Nguoi co diem cao o yeu to nay thuong la nguoi cham chi...";
}

class E :public YeuTo
{
    public:
        void TinhCach();
        void XuatChiSoThap();
        void XuatChiSoCao();
};

void E::TinhCach()
{
    cout << "Huong ngoai (E): ";
}

void E::XuatChiSoThap()
{
    cout << "Nguoi co diem thap o yeu to nay thuong ngai giao tiep...";
}

void E::XuatChiSoCao()
{
    cout << "Nguoi co diem cao o yeu to nay thuong la nguoi nhiet tinh...";
}

class A :public YeuTo
{
    public:
        void TinhCach();
        void XuatChiSoThap();
        void XuatChiSoCao();
};

void A::TinhCach()
{
    cout << "Hoa dong de chiu (A): ";
}

void A::XuatChiSoThap()
{
    cout << "Nguoi co diem thap o yeu to nay thuong dat loi ich cua ban than len tren...";
}

void A::XuatChiSoCao()
{
    cout << "Nguoi co diem cao o yeu to nay thuong la nguoi than thien...";
}

class N :public YeuTo
{
    public:
        void TinhCach();
        void XuatChiSoThap();
        void XuatChiSoCao();
};

void N::TinhCach()
{
    cout << "Bat on cam xuc (H): ";
}

void N::XuatChiSoThap()
{
    cout << "Nguoi co diem thap o yeu to nay thuong kiem soat duoc cam xuc...";
}

void N::XuatChiSoCao()
{
    cout << "Nguoi co diem cao o yeu to nay thuong co cam xuc tieu cuc...";
}

class Nguoi
{
    private:
        YeuTo* a[5];
    public:
        void Nhap();
        void TinhCach();
        YeuTo* LayYeuTo(int i);
};

void Nguoi::TinhCach()
{
    for (int i = 0; i < 5; i++)
    {
        a[i]->XuatThongTin();
    }
}

void Nguoi::Nhap()
{
    cout << "Nhap chi so O: ";
    a[0] = new O;
    a[0]->Nhap();
    cout << "Nhap chi so C: ";
    a[1] = new C;
    a[1]->Nhap();
    cout << "Nhap chi so E: ";
    a[2] = new E;
    a[2]->Nhap();
    cout << "Nhap chi so A: ";
    a[3] = new A;
    a[3]->Nhap();
    cout << "Nhap chi so N: ";
    a[4] = new N;
    a[4]->Nhap();
}

YeuTo* Nguoi::LayYeuTo(int i)
{
    return a[i];
}

int main()
{
    Nguoi DanhSach[100];
    int n;
    cout << "Nhap so nguoi can danh gia tam ly: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin nguoi thu " << i + 1 << endl;
        DanhSach[i].Nhap();
    }

    cout << "\nChon nguoi can xuat thong tin: ";
    int chon;
    cin >> chon;
    DanhSach[chon].TinhCach();

    cout << "\nVi tri nhung nguoi co nguy co cao ma nha tuyen dung can luu y: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (DanhSach[i].LayYeuTo(1)->LayChiSo() < 30 || DanhSach[i].LayYeuTo(4)->LayChiSo() > 70 || DanhSach[i].LayYeuTo(2)->LayChiSo() < 30)
            cout << i + 1 << " ";
    }
    return 0;
}
