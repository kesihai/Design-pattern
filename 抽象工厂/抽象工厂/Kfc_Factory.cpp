#include "Kfc_Factory.h"


Kfc_Factory::Kfc_Factory()
{
}


Kfc_Factory::~Kfc_Factory()
{
}

Hanburger* Kfc_Factory::Create_Hanburger()
{
	return new Kfc_Hanburger();
}

Cole* Kfc_Factory::Create_Cole()
{
	return new Kfc_Cole();
}