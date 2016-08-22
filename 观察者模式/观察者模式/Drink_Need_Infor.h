#pragma once
#include "Need_Infor.h"
class Drink_Need_Infor :
	public Need_Infor
{
public:
	Drink_Need_Infor(string name);
	~Drink_Need_Infor();
	virtual void Add(Need_Infor* cur);
	virtual void Remove(Need_Infor* cur);
	virtual void Notify();
	virtual void Update();
private:
	list<Need_Infor*>my_infor;
	string name;

};

