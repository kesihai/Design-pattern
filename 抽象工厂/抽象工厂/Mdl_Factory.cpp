#include "Mdl_Factory.h"


Mdl_Factory::Mdl_Factory()
{
}


Mdl_Factory::~Mdl_Factory()
{
}
Hanburger* Mdl_Factory::Create_Hanburger()
{
	return new Mdl_Hanburger ();
}

Cole* Mdl_Factory::Create_Cole()
{
	return new Mdl_Cole();
}