#include "cGiaSuc.h"

cGiaSuc::cGiaSuc()
{
}

cGiaSuc::~cGiaSuc()
{
	return;
}

int cGiaSuc::SinhCon()
{
	srand((unsigned)time(NULL));
	return rand() % 10;
}

int cGiaSuc::ChoSua()
{
	srand((unsigned)time(NULL));
	return rand() % 20;
}

void cGiaSuc::Keu()
{
	cout << "Gia suc keu!" << endl;
}
