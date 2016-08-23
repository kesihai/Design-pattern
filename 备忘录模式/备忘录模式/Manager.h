#pragma once
#include "Memory.h"
#include "Game.h"

class Manager
{
public:
	Manager();
	~Manager();
	const Memory* Get_Memory();
	void Set_Memory(const Game* game);
private:
	Memory memory;
};

