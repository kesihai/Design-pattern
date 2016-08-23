#include "Game.h"


Game::Game(int a,int b,int c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}


Game::~Game()
{
}
const Game* Game::Get_Status()
{
	return this;
}
void Game::Set_Status(const Memory *memory)
{
	this->a = memory->a;
	this->b = memory->b;
	this->c = memory->c;
}
void Game::show()
{
	printf("Õ½¶·Á¦: %d %d %d\n",a,b,c);
}

void Game::Fight()
{
	a = b = c = 0;
}