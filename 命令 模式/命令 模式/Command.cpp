#include "Command.h"

Command::Command(Receive* receive)
{
	this->receive = receive;
}

void Command::Excuse()
{
	receive->Excuse();
}