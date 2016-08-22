#include<stdio.h>
#include <list>
#include "Drink_Need_Infor.h"
#include "Game_Need_Infor.h"
using namespace std;

int main()
{
	Need_Infor* drink_1 = new Drink_Need_Infor("drink_1");
	Need_Infor* drink_2 = new Drink_Need_Infor("drink_2");

	Need_Infor* Game_1 = new Game_Need_Infor("game_1");
	Need_Infor* Game_2 = new Game_Need_Infor("game_2");

	Need_Infor* f = new Drink_Need_Infor("infor f");
	Need_Infor* ff = new Drink_Need_Infor("infor ff");
	f->Add(drink_1);
	f->Add(drink_2);
	f->Add(Game_2);

	ff->Add(f);

	f->Notify();
	ff->Notify();
	//每一个通知者也可是是被通知者
	getchar();
	return 0;
}