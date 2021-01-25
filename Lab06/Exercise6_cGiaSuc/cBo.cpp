#include "cBo.h"

cBo::cBo()
{
}

cBo::~cBo()
{
	return;
}

int cBo::SinhCon()
{
	srand((unsigned)time(NULL));
	return rand() % 10;
}

int cBo::ChoSua()
{
	srand((unsigned)time(NULL));
	return rand() % 20;
}

void cBo::Keu()
{
	cout << "Bo keu: Boo!" << endl;
}
