#pragma once
#include "Boss.h"
class Small_Boss :
	public Boss
{
public:
	Small_Boss();
	~Small_Boss();
	void Solve_Request(Request* request);
};

