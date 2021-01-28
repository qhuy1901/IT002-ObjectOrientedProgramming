class SoPhuc
{
    private:
        float Thuc;
        float Ao;
    public:
        void Nhap();
        void Xuat();
        float DinhGia();
        SoPhuc Cong(SoPhuc);
        SoPhuc Tru(SoPhuc);
        SoPhuc Nhan(SoPhuc);
        SoPhuc Chia(SoPhuc);
};