#pragma once
#include "Light.h"

class Control
{
public:
	Control();
	~Control();
	void Open();
	void Close();
private:
	Light* light_1, *light_2;
};

