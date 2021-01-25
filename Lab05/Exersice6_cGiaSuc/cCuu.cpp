#include "cCuu.h"

cCuu::cCuu()
{
}

cCuu::~cCuu()
{
	return;
}

int cCuu::SinhCon()
{
	srand((unsigned)time(NULL));
	return rand() % 10;
}

int cCuu::ChoSua()
{
	srand((unsigned)time(NULL));
	return rand() % 5;
}

void cCuu::Keu()
{
	cout << "Cuu keu: Miee!" << endl;
}
