#include "Mune_Sell.h"


Mune_Sell::Mune_Sell()
{
}


Mune_Sell::~Mune_Sell()
{
}

int Mune_Sell::count = 0;

Sell* Mune_Sell::Add(string name)
{
	if (mp.find(name)== mp.end())
	{
		count++;
		mp[name]= new Cofe_Sell(name);
		return mp[name];
	}
	else
	{
		return mp[name];
	}
	
}
