#pragma once
#include "Command.h"

class Waiter
{
public:
	Waiter();
	~Waiter();
	void Set_Command(Command* command);
	void Excuse();
private:
	Command* command;
};

