#include "Mune_Sell.h"


Mune_Sell::Mune_Sell()
{
}


Mune_Sell::~Mune_Sell()
{
	//printf("hello\n");
	map<string, Sell*>::iterator it;
	for (it = mp.begin(); it != mp.end(); ++it)
		delete it->second;
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
