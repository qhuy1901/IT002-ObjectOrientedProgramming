#pragma once
class cDaGiac
{
    private:
	    int n;
	    cDiem ArrDG[100];
    public:
        cDaGiac();
        cDaGiac(cDiem p[]);
        cDaGiac(const cDaGiac&);
        void Nhap();
        void Xuat();
        void TinhTien(float, float);
        void Quay(float);
        void PhongToThuNho(float);
        ~cDaGiac();
};
