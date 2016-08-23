#ifndef _BOSS_H_
#define _BOSS_H_
#include "Request.h"
#include <stdio.h>
class Boss{
public:
	Boss();
	~Boss();
	virtual void Solve_Request(Request* request) = 0;
	void Set_Boss(Boss* Pre_Boss);
	Boss* Pre_boss;
};
#endif