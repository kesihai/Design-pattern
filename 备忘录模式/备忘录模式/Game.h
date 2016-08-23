#pragma once
#include "Memory.h"
#include <stdio.h>

class Game
{
public:
	Game(int a,int b,int c);
	~Game();
	int a, b, c;
	const Game* Get_Status();
	void Set_Status(const Memory *memory);
	void show();
	void Fight();
};

