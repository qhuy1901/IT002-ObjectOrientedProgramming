#pragma once
class cDiem
{
    private:
        float x, y;
    public:
        cDiem();
        cDiem(float, float);
        cDiem(const cDiem&);
        void NhapDiem();
        void XuatDiem();
        void SetX(float);
        void SetY(float);
        void Set(float, float);
        float GetX();
        float GetY();
        void TinhTienDiem(float, float);
        void QuayDiem(float);
        void ViTuDiem(float);
        ~cDiem();
};