#include <iostream>
#include "Candidate.h"
#include "TestCandidate.h"
using namespace std;

int main()
{
    TestCandidate TS_list;
    TS_list.Nhap();
    cout << "\nDANH SACH CAC THI SINH CO TONG DIEM LON HON 15 LA:" << endl;
    TS_list.XuLy();
}
