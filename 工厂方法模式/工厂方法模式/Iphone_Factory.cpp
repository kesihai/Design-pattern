#include "Iphone_Factory.h"


Iphone_Factory::Iphone_Factory()
{
}


Iphone_Factory::~Iphone_Factory()
{
}
Phone* Iphone_Factory::Create_Phone()
{
	return new Iphone_Phone();
}
