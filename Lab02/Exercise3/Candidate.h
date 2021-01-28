#include <string>
using namespace std;

class Candidate
{
private:
	string Ma, Ten, NgaySinh;
	float Toan, Van, Anh;
public:
	void Nhap();
	void Xuat();
	float TinhTongDiem();
};

