#include "Small_Key.h"


Small_Key::Small_Key()
{
}


Small_Key::~Small_Key()
{
}

Key* Small_Key::Clone()
{
	Key* temp = new Small_Key();
	temp->a = new int;
	*(temp->a) =*a;
	return temp;
}

void Small_Key::show()
{
	printf("Small_Key %d\n", *a);
}