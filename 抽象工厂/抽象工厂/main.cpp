#include <stdio.h>
#include "Kfc_Factory.h"
#include "Mdl_Factory.h"

int main()
{
	Factory* factory;
	Cole* cole;
	Hanburger* hanburger;

	factory = new Kfc_Factory();
	cole = factory->Create_Cole();
	hanburger = factory->Create_Hanburger();
	cole->eat();
	hanburger->eat();

	delete cole;
	delete hanburger;
	delete factory;

	factory = new Mdl_Factory();
	cole = factory->Create_Cole();
	hanburger = factory->Create_Hanburger();
	cole->eat();
	hanburger->eat();

	delete cole;
	delete hanburger;
	delete factory;
	getchar();

}