#pragma once

class Game;
class Memory
{
public:
	Memory();
	~Memory();
	int a, b, c;
	void Set_Status(const Game* game);
	const Memory*  Get_Status();
};

