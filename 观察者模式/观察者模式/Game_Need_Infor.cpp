#include "Game_Need_Infor.h"


Game_Need_Infor::Game_Need_Infor(string name)
{
	this->name = name;
}


Game_Need_Infor::~Game_Need_Infor()
{
}

void Game_Need_Infor::Add(Need_Infor* cur)
{
	list<Need_Infor*>::iterator it;
	for (it = my_infor.begin(); it != my_infor.end(); ++it)
		if ((*it) == cur) return;
	my_infor.push_back(cur);
}

void Game_Need_Infor::Remove(Need_Infor* cur)
{
	my_infor.remove(cur);
}

void Game_Need_Infor::Notify()
{
	list<Need_Infor*>::iterator it;
	for (it = my_infor.begin(); it != my_infor.end(); ++it)
	{
		cout << name << ": ";
		(*it)->Update();
	}
}

void Game_Need_Infor::Update()
{
	cout <<name<< " Don't play game and go home" << endl;
}