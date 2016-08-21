#include <stdio.h>
#include "Small_Key.h"
#include "Big_Key.h"

int main()
{
	Key* f, *ff;

	ff = new Big_Key();
	ff->a = new int(5);
	f = ff->Clone();
	f->show();
	
	Key* fff = new Small_Key();
	fff->a = new int(1);

	delete f;
	f = fff->Clone();
	f->show();
	getchar();
}
