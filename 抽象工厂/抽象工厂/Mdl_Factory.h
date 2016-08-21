#pragma once
#include "Factory.h"
class Mdl_Factory :
	public Factory
{
public:
	Mdl_Factory();
	~Mdl_Factory();
	virtual Hanburger* Create_Hanburger();
	virtual Cole* Create_Cole();
};

