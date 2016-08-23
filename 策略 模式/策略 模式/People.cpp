#include "People.h"


People::People()
{
	type = 1;
	action = new Action_Walk();
}


People::~People()
{
	delete action;
}

void People::Set_Action(int type)
{
	if (type == this->type) return;
	delete action;
	if (type == 1) action = new Action_Walk();
	if (type == 2) action = new Action_Swim();
	if (type == 3) action = new Action_Fly();
}

void People::Start()
{
	action->Start();
}