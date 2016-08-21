#include "clothes.h"


clothes::clothes()
{
}


clothes::~clothes()
{
}

void clothes::show()
{
	if (item != NULL) item->show();
}

void clothes::Decorate(Item* item)
{
	this->item = item;
}
