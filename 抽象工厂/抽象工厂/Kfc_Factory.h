#pragma once
#include "Factory.h"
class Kfc_Factory :
	public Factory
{
public:
	Kfc_Factory();
	~Kfc_Factory();
	virtual Hanburger* Create_Hanburger();
	virtual Cole* Create_Cole();
};

