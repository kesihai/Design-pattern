#ifndef _COMMAND_H_
#define _COMMAND_H_
#include "Receive.h"

class Command{
public:
	Command(Receive* receive);
	void Excuse();
private:
	Receive* receive;
};
#endif