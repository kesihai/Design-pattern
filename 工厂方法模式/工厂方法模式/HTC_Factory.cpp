#include "HTC_Factory.h"


HTC_Factory::HTC_Factory()
{
}

HTC_Factory::~HTC_Factory()
{
}

Phone* HTC_Factory::Create_Phone()
{
	return new HTC_Phone();
}