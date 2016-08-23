#pragma once
#include "Action.h"
class Action_Walk :
	public Action
{
public:
	Action_Walk();
	~Action_Walk();
	virtual void Start() ;
};

