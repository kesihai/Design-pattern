#pragma once
#include "People.h"
class Employ_People :
	public People
{
public:
	Employ_People();
	~Employ_People();
private:
	virtual void Get_Money();
	virtual void Get_Extra_Money();
};

