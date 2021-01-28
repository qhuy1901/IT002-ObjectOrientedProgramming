class PhanSo
{
    private:
        int iTuSo;
        int iMauSo;
    public:
        PhanSo RutGonPhanSo();
        float DinhGia();
        PhanSo Cong(PhanSo Frac2);
        PhanSo Tru(PhanSo Frac2);
        PhanSo Nhan(PhanSo Frac2);
        PhanSo Chia(PhanSo Frac);
        void Nhap();
        void Xuat();
};