#pragma once
#include "Mune_Sell.h"
#include <list>

class Client
{
public:
	Client();
	~Client();
	void Add_dish(string name);
	void Give_Money();
private:
	list<Sell*>my_list;
	Mune_Sell* mune;
};

