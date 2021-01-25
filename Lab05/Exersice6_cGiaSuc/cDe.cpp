#include "cDe.h"

cDe::cDe()
{
}

cDe::~cDe()
{
}

int cDe::SinhCon()
{
	srand((unsigned)time(NULL));
	return rand() % 10;
}

int cDe::ChoSua()
{
	srand((unsigned)time(NULL));
	return rand() % 10;
}

void cDe::Keu()
{
	cout << "De keu: Bee!" << endl;
}
