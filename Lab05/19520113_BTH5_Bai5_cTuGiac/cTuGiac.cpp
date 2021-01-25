#include "cTuGiac.h"

cTuGiac::cTuGiac()
{
	for (int i = 0; i < 4; i++)
		ToaDo[i].x = ToaDo[i].y = 0;
}

cTuGiac::~cTuGiac()
{
	return;
}

void cTuGiac::Nhap()
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Toa do diem thu " << i + 1 << endl;
		cin >> ToaDo[i];
	}	
}

void cTuGiac::Xuat()
{
	for (int i = 0; i < 4; i++)
	{
		cout << ToaDo[i] << " ";
	}
}
