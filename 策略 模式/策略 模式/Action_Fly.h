#pragma once
#include "Action.h"
class Action_Fly :
	public Action
{
public:
	Action_Fly();
	~Action_Fly();
	virtual void Start();
};

