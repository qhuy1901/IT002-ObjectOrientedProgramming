class cTamGiac
{
    private:
        cDiem A, B, C;
    public:
        cTamGiac();
        cTamGiac(cDiem, cDiem, cDiem);
        cTamGiac(const cTamGiac&);
        ~cTamGiac();
        void Nhap();
        void Xuat();
        void TinhTien(float, float);
        void Quay(float);
        void PhongToThuNho(float);
};
