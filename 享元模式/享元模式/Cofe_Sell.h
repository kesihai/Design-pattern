#pragma once
#include "Sell.h"
class Cofe_Sell :public Sell
{
public:
	Cofe_Sell(string name);
	~Cofe_Sell();
	void sell();
private:
	string name;
};

