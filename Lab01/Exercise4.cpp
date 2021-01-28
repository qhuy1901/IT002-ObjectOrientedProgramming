#include <iostream>
using namespace std;

/*4. Viết chương trình nhập vào một ngày. Tìm ngày kế tiếp và xuất kết quả.*/

struct NGAY
{
    int Ngay;
    int Thang;
    int Nam;
};

int KiemTraNgayHopLe(NGAY& x)
{
    if (x.Ngay < 1 || x.Thang < 1 || x.Thang > 12 || x.Nam < 1900)
        return 0;
    if ((x.Thang == 1 || x.Thang == 3 || x.Thang == 5 || x.Thang == 7 || x.Thang == 8 || x.Thang == 10 || x.Thang == 12) && x.Ngay > 31)
        return 0;
    if ((x.Thang == 2 || x.Thang == 4 || x.Thang == 6 || x.Thang == 9 || x.Thang == 11) && x.Ngay > 30)
        return 0;
    return 1;
}

void NhapNgay(NGAY& x)
{
    do {
        cout << "Nhap ngay: ";
        cin >> x.Ngay;
        cout << "Nhap thang: ";
        cin >> x.Thang;
        cout << "Nhap nam: ";
        cin >> x.Nam;
    } while (KiemTraNgayHopLe(x) == 0);
}

int KiemTraNamNhuan(int n)
{
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        return 1;
    return 0;
}

NGAY NgayKeTiep(NGAY& x)
{
    if (x.Thang == 2 && x.Ngay > 27)
    {
        if (KiemTraNamNhuan(x.Nam) == 1)
            x.Ngay++;
        else
        {
            x.Ngay = 1;
            x.Thang++;
        }
    }
    else if (x.Ngay == 31) 
    {
        if (x.Thang == 1 || x.Thang == 3 || x.Thang == 5 || x.Thang == 7 || x.Thang == 8 || x.Thang == 10 || x.Thang == 12)
        {
            if (x.Thang == 12)
            {
                x.Ngay = 1;
                x.Thang = 1;
                x.Nam++;
            }
            else
            {
                x.Ngay = 1;
                x.Thang++;
            }
        }
    }
    else if (x.Ngay == 30)
    {
        if (x.Thang == 2 || x.Thang == 4 || x.Thang == 6 || x.Thang == 9 || x.Thang == 11)
        {
            x.Ngay = 1;
            x.Thang++;
        }
        else
            x.Ngay++;
    }
    else
    {
        x.Ngay++;
    }
    return x;
}

int main()
{
    NGAY x;
    NhapNgay(x);
    NGAY TheNextDay = NgayKeTiep(x);
    cout << "\nNgay ke tiep la: "<< TheNextDay.Ngay << "/" << TheNextDay.Thang << "/" << TheNextDay.Nam;
}
