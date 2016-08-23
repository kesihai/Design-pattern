#include "Manager.h"


Manager::Manager()
{
}


Manager::~Manager()
{

}

const Memory* Manager::Get_Memory()
{
	return memory.Get_Status();
}

void Manager::Set_Memory(const Game* game)
{
	return memory.Set_Status(game);
}
