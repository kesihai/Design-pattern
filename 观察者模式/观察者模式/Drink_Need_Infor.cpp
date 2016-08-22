#include "Drink_Need_Infor.h"


Drink_Need_Infor::Drink_Need_Infor(string name)
{
	this->name = name;
}


Drink_Need_Infor::~Drink_Need_Infor()
{
}

void Drink_Need_Infor::Add(Need_Infor* cur)
{
	list<Need_Infor*>::iterator it;
	for (it = my_infor.begin(); it != my_infor.end(); ++it)
		if ((*it) == cur) return;
	my_infor.push_back(cur);
}

void Drink_Need_Infor::Remove(Need_Infor* cur)
{
	my_infor.remove(cur);
}

void Drink_Need_Infor::Notify()
{
	list<Need_Infor*>::iterator it;
	for (it = my_infor.begin(); it != my_infor.end(); ++it)
	{
		cout << name << ": ";
		(*it)->Update();
	}
}

void Drink_Need_Infor::Update()
{
	cout <<name<< " Don't drink and go home" << endl;
}