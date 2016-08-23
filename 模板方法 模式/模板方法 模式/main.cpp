#include "Ceo_People.h"
#include "Employ_People.h"
#include <stdio.h>

int main()
{
	Employ_People* e = new Employ_People();
	Ceo_People* c = new Ceo_People();

	e->Get_Salary();
	c->Get_Salary();
	getchar();
	return 0;
}