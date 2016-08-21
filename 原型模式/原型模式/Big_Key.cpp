#include "Big_Key.h"


Big_Key::Big_Key()
{
}


Big_Key::~Big_Key()
{
}

Key* Big_Key::Clone()
{
	Key* temp = new Big_Key();
	temp->a = new int;
	*(temp->a) = *(this->a);
	return temp;
}

void Big_Key::show()
{
	printf("Big_Key  %d\n", *a);
}
