#pragma once
#include "People.h"
class Ceo_People :
	public People
{
public:
	Ceo_People();
	~Ceo_People();
private:
	virtual void Get_Money();
	virtual void Get_Extra_Money();
};

