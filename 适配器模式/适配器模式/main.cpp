#include <stdio.h>
#include "Bird_Adapter.h"
#include "Duck.h"

int main()
{
	Animal *f, *ff;
	f = new Duck();
	f->shut();
	ff = new Bird_Adapter();
	ff->shut();

	delete f;
	delete ff;
	getchar();
}
