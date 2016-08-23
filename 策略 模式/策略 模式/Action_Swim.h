#pragma once
#include "Action.h"
class Action_Swim :
	public Action
{
public:
	Action_Swim();
	~Action_Swim();
	virtual void Start();
};

