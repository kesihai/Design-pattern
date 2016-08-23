#include "Boss.h"

void Boss::Set_Boss(Boss* Pre_Boss)
{
	this->Pre_boss = Pre_Boss;
}

Boss::Boss()
{
	Pre_boss = NULL;
}

Boss::~Boss()
{
	if (Pre_boss != NULL) delete Pre_boss;
}