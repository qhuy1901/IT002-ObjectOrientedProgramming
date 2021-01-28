#include <iostream>
#include <string>
#include "Candidate.h"
using namespace std;

void Candidate::Nhap()
{
    cin.ignore();
    cout << "Nhap ma: ";
    getline(cin, Ma);
    cout << "Nhap ten: ";
    getline(cin, Ten);
    cout << "Nhap ngay sinh: ";
    getline(cin, NgaySinh);
    do {
        cout << "Nhap diem toan: ";
        cin >> Toan;
    } while (Toan < 0 || Toan > 10);
    do {
        cout << "Nhap diem van: ";
        cin >> Van;
    } while (Van < 0 || Van > 10);
    do {
        cout << "Nhap diem anh: ";
        cin >> Anh;
    } while (Anh < 0 || Anh > 10);

}

void Candidate::Xuat()
{
    cout << "\nMa thi sinh: " << Ma;
    cout << "\nTen thi sinh: " << Ten;
    cout << "\nNgay thang nam sinh: " << NgaySinh;
    cout << "\nDiem Toan: " << Toan;
    cout << "\nDiem Van: " << Van;
    cout << "\nDiem Anh: " << Anh;
    cout << "\nTong diem " << TinhTongDiem();
}

float Candidate::TinhTongDiem()
{
    return Toan + Van + Anh;
}
