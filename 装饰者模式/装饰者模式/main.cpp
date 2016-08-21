#include <stdio.h>
#include "Clothes_Pants.h"
#include "Clothes_Shose.h"
#include "Clothes_Tshit.h"
#include "People.h"

int main()
{
	People* people = new People("wanglianlian ");
	clothes* pants = new Clothes_Pants();
	clothes* shose = new Clothes_Shose();
	clothes* Tshit = new Clothes_Tshit();

	pants->Decorate(people);
	shose->Decorate(pants);
	Tshit->Decorate(shose);
	Tshit->show();
	printf("\n");
	getchar();
	return 0;
}