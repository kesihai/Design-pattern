#pragma once
#include "Factory.h"
#include "HTC_Phone.h"
class HTC_Factory :public Factory
{
public:
	HTC_Factory();
	~HTC_Factory();
	Phone* Create_Phone();
};

