#include <iostream>
using namespace std;

/*5. Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh. Tính
điểm trung bình và xuất kết quả.*/

struct HocSinh
{
    char HoTen[100];
    float DiemToan;
    float DiemVan;
};

void Nhap(HocSinh& a)
{
    cout << "Nhap ho ten hoc sinh: ";
    gets_s(a.HoTen);
    do {
        cout << "Nhap diem toan: ";
        cin >> a.DiemToan;
    } while (a.DiemToan > 10 || a.DiemToan < 0);
    do {
        cout << "Nhap diem van: ";
        cin >> a.DiemVan;
    } while (a.DiemVan > 10 || a.DiemVan < 0);
}

float TinhDiemTrungBinh(HocSinh a)
{
    float DTB = (a.DiemToan + a.DiemVan) / 2;
    return DTB;
}

int main()
{
    HocSinh a;
    Nhap(a);
    cout << "Diem trung binh hoc sinh la: " << TinhDiemTrungBinh(a);
}