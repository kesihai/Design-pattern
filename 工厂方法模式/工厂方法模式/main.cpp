#include <iostream>
#include "HTC_Factory.h"
#include "Iphone_Factory.h"

int main()
{
	Factory* f;
	Phone * p;
	f = new HTC_Factory();

	p = f->Create_Phone();
	p->call();
	delete f;
	
	f = new Iphone_Factory();

	p = f->Create_Phone();
	p->call();
	getchar();
}