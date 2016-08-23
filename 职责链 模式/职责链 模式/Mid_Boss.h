#pragma once
#include "Boss.h"
class Mid_Boss :
	public Boss
{
public:
	Mid_Boss();
	~Mid_Boss();
	void Solve_Request(Request* request);
};

