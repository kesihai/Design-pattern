#pragma once
#include "Item.h"
class clothes :
	public Item
{
public:
	clothes();
	~clothes();
	void show();
	void Decorate(Item* item);
private:
	Item* item;
};

