#include "Control.h"


Control::Control()
{
}


Control::~Control()
{
	delete light_1;
	delete light_2;
}

void Control::Open()
{
	light_1->Open();
	light_2->Open();
}

void Control::Close()
{
	light_1->Close();
	light_2->Close();
}
