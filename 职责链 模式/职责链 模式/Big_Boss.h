#pragma once
#include "Boss.h"
class Big_Boss :
	public Boss
{
public:
	Big_Boss();
	~Big_Boss();
	void Solve_Request(Request* request);
};

