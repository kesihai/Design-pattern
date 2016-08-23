#include <stdio.h>
#include "Manager.h"

int main()
{
	Game* game = new Game(1, 1, 1);
	Manager* manager = new Manager();

	manager->Set_Memory(game->Get_Status());
	game->show();
	game->Fight();
	game->show();
	game->Set_Status(manager->Get_Memory());
	game->show();
	getchar();
	return 0;

}