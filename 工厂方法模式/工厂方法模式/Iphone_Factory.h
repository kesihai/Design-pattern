#pragma once
#include "Factory.h"
#include "Iphone_Phone.h"

class Iphone_Factory :public Factory
{
public:
	Iphone_Factory();
	~Iphone_Factory();
	Phone* Create_Phone();
};

