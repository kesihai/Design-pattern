#include <stdio.h>
#include "People.h"

int main()
{
	People* people = new People();
	people->Start();
	people->Set_Action(2);
	people->Start();
	people->Set_Action(3);
	people->Start();

	getchar();
	return 0;

}
