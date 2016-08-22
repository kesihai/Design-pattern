#include "Client.h"


Client::Client()
{
	mune = new Mune_Sell();
}


Client::~Client()
{
	delete mune;
}

void Client::Add_dish(string name)
{
	my_list.push_back(mune->Add(name));
}

void Client::Give_Money()
{
	list<Sell*>::iterator it;
	for (it = my_list.begin(); it != my_list.end(); ++it)
		(*it)->sell();
}