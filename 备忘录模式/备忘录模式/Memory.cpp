#include "Memory.h"
#include "Game.h"

Memory::Memory()
{
}


Memory::~Memory()
{
}

void Memory::Set_Status(const Game* game)
{
	this->a = game->a;
	this->b = game->b;
	this->c = game->c;

}
const Memory*  Memory::Get_Status()
{
	return this;
}
