#include "Waiter.h"


Waiter::Waiter()
{
	command = NULL;
}

void Waiter::Set_Command(Command* command)
{
	this->command = command;
}

void Waiter::Excuse()
{
	if(command!=NULL)command->Excuse();
}