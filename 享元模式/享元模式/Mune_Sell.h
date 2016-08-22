#pragma once
#include <map>
#include "Cofe_Sell.h"

class Mune_Sell
{
public:
	Mune_Sell();
	~Mune_Sell();
	Sell* Add(string name);
	static int count;
private:
    map<string, Sell*>mp;
};

