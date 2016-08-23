#pragma once
#include "Action_Fly.h"
#include "Action_Swim.h"
#include "Action_Walk.h"
class People
{
public:
	People();
	~People();
	void Set_Action(int type);
	void Start();
private:
	int type;
	Action* action;
};

