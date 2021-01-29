#pragma once
class cTime
{
	private:
		int gio, phut, giay;
	public:
		cTime();
		cTime(int, int, int);
		cTime(const cTime&);
		void Nhap();
		void Xuat();
		void Set(int, int, int);
		int LayGio();
		int LayPhut();
		int LayGiay();
		void Tang1s();
		void Giam1s();
		~cTime();
};
