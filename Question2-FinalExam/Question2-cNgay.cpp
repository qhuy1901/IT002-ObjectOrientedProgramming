#include <iostream>
using namespace std;

class cNgay
{
	private:
		int ngay, thang, nam;
	public:
		cNgay();
		cNgay(int, int);
		cNgay(int, int, int);
		cNgay(const cNgay&);
		bool operator<(const cNgay&);
		friend istream& operator>>(istream&, cNgay&);
		friend ostream& operator<<(ostream&, cNgay);
};

cNgay::cNgay()
{
	ngay = thang = nam = 1;
}

cNgay::cNgay(int y, int m)
{
	ngay = 1;
	thang = m;
	nam = y;
}

cNgay::cNgay(int y, int m, int d)
{
	ngay = d;
	thang = m;
	nam = y;
}

cNgay::cNgay(const cNgay& x)
{
	ngay = x.ngay;
	thang = x.thang;
	nam = x.nam;
}

istream& operator>>(istream& is,cNgay& x)
{
	is >> x.ngay >> x.thang >> x.nam;
	return is;
}

ostream& operator<<(ostream& os, cNgay x)
{
	os << x.ngay << "/" << x.thang << "/" << x.nam;
	return os;
}

bool cNgay::operator<(const cNgay& x)
{
	if (nam < x.nam)
		return true;
	else
	{
		if (thang < x.thang)
			return true;
		else
		{
			if (ngay < x.ngay)
				return true;
		}
	}
	return false;
}

void main()
{
	cNgay ng1; // ng1 sẽ có giá trị là ngày 1 tháng 1 năm 1
	cNgay ng2(2017, 1); // ng2 sẽ có giá trị là ngày 1 tháng 1 năm 2017
	cNgay ng3(2017, 1, 7); // ng3 sẽ có giá trị là ngày 7 tháng 1 năm 2017
	cin >> ng1;
	cout << ng1;
	if (ng1 < ng2)
		cout << "Ngay 1 truoc ngay 2" << endl;
	else
		cout << "Ngay 1 khong truoc ngay 2" << endl;

}